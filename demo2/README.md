```C++
$ ./run.sh
--main.cpp--
#include <dlfcn.h>
extern "C" int bar();
int main(int argc, char **argv) {
    void *handle1 = dlopen("./l1.so", RTLD_LAZY | RTLD_GLOBAL);
    void *handle2 = dlopen("./l2.so", RTLD_LAZY);
    int (*ptr)(void) = (int  (*)(void))dlsym(handle2, "bar");
    return (*ptr)();
}

--l1.cpp--
int foo() {
    return 5;
}

--l2.cpp--
int foo();
extern "C" int bar() {
    return foo();
}

g++ l1.cpp -shared -fPIC -o l1.so -g -O0
g++ l2.cpp -shared -fPIC -o l2.so -g -O0
g++ main.cpp -ldl -o main.out -g -O0

./main.out
return value of main.out is 5
```

