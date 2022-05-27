/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include"windows.h"

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

/* RGB Color Code

0 0 0 - Black
0 0 1 - Blue
0 1 0 - Green
0 1 1 - Cyan
1 0 0 - Red
1 0 1 - Magenta
1 1 0 - Yellow
1 1 1 - White

*/

void TopPentagon()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0, 0.90);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.50, 0.50);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.35, 0.35);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.35, 0.35);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.50, 0.50);
    glEnd();
}

void MidPentagon()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.35,0.35);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.90,0.15);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0,-0.05);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.90,0.15);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.35,0.35);
    glEnd();
}

void MidParallelogram()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0,-0.05);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.50, -0.30);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0,-0.50);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.50,-0.30);
    glEnd();
}

void Triangle()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.25,-0.5);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.00, -0.80);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.25,-0.50);
    glEnd();
}

void display(){

    TopPentagon();
    MidPentagon();
    MidParallelogram();
    Triangle();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow(" Creating Task 2 and displaying it.");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
