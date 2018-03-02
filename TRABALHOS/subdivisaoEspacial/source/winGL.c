#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#if defined (__APPLE__) || defined(MACOSX)
	#include <GLUT/glut.h>
#else
	#include <GL/glut.h>
#endif

#include "EstruturasDeDados.h"
#include "winGL.h"
#include "trabalho.h"
		
extern GLint	wLargura,
				wAltura;
				
extern float 	fov;
extern double 	rotateX,
				rotateY,
				rotateZ;
				
float Cores[8][3] = { 	{0.0, 0.0, 0.0},
						{1.0, 0.0, 0.0},
						{0.0, 1.0, 0.0},
						{0.0, 0.0, 1.0},
						{1.0, 0.0, 1.0},
						{0.0, 1.0, 1.0},
						{1.0, 1.0, 0.0},
						{0.5, 0.5, 0.5} };
						
/// ***********************************************************************
/// ** 
/// ***********************************************************************

void desenhaCubo(tPonto pMin, tPonto pMax) {
	
tPonto V0 = {pMin.x, pMin.y, pMin.z};
tPonto V1 = {pMax.x, pMin.y, pMin.z};
tPonto V2 = {pMax.x, pMax.y, pMin.z};
tPonto V3 = {pMin.x, pMax.y, pMin.z};
tPonto V4 = {pMin.x, pMin.y, pMax.z};
tPonto V5 = {pMax.x, pMin.y, pMax.z};
tPonto V6 = {pMax.x, pMax.y, pMax.z};
tPonto V7 = {pMin.x, pMax.y, pMax.z};
					
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fov, 1.0, 0.1, 8.0);
	gluLookAt( 3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    glRotatef(rotateX, 1.0, 0.0, 0.0);
    glRotatef(rotateY, 0.0, 1.0, 0.0);
    glRotatef(rotateZ, 0.0, 0.0, 1.0);
    
	glBegin(GL_QUADS);
	
		// red side - front F0( V0, V1, V2, V3)
		glColor3fv(Cores[RED]);
		glVertex3f(V0.x, V0.y, V0.z);
		glVertex3f(V1.x, V1.y, V1.z);
		glVertex3f(V2.x, V2.y, V2.z);
		glVertex3f(V3.x, V3.y, V3.z);
	
		// green side - back  F1( V4, V5, V6, V7)
		glColor3fv(Cores[GREEN]);
		glVertex3f(V4.x, V4.y, V4.z);
		glVertex3f(V5.x, V5.y, V5.z);
		glVertex3f(V6.x, V6.y, V6.z);
		glVertex3f(V7.x, V7.y, V7.z);
	
		// blue side - left F2( V0, V3, V7, V4)
		glColor3fv(Cores[BLUE]);
		glVertex3f(V0.x, V0.y, V0.z);
		glVertex3f(V3.x, V3.y, V3.z);
		glVertex3f(V7.x, V7.y, V7.z);
		glVertex3f(V4.x, V4.y, V4.z);
	
		// yellow side - right F3( V1, V5, V6, V2)
		glColor3fv(Cores[YELLOW]);
		glVertex3f(V1.x, V1.y, V1.z);
		glVertex3f(V5.x, V5.y, V5.z);
		glVertex3f(V6.x, V6.y, V6.z);
		glVertex3f(V2.x, V2.y, V2.z);
	
		// magneta side - top F4( V2, V6, V7, V3)
		glColor3fv(Cores[MAGENTA]);
		glVertex3f(V2.x, V2.y, V2.z);
		glVertex3f(V6.x, V6.y, V6.z);
		glVertex3f(V7.x, V7.y, V7.z);
		glVertex3f(V3.x, V3.y, V3.z);
	
		// cyan side - bottom F5( V0, V4, V5, V1)
		glColor3fv(Cores[CYAN]);
		glVertex3f(V0.x, V0.y, V0.z);
		glVertex3f(V4.x, V4.y, V4.z);
		glVertex3f(V5.x, V5.y, V5.z);
		glVertex3f(V1.x, V1.y, V1.z);
		
	glEnd();		
}							
						
/// ***********************************************************************
/// ** 
/// ***********************************************************************

void desenhaLinha(tPonto P0, tPonto P1, eCor c) {
	
    glBegin(GL_LINES);
		glColor3fv(Cores[c]);
		glVertex2f(P0.x, P0.y);
		glVertex2f(P1.x, P1.y);
    glEnd();   
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void desenhaPonto(tPonto P, eCor c) {
	
	glColor3fv(Cores[c]);

    glBegin(GL_POINTS);
		glVertex2f(P.x, P.y);
    glEnd();   
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void desenhaCirculo(tPonto P0, float raio, int n, eCor c) {
	
#define GRAD2RAD(a)	(a) * M_PI / 180.0

int i;
tPonto p;
float teta = 360.0 / n;
	
	glColor3fv(Cores[c]);

    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(P0.x, P0.y);
    	for (i = 0.0 ; i <= 360.0 ; i += teta) {
    		p.x = P0.x + raio * cos(GRAD2RAD(i));	
    		p.y = P0.y + raio * sin(GRAD2RAD(i));	
    		glVertex2f(p.x, p.y);
    		}
    glEnd(); 
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void initOpenGL() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glEnable(GL_DEPTH_TEST);
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei) w, (GLsizei) h); 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
//	glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);
	gluPerspective(fov, 1.0, 0.1, 8.0);
	gluLookAt( 3.0, 3.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************

void criaJanela(int argc, char** argv) {
	
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (wAltura, wLargura);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Visualiza Objeto Implicito - Estrutura de Dados");
}


/// ***********************************************************************
/// ** 
/// ***********************************************************************

void initEventos() {
	
    glutDisplayFunc(desenho);
    glutKeyboardFunc(teclado);
    glutSpecialFunc(tecladoEspecial);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutIdleFunc(idle);
	
	glutMainLoop();

}


