all: main
date.o: date.c date.h
	gcc -c date.c
main.o: main.c date.c
	gcc -o main main.o date.o
