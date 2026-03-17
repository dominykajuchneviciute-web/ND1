test.exe : main.o priority.o
	gcc -std=c99 -o test.exe main.o priority.o

main.o : main.c priority.h
	gcc -c -std=c99 main.c

priority.o : priority.c priority.h
	gcc -c -std=c99 priority.c