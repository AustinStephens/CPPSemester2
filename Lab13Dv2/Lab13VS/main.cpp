// OpenGL
// Draws a Christmas tree

//#include "GL\glew.h"
#include "GL\freeglut.h"
#include <math.h>

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
	glVertex2d(250.0, 100.0);
	glVertex2d(350.0, 100.0);
	glVertex2d(300.0, 150.0);
	glVertex2d(330.0, 150.0);
	glVertex2d(280.0, 200.0);
	glVertex2d(310.0, 200.0);
	glVertex2d(260.0, 250.0);
	glVertex2d(290.0, 250.0);
	glVertex2d(250.0, 300.0);
	glEnd();

	
	//had to start a new one I think it can't draw both halves at once since it's concave only?
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 100.0);
	glVertex2d(150.0, 100.0);
	glVertex2d(200.0, 150.0);
	glVertex2d(170.0, 150.0);
	glVertex2d(220.0, 200.0);
	glVertex2d(190.0, 200.0);
	glVertex2d(240.0, 250.0);
	glVertex2d(210.0, 250.0);
	glVertex2d(250.0, 300.0);

	glEnd();

	glColor3f(0.5, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(250, 250);
	glVertex2d(240, 240);
	glVertex2d(250, 230);
	glVertex2d(260, 240);
	glEnd();

	glColor3f(0.5, 0.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2d(250, 150);
	glVertex2d(240, 140);
	glVertex2d(250, 130);
	glVertex2d(260, 140);
	glEnd();

	glColor3f(0.0, 0.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2d(220, 200);
	glVertex2d(210, 190);
	glVertex2d(220, 180);
	glVertex2d(230, 190);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2d(280, 200);
	glVertex2d(290, 190);
	glVertex2d(280, 180);
	glVertex2d(270, 190);
	glEnd();
}
