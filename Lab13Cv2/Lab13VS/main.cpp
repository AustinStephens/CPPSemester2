// OpenGL
// Draws the cosine function from -4PI TO 4PI.
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <math.h>

void myDisplay(void);
void myInit(void);
void drawLine(int, int, int, int);
void drawCosine(void);

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
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(1.0);
	glLineWidth(1.0);
	drawLine(0, 250, 500, 250);
	drawLine(250, 0, 250, 500);
	glFlush();
	glColor3f(1.0, 0.0, 0.0);
	drawCosine();
	glutSwapBuffers();
}

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void drawCosine(void)
{
	const double PI = 3.14159265;
	const double min = -(4.0 * PI); //in radians
	const double max = (4.0 * PI); //interval is -4pi to 4pi
	glBegin(GL_LINES);
	glVertex2d(min * 10 + 250, cos(min) * 10 + 250);
	for (double x = min + .1; x <= max; x += .1)
	{
		double y = cos(x);
		double vertx = x * 10 + 250.0; //scaled it by 10 and centered it so you can see
		double verty = y * 10 + 250.0;
		glVertex2d(vertx, verty);
		glEnd();
		glFlush();
		glBegin(GL_LINES);
		glVertex2d(vertx, verty);
	}
	glVertex2d(max * 10 + 250, cos(max) * 10 + 250);
	glEnd();
	glFlush();
}
