#/***		Makefile		***/


main: main.o fibonacci.o factoriel.o
	gcc main.o fibonacci.o factoriel.o -o main


main.o: main.c fibonacci.c  factoriel.c  ./header/fibonacci.h ./header/factoriel.h 
	gcc -c  main.c fibonacci.c factoriel.c


clear:
	rm *.o 