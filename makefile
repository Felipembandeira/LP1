oplab2: main.o lab2.o
	g++ -o oplab2 -Wall -ansi -pedantic -O0 -g main.o lab2.o

main.o: main.cpp lab2.h
	g++ -c main.cpp

lab2.o: lab2.cpp lab2.h
	g++ -c lab2.cpp

clean:
	rm -f oplab2
clean_all:
	rm -f *.o oplab2
