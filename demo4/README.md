```C++
$ ./run.sh
--main.cpp--
#include <dlfcn.h>
int main(int argc, char **argv) {
    void *handle1 = dlopen("./l1.so", RTLD_LAZY | RTLD_GLOBAL);
    void *handle2 = dlopen("./l2.so", RTLD_LAZY | RTLD_GLOBAL);
    int (*ptr1)(void) = (int  (*)(void))dlsym(handle1, "bar1");
    int (*ptr2)(void) = (int  (*)(void))dlsym(handle2, "bar2");
    return (*ptr1)() + (*ptr2)();
}

--l1.cpp--
int foo2() {
    return 5;
}

int foo1();
extern "C" int bar1() {
	return foo1();
}

--l2.cpp--

int foo1() {
	return 42;
}

int foo2();
extern "C" int bar2() {
    return foo2();
}

g++ l1.cpp -shared -fPIC -o l1.so -g -O0
g++ l2.cpp -shared -fPIC -o l2.so -g -O0
g++ main.cpp -ldl -o main.out -g -O0

./main.out
return value of main.out is 47
```
