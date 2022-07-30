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
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include"windows.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<iostream>
#include<sstream>

#define carNumber 4
#define lanePoints 11

using namespace std;

struct car{
    int opositCarSide;
    float opositCarY;
    int r,g,b;
}opositCars[carNumber];


struct laneDivider
{
    int x;
    float y;
}laneDividers[lanePoints];


int random(int minimum, int mximum)
{
    return (rand()%(mximum-minimum))+minimum;
}

int carSide = 0;
int point = 0;
int life = 3;
float speed = 0.6;
void stringWrite(int x, int y, int font, std::string s, float r, float g, float b)
{
    glColor3f(r, g, b);
    glRasterPos2f(x,y);
    int len,i;
    len = s.length();
    for(i=0; i<len; i++)
    {
        switch(font){
            case 1:
                glutBitmapCharacter(GLUT_BITMAP_9_BY_15, s[i]);
                break;
            default:
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
                break;
        }
    }
}

void laneDividerGenerator()
{
    for(int i=0; i<15; i++)
    {
        laneDividers[i].y = 70*i;
    }
}

void carGenerate()
{
    for(int i=0; i<carNumber; i++)
    {
        opositCars[i].opositCarSide = random(0,3);
        opositCars[i].opositCarY = 700+i*300;
        opositCars[i].r = random(0,255);
        opositCars[i].g = random(0,255);
        opositCars[i].b = random(0,255);
    }
}

void roadSide()
{
    ///LEFT SIDE
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,0);
    glVertex2d(20,0);
    glVertex2d(20,10);
    glVertex2d(0,0);
    glEnd();

    glBegin(GL_POLYGON);
    glPopMatrix();
    glColor3ub(255,255,0);
    glVertex2d(0,0);
    glVertex2d(20,10);
    glVertex2d(20,45);
    glVertex2d(0,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,35);
    glVertex2d(20,45);
    glVertex2d(20,80);
    glVertex2d(0,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,70);
    glVertex2d(20,80);
    glVertex2d(20,115);
    glVertex2d(0,105);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,105);
    glVertex2d(20,115);
    glVertex2d(20,150);
    glVertex2d(0,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,140);
    glVertex2d(20,150);
    glVertex2d(20,185);
    glVertex2d(0,175);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,175);
    glVertex2d(20,185);
    glVertex2d(20,220);
    glVertex2d(0,210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,210);
    glVertex2d(20,220);
    glVertex2d(20,255);
    glVertex2d(0,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,245);
    glVertex2d(20,255);
    glVertex2d(20,290);
    glVertex2d(0,280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,280);
    glVertex2d(20,290);
    glVertex2d(20,325);
    glVertex2d(0,315);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,315);
    glVertex2d(20,325);
    glVertex2d(20,360);
    glVertex2d(0,350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,350);
    glVertex2d(20,360);
    glVertex2d(20,395);
    glVertex2d(0,385);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,385);
    glVertex2d(20,395);
    glVertex2d(20,430);
    glVertex2d(0,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,420);
    glVertex2d(20,430);
    glVertex2d(20,465);
    glVertex2d(0,455);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,455);
    glVertex2d(20,465);
    glVertex2d(20,500);
    glVertex2d(0,490);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,490);
    glVertex2d(20,500);
    glVertex2d(20,535);
    glVertex2d(0,525);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,525);
    glVertex2d(20,535);
    glVertex2d(20,570);
    glVertex2d(0,560);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,560);
    glVertex2d(20,570);
    glVertex2d(20,605);
    glVertex2d(0,595);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,595);
    glVertex2d(20,605);
    glVertex2d(20,640);
    glVertex2d(0,630);
    glEnd();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

}
