prog: main.o Whole_Number.o
	g++ -std=c++11 -o prog main.o Whole_Number.o

main.o: Whole_Number.h
	g++ -std=c++11 -c main.cpp

whole_number.o: Whole_Number.h
	g++ -std=c++11 -c Whole_Number.cpp

clean:
	rm -f *.o prog
