all: main.o sieve.o
	gcc main.o sieve.o -lm
	
main.o: main.c sieve.h
	gcc -c main.c
	
sieve.o: sieve.c
	gcc -c sieve.c
