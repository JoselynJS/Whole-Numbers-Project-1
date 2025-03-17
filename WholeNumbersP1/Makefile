prog: main.o whole_number.o
	g++ -std=c++11 -o prog main.o whole_number.o

main.o: whole_number.h
	g++ -std=c++11 -c main.cpp

whole_number.o: whole_number.h
	g++ -std=c++11 -c whole_number.cpp

clean:
	rm -f *.o prog
