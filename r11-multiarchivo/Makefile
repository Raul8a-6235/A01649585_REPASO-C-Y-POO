programa: main.o punto.o
	g++ main.o punto.o -o programa

main.o: main.cpp punto.h
	g++ -std=c++17 -Wall -Wextra -c main.cpp

punto.o: punto.cpp punto.h
	g++ -std=c++17 -Wall -Wextra -c punto.cpp

clean:
	rm -f *.o programa

	//Para el Makefile me apoyé de la IA.