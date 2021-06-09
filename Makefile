all: main
person.o: person.c person.h date.c date.h
	gcc -c person.c
list.o: list.c date.c list.h date.h
	gcc -c list.c
date.o: date.c date.h
	gcc -c date.c
main.o: main.c date.c person.c list.c
	gcc -c main.c
main: main.o date.o person.o list.o
	gcc -o main main.o date.o person.o list.o
