Programme : main.o initjeu.o distribuer.o
	gcc main.o initjeu.o -o Programme
main.o : main.c main.h initjeu.c
	gcc -c main.c -o main.o
initjeu.o : initjeu.c initjeu.h
	gcc -c initjeu.c -o initjeu.o
distribuer.o : distribuer.c distribuer.h
	gcc -c distribuer.c -o distribuer.o

	
