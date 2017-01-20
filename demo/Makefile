main.out: main.cpp l1.so l2.so
	g++ main.cpp -ldl -o main.out -g -O0 

l1.so: l1.cpp
	g++ l1.cpp -shared -fPIC -o l1.so -g -O0

l2.so: l2.cpp
	g++ l2.cpp -shared -fPIC -o l2.so -g -O0

clean:
	rm *.out *.so
