main: linkedlist.o main.o
	gcc linkedlist.o main.o -o main

linkedlist.o: Linked_List.c Linked_List.h
	gcc -c -g Linked_List.c -o linkedlist.o

main.o: main.c
	gcc -c -g main.c -o main.o

clear:
	rm *.o main
