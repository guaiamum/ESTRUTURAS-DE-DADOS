.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	mainListasVetorEncadeado

mainListasVetorEncadeado: mainListasVetorEncadeado.o listaVetorEncadeado.o
	gcc -o $@ $^


clean:
	rm *.o *.*~ *~ mainListasVetorEncadeado