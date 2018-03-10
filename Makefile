all: doub

test: doub
	./test.sh

doub:
	g++ doub.cpp -o ./build/doub -std=c++14
