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

// START OF 1

void TopPentagon1()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0, 0.90);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.10, 0.75);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.05, 0.65);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.05, 0.65);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.10, 0.75);
    glEnd();
}

void MidPentagon1()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.05, 0.65);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.20,0.55);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0, 0.45);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.20,0.55);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.05, 0.65);
    glEnd();
}

void MidParallelogram1()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0, 0.45);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.10, 0.32);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0,0.19);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.10,0.32);
    glEnd();
}

void Triangle1()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.05,0.19);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.00, 0.00);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.05,0.19);
    glEnd();
}

// END OF 1

// --------------------------------

// START OF 2

void TopPentagon2()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.87, 0.32);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.72, 0.34);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.68, 0.28);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.70, 0.23);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.77, 0.21);
    glEnd();
}

void MidPentagon2()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.68, 0.28);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.55,0.36);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.50, 0.20);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.64,0.08);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.70, 0.23);
    glEnd();
}

void MidParallelogram2()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.50, 0.20);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.34, 0.25);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.22,0.10);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.41,0.07);
    glEnd();
}

void Triangle2()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.20,0.15);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.00, 0.00);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.24,0.05);
    glEnd();
}

// END OF 2

// --------------------------------

// START OF 3

void TopPentagon3()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.60, -0.87);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.57, -0.68);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.48, -0.64);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.40, -0.70);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.42, -0.78);
    glEnd();
}

void MidPentagon3()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.48, -0.64);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.55,-0.45);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.28, -0.48);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.22, -0.73);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.40, -0.70);
    glEnd();
}

void MidParallelogram3()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.28, -0.48);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.29, -0.31);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.11,-0.20);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.11,-0.42);
    glEnd();
}

void Triangle3()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.15,-0.17);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.00, 0.00);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.06,-0.22);
    glEnd();
}

// END OF 3

// --------------------------------

// START OF 4

void TopPentagon4()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.60, -0.87);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.57, -0.68);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.48, -0.64);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.40, -0.70);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.42, -0.78);
    glEnd();
}

void MidPentagon4()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.48, -0.64);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.55,-0.45);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.28, -0.48);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.22, -0.73);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.40, -0.70);
    glEnd();
}

void MidParallelogram4()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.28, -0.48);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.29, -0.31);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.11,-0.20);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.11,-0.42);
    glEnd();
}

void Triangle4()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.15,-0.17);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.00, 0.00);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.06,-0.22);
    glEnd();
}

// END OF 4

// ---------------------------------

// START OF 5

void TopPentagon5()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.87, 0.32);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.72, 0.34);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.68, 0.28);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.70, 0.23);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.77, 0.21);
    glEnd();
}

void MidPentagon5()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.68, 0.28);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.55,0.36);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.50, 0.20);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.64,0.08);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.70, 0.23);
    glEnd();
}

void MidParallelogram5()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.50, 0.20);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.34, 0.25);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.22,0.10);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.41,0.07);
    glEnd();
}

void Triangle5()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.20,0.15);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.00, 0.00);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.24,0.05);
    glEnd();
}

// END OF 5

// ---------------------------------

void display(){

    TopPentagon1();
    MidPentagon1();
    MidParallelogram1();
    Triangle1();

    TopPentagon2();
    MidPentagon2();
    MidParallelogram2();
    Triangle2();

    TopPentagon3();
    MidPentagon3();
    MidParallelogram3();
    Triangle3();

    TopPentagon4();
    MidPentagon4();
    MidParallelogram4();
    Triangle4();

    TopPentagon5();
    MidPentagon5();
    MidParallelogram5();
    Triangle5();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow(" Creating Task 3 and displaying it.");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
