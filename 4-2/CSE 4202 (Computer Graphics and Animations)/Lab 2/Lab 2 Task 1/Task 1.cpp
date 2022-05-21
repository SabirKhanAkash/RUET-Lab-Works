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

/* GLUT callback Handlers */

void whiteSquare()
{
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.25+0.5,0.25);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(0.25+0.5, 0.25);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(0.25+0.5, -0.25);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(-0.25+0.5, -0.25);
    glEnd();
}

void blackWindowTopRight()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.5,0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.5, 0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.5, 2*(0.25)/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.5, 2*(0.25)/3);
    glEnd();
}

void blackWindowTopLeft()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.25,0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.25, 0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.25, 2*(0.25)/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.25, 2*(0.25)/3);
    glEnd();
}

void blackWindowBottomLeft()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.25,-0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.25, -0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.25, -2*(0.25)/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.25, -2*(0.25)/3);
    glEnd();
}

void blackWindowBottomRight()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.5,-0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.5, -0.25/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((2*(0.25)/3)+0.5, -2*(0.25)/3);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f((0.25/3)+0.5, -2*(0.25)/3);
    glEnd();
}



void triangle()
{
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.75,0.20);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.85,0.05);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.65, 0.05);
    glEnd();
}

void GreenRec()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.85,0.05);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.65, 0.05);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.65, -0.15);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.85, -0.15);
    glEnd();
}

void yellowRec()
{
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(-0.65, 0.05);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(-0.65, -0.15);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(-0.15, -0.15);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(-0.15, 0.05);
    glEnd();
}

void cyanRoof()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(-0.75, 0.20);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(-0.65, 0.05);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(-0.15, 0.05);
        glColor3f(0.0, 1.0, 1.0);
        glVertex2f(-0.25, 0.20);
    glEnd();
}

void blackDoor()
{
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.45, -0.15);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.35, -0.15);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.35, -0.05);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(-0.45, -0.05);
    glEnd();
}

void display(){
    whiteSquare();
    blackWindowTopRight();
    blackWindowTopLeft();
    blackWindowBottomLeft();
    blackWindowBottomRight();


    triangle();
    GreenRec();
    yellowRec();
    cyanRoof();
    blackDoor();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow(" Creating Task 1 and displaying it.");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
