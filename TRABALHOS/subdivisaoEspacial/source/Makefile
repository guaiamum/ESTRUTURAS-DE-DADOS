.c.o:   $*.h
	gcc -c $*.c -Wno-deprecated

.cpp.o:	$*.h
	g++	-c $*.cpp -Wno-deprecated

all:	trabalho

trabalho:  trabalho.o winGL.o cbr.o
	gcc -o $@ $^ -framework OpenGL -framework GLUT

clean:
	rm *.o *.*~ *~ trabalho
