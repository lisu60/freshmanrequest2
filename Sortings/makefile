main: sort.o main.o linkedlist.o
	gcc sort.o main.o linkedlist.o -o main

sort.o: Sort.c Sort.h
	gcc -c -g Sort.c -o sort.o

linkedlist.o: Linked_List.c Linked_List.h
	gcc -c -g Linked_List.c -o linkedlist.o

main.o: main.c Sort.h Linked_List.h
	gcc -c -g main.c -o main.o

clear:
	rm *.o main
