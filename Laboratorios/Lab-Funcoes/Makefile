.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	Funcoes Parametros Modulos

Funcoes:  Funcoes.o 
	gcc -o $@ $^

Parametros:  Parametros.o 
	gcc -o $@ $^

Modulos:  Modulos.o Ponto.o
	gcc -o $@ $^

clean:
	rm *.o Funcoes Parametros Modulos