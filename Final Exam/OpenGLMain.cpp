// Final Exam
// Graphs the function y=x^2
#include <GL/freeglut.h> // Was on the computer when this was made. Will throw an error if it isnt.
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void drawLine(int x1, int y1, int x2, int y2)
{
	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
	glFlush();
}

void drawFunction(void)
{
	const int min = -20;
	const int max = 20;
	
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex2d(min * 16, pow(min, 2) + 15);
	for (float x = min + .05; x < max; x+=.05)
	{
		float vertx = x * 16 + 320.0;
		float y = pow(x, 2) + 65;
		glVertex2d(vertx, y);
		glEnd();
		glFlush();
		glBegin(GL_LINES);
		glVertex2d(vertx, y);
	}
	glEnd();
	glFlush();
	
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glColor3f(0.0, 1.0, 0.0);
	drawLine(320, 0, 320, 480);
	glColor3f(1.0, 0.0, 0.0);
	drawLine(0, 50, 640, 50);
	
	drawFunction();
	glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);

    glutCreateWindow("Austin Stephens Part 3");
	myInit();
    glutDisplayFunc(display);


    glutMainLoop();
    return EXIT_SUCCESS;
}
