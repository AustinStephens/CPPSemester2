#include <iostream>
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <math.h>

using namespace std;

void myDisplay(void);
void myInit(void);
void drawTree(void);
void drawTrunk(void);

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL");

	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawTrunk();
	drawTree();
	glFlush();
	glutSwapBuffers();
}

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void drawTrunk(void)
{
	glColor3f(0.52, 0.37, 0.26);
	glBegin(GL_POLYGON);
	glVertex2d(230, 0);
	glVertex2d(270, 0);
	glVertex2d(270, 100);
	glVertex2d(230, 100);
	glEnd();
}

void drawTree(void)
{
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(150, 100);
	glVertex2d(350, 100);
	glVertex2d(300, 150);
	glVertex2d(330, 150);
	glVertex2d(280, 200);
	glVertex2d(310, 200);
	glVertex2d(260, 250);
	glVertex2d(290, 250);
	glVertex2d(250, 300);

	glVertex2d(210, 250);
	glVertex2d(240, 250);
	glVertex2d(190, 200);
	glVertex2d(220, 200);
	glVertex2d(170, 150);
	glVertex2d(200, 150);

	glEnd();
}
