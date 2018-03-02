.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	mainListas listaVetorInterativa

mainListas:  mainListas.o listaVetor.o
	gcc -o $@ $^

listaVetorInterativa: listaVetorInterativa.o listaVetor.o
	gcc -o $@ $^


clean:
	rm *.o *.*~ *~ mainListas listaVetorInterativa