int foo();
extern "C" int bar() {
    return foo();
}
