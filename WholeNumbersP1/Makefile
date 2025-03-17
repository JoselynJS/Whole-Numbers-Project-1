prog: main.o wholenumber.o
	g++ -std=c++11 -o prog main.o wholenumber.o

main.o: wholenumber.h
	g++ -std=c++11 -c main.cpp

wholenumber.o: wholenumber.h
	g++ -std=c++11 -c wholenumber.cpp

clean:
	rm -f *.o prog
