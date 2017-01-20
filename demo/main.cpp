#include <dlfcn.h>
extern "C" int bar();
int main(int argc, char **argv) {  
    void *handle1 = dlopen("./l1.so", RTLD_LAZY | RTLD_GLOBAL);
    void *handle2 = dlopen("./l2.so", RTLD_LAZY);
    int (*ptr)(void) = (int  (*)(void))dlsym(handle2, "bar");
    return (*ptr)();
}  
