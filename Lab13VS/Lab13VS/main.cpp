// OpenGL
// Draws a multicolored triangle.
#include "GL\glew.h"
#include "GL\freeglut.h"

void myDisplay(void);
void myInit(void);
void drawLine(int, int, int, int);

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

void drawLine(int x1, int y1, int x2, int y2)
{
	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
	glFlush();
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glLineWidth(1.0);
	drawLine(230, 250, 250, 290);
	glColor3f(0.0, 1.0, 0.0);
	drawLine(250, 290, 270, 250);
	glColor3f(0.0, 0.0, 1.0);
	drawLine(270, 250, 230, 250);
	glutSwapBuffers();
}

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}
