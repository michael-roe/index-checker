all: gesperrt denumbe

gesperrt: gesperrt.c
	gcc -o gesperrt gesperrt.c

denumber: denumber.o
	gcc -o denumber denumber.c
