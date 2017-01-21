#include <dlfcn.h>
int main(int argc, char **argv) {  
    void *handle1 = dlopen("./l1.so", RTLD_LAZY | RTLD_GLOBAL);
    void *handle2 = dlopen("./l2.so", RTLD_LAZY | RTLD_GLOBAL);
    int (*ptr1)(void) = (int  (*)(void))dlsym(handle1, "bar1");
    int (*ptr2)(void) = (int  (*)(void))dlsym(handle2, "bar2");
    return (*ptr1)() + (*ptr2)();
}  
