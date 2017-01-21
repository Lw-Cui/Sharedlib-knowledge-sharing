int foo2() {
    return 5;
}

int foo1();
extern "C" int bar1() {
	return foo1();
}
