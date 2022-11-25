#! /bin/bash

CC=gcc
DF= -g
CF= -c

linklist:main.o mainMenu.o createLinklist.o insertNode.o deleteNode.o displayLinklist.o sortLinklist.o init.o exitProgram.o createNode.o insertMenu.o insertBeg.o insertEnd.o insertNth.o insertKey.o deleteMenu.o deleteBeg.o deleteEnd.o deleteNth.o deleteKey.o
	${CC} -o linklist main.o mainMenu.o createLinklist.o insertNode.o deleteNode.o displayLinklist.o sortLinklist.o init.o exitProgram.o createNode.o insertMenu.o insertBeg.o insertEnd.o insertNth.o insertKey.o deleteMenu.o deleteBeg.o deleteEnd.o deleteNth.o deleteKey.o

deleteMenu.o: deleteMenu.c headers.h dataStruct.h declarations.h
	${CC} -c deleteMenu.c
deleteBeg.o: deleteBeg.c headers.h dataStruct.h declarations.h
	${CC} -c deleteBeg.c
deleteEnd.o: deleteEnd.c headers.h dataStruct.h declarations.h
	${CC} -c deleteEnd.c
deleteNth.o: insertBeg.c headers.h dataStruct.h declarations.h
	${CC} -c deleteNth.c

deleteKey.o: deleteKey.c headers.h dataStruct.h declarations.h
	${CC} -c deleteKey.c

insertBeg.o: insertBeg.c headers.h dataStruct.h declarations.h
	${CC} -c insertBeg.c

insertEnd.o: insertEnd.c headers.h dataStruct.h declarations.h
	${CC} -c insertEnd.c
insertNth.o: insertNth.c headers.h dataStruct.h declarations.h
	${CC} -c insertNth.c
insertKey.o: insertMenu.c headers.h dataStruct.h declarations.h
	${CC} -c insertKey.c

insertMenu.o: insertMenu.c headers.h dataStruct.h declarations.h
	${CC} -c insertMenu.c

exitProgram.o: exitProgram.c headers.h dataStruct.h declarations.h
	${CC} -c exitProgram.c

createNode.o: createNode.c headers.h dataStruct.h declarations.h
	${CC} -c createNode.c

init.o: init.c headers.h dataStruct.h declarations.h
	${CC} -c init.c

sortLinklist.o: sortLinklist.c headers.h dataStruct.h declarations.h
	${CC} -c sortLinklist.c

displayLinklist.o: displayLinklist.c headers.h dataStruct.h declarations.h
	${CC} -c displayLinklist.c

deleteNode.o: deleteNode.c headers.h dataStruct.h declarations.h
	${CC} -c deleteNode.c

insertNode.o: insertNode.c headers.h dataStruct.h declarations.h
	${CC} -c insertNode.c

createLinklist.o: createLinklist.c headers.h dataStruct.h declarations.h
	${CC} -c createLinklist.c

mainMenu.o: mainMenu.c headers.h dataStruct.h declarations.h
	${CC} -c mainMenu.c

main.o: main.c headers.h dataStruct.h declarations.h
	${CC} -c main.c

clean:
	-rm *.o
	-rm linklist
 	


