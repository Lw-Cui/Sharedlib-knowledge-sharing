
int foo1() {
	return 42;
}

int foo2();
extern "C" int bar2() {
    return foo2();
}
