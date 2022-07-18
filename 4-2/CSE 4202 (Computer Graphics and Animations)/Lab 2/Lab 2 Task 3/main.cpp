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
#include<math.h>

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

// -----------------------------------------------------------------------
// START of Figure 1

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

// END of Figure 1

// -----------------------------------------------------------------------

// START of Figure 2

void TopPentagon2()
{
    glRotatef(72,0,0,1);
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

void MidPentagon2()
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

void MidParallelogram2()
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

void Triangle2()
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

// END of Figure 2

// -----------------------------------------------------------------------

// START of Figure 3

void TopPentagon3()
{
    glRotatef(72,0,0,1);
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

void MidPentagon3()
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

void MidParallelogram3()
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

void Triangle3()
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

// END of Figure 3

// -----------------------------------------------------------------------

// START of Figure 4

void TopPentagon4()
{
    glRotatef(72,0,0,1);
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

void MidPentagon4()
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

void MidParallelogram4()
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

void Triangle4()
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


// END of Figure 4

// -----------------------------------------------------------------------

// START of Figure 5

void TopPentagon5()
{
    glRotatef(72,0,0,1);
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

void MidPentagon5()
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

void MidParallelogram5()
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

void Triangle5()
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

// End of Figure 5

// -----------------------------------------------------------------------


void display() {
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

	glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

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

