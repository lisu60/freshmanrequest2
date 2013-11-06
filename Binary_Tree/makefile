main: binarytree.o main.o
	gcc binarytree.o main.o -o main

binarytree.o: Binary_Tree.c Binary_Tree.h
	gcc -c -g Binary_Tree.c -o binarytree.o

main.o: main.c Binary_Tree.h
	gcc -c -g main.c -o main.o

clear:
	rm *.o main
