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

void DrawShape()
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

// -----------------------------------------------------------------------

void display() {
    while(1)
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        for(int i=0; i<10; i++)
        {
            DrawShape();
            glRotatef(40,0,0,1);
        }
        glRotatef(-1.2,0,0,1);
        glutSwapBuffers();
        glFlush(); // Render now
    }
}

/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

	glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow(" Creating Task 3 and displaying it.");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
