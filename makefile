all: main.o
	gcc -o program main.o
main.o:
	gcc -c main.c

run:
	./program
clean:
	rm *.o program