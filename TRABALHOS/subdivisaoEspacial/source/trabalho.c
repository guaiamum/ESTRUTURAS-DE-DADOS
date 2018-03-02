#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

#if defined (__APPLE__) || defined(MACOSX)
	#include <GLUT/glut.h>
#else
	#include <GL/glut.h>
#endif

#include "EstruturasDeDados.h"
#include "winGL.h"
#include "cbr.h"

int		wLargura 	= 500,
		wAltura 	= 500;

tPonto	max,
		min;

double 	rotateX		= 0.0,
				rotateY		= 0.0,
				rotateZ		= 0.0;

double 	zoom		= 1.0;
float 	fov			= 70.0;

double rotate_step	= 10.0;
double zoom_step	= 1.0;

/// ***********************************************************************
/// **
/// ***********************************************************************

void desenho(void) {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    desenhaCubo(max, min);

    glutSwapBuffers();
	}


/// ***********************************************************************
/// **
/// ***********************************************************************

void tecladoEspecial(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP	:
								break;
		case GLUT_KEY_DOWN	:
								break;
		case GLUT_KEY_LEFT	:
								break;
		case GLUT_KEY_RIGHT	:
								break;
		}
	glutPostRedisplay();
}

/// ***********************************************************************
/// **
/// ***********************************************************************

void delay(int value) {

	printf("Delay %d\n", value);
	glutPostRedisplay();
}

/// ***********************************************************************
/// **
/// ***********************************************************************

void teclado(unsigned char key, int x, int y) {
	switch (key) {
		case 27		: 	exit(0);
						break;
		case 'd'	:
		case 'D'	:	glutTimerFunc(500, delay, 0);
						break;

		case 'X'	:	rotateX += rotate_step;
        				break;
        case 'x'	:	rotateX -= rotate_step;
        				break;
        case 'Y'	:	rotateY += rotate_step;
        				break;
        case 'y'	:	rotateY -= rotate_step;
        				break;
        case 'Z'	:	rotateZ += rotate_step;
        				break;
        case 'z'	:	rotateZ -= rotate_step;
        				break;
        case '+'	:	fov -= zoom_step;
        				break;
        case '-'	:	fov += zoom_step;
        				break;
		}
	glutPostRedisplay();
}

/// ***********************************************************************
/// **
/// ***********************************************************************

void mouse(int button, int button_state, int x, int y ) {

	if 	(button_state == GLUT_DOWN ) {
		switch (button) {

			case GLUT_LEFT_BUTTON	:
										break;

			case GLUT_RIGHT_BUTTON	:
										break;
			}
		glutPostRedisplay();
		}
}

/// ***********************************************************************
/// **
/// ***********************************************************************

void idle() {
	//test();
	glutPostRedisplay();
}

/// ***********************************************************************
/// ***********************************************************************
/// **
/// ***********************************************************************
/// ***********************************************************************

int main(int argc, char** argv) {

int i;

	max.x =
	max.y =
	max.z = 1.0f;

	min.x =
	min.y =
	min.z = -1.0f;

	criaJanela(argc, argv);

    initOpenGL();

    initEventos();

    return 0;
}
