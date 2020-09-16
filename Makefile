CC = gcc

all: Output.exe clean


Output.exe: main.o admin.o user.o check.o linkedList.o 
	gcc main.o admin.o user.o check.o linkedList.o  -o Output.exe

main.o: main.c 
	gcc -c main.c

admin.o: src/admin.c 
	gcc -c src/admin.c

user.o: src/user.c 
	gcc -c src/user.c
 
check.o: src/check.c 
	gcc -c src/check.c

linkedList.o: src/linkedList.c 
	gcc -c src/linkedList.c

clean: 
	-rm *.o