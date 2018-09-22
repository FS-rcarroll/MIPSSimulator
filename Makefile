CC= gcc
CXX= g++
DEBUG=-O0 -g

all: clean asm.exe union-sample.exe

.cpp.o:
	$(CXX) $(DEBUG) -c -o $@ $<  -std=c++11

asm.exe: assem.o
	$(CXX) -o $@ $< -std=c++11

union-sample.exe: union-sample.o
	$(CXX) -o $@ $< -std=c++11

clean:
	rm -f *.o *.exe *~ \#*\#
