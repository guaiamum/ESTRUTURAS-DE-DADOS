.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	MetodosDeBusca

MetodosDeBusca:  MetodosDeBusca.o buscaSeq.o buscaSeqOrd.o buscaBin.o insertSort.o
	gcc -o $@ $^

clean:
	rm *.o *.*~ *~ MetodosDeBusca