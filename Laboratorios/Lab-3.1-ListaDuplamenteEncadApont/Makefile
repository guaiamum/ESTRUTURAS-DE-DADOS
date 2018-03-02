.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	mainListaEncadeada

mainListaEncadeada: mainListaEncadeada.o listaEncadeada.o
	gcc -o $@ $^


clean:
	rm *.o *.*~ *~ mainListaEncadeada