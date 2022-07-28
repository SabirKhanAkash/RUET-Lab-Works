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

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0,665);
    glVertex2d(20,675);
    glVertex2d(20,700);
    glVertex2d(0,690);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0,690);
    glVertex2d(20,700);
    glVertex2d(20,735);
    glVertex2d(0,725);
    glEnd();

    ///RIGHT SIDE
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,0);
    glVertex2d(600,0);
    glVertex2d(600,10);
    glVertex2d(580,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,0);
    glVertex2d(600,10);
    glVertex2d(600,45);
    glVertex2d(580,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,35);
    glVertex2d(600,45);
    glVertex2d(600,80);
    glVertex2d(580,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,70);
    glVertex2d(600,80);
    glVertex2d(600,115);
    glVertex2d(580,105);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,105);
    glVertex2d(600,115);
    glVertex2d(600,150);
    glVertex2d(580,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,140);
    glVertex2d(600,150);
    glVertex2d(600,185);
    glVertex2d(580,175);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,175);
    glVertex2d(600,105);
    glVertex2d(600,220);
    glVertex2d(580,210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,210);
    glVertex2d(600,220);
    glVertex2d(600,255);
    glVertex2d(580,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,245);
    glVertex2d(600,255);
    glVertex2d(600,290);
    glVertex2d(580,280);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,280);
    glVertex2d(600,290);
    glVertex2d(600,325);
    glVertex2d(580,315);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,315);
    glVertex2d(600,325);
    glVertex2d(600,360);
    glVertex2d(580,350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,350);
    glVertex2d(600,360);
    glVertex2d(600,395);
    glVertex2d(580,385);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,385);
    glVertex2d(600,395);
    glVertex2d(600,430);
    glVertex2d(580,420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,420);
    glVertex2d(600,430);
    glVertex2d(600,465);
    glVertex2d(580,455);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,455);
    glVertex2d(600,465);
    glVertex2d(600,500);
    glVertex2d(580,490);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,490);
    glVertex2d(600,500);
    glVertex2d(600,535);
    glVertex2d(580,525);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,525);
    glVertex2d(600,535);
    glVertex2d(600,570);
    glVertex2d(580,560);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,560);
    glVertex2d(600,570);
    glVertex2d(600,605);
    glVertex2d(580,595);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,595);
    glVertex2d(600,605);
    glVertex2d(600,640);
    glVertex2d(580,630);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,630);
    glVertex2d(600,640);
    glVertex2d(600,675);
    glVertex2d(580,665);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(580,665);
    glVertex2d(600,675);
    glVertex2d(600,700);
    glVertex2d(580,690);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(580,690);
    glVertex2d(600,700);
    glVertex2d(600,735);
    glVertex2d(580,725);
    glEnd();
    glPopMatrix();
}

void car()
{
    ///NEW CAR START
    glPushMatrix();
    glTranslatef(200.0*carSide, 50.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,255,0);
    glVertex2d(90,4);
    glVertex2d(75,10);
    glVertex2d(75,100);
    glVertex2d(90,110);
    glVertex2d(110,110);
    glVertex2d(125,100);
    glVertex2d(125,10);
    glVertex2d(110,4);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(90,25);
    glVertex2d(90,55);
    glVertex2d(110,55);
    glVertex2d(110,25);
    glEnd();


    ///FRONT GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,255,153);
    glVertex2d(90,55);
    glVertex2d(85,77);
    glVertex2d(114,77);
    glVertex2d(110,55);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(85,77);
    glVertex2d(75,100);
    glVertex2d(90,110);
    glVertex2d(110,110);
    glVertex2d(125,100);
    glVertex2d(114,77);
    glEnd();

    ///RIGHT LOOKING GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(116,80);
    glVertex2d(122,78);
    glVertex2d(123,84);
    glVertex2d(117,82);
    glEnd();

    ///LEFT LOOKING GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(83,80);
    glVertex2d(77,78);
    glVertex2d(76,84);
    glVertex2d(82,82);
    glEnd();

    ///LEFT FRONT LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(75,100);
    glVertex2d(85,100);
    glVertex2d(92,105);
    glVertex2d(90,110);
    glEnd();

    ///RIGHT FRONT LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(125,100);
    glVertex2d(115,100);
    glVertex2d(108,105);
    glVertex2d(110,110);
    glEnd();

    ///1ST RIGHT WHEEL
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(125,65);
    glVertex2d(129,65);
    glVertex2d(129,75);
    glVertex2d(125,75);
    glEnd();

    ///2ND RIGHT WHEEL
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(125,28);
    glVertex2d(129,28);
    glVertex2d(129,38);
    glVertex2d(125,38);
    glEnd();

    ///3RD RIGHT WHEEL
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(71,65);
    glVertex2d(75,65);
    glVertex2d(75,75);
    glVertex2d(71,75);
    glEnd();

    ///4TH RIGHT WHEEL
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(71,28);
    glVertex2d(75,28);
    glVertex2d(75,38);
    glVertex2d(71,38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,153);
    glVertex2d(90,25);
    glVertex2d(75,10);
    glVertex2d(90,4);
    glVertex2d(110,4);
    glVertex2d(125,10);
    glVertex2d(110,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2d(90,4);
    glVertex2d(85,11);
    glVertex2d(115,11);
    glVertex2d(110,4);
    glEnd();

    ///1ST BACK RED LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(90,4);
    glVertex2d(85,11);
    glVertex2d(75,10);
    glVertex2d(90,4);
    glEnd();

    ///2ND BACK RED LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(110,4);
    glVertex2d(115,11);
    glVertex2d(125,10);
    glVertex2d(110,4);
    glEnd();

    ///1ST GREEN BACK LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(75,10);
    glVertex2d(85,11);
    glVertex2d(82,16);
    glVertex2d(75,10);
    glEnd();

    ///2ND GREEN BACK LIGHT
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(125,10);
    glVertex2d(115,11);
    glVertex2d(118,17);
    glVertex2d(125,10);
    glEnd();


    ///1ST LEFT CAR DOOR
    glBegin(GL_POLYGON);
    glColor3ub(0,51,0);
    glVertex2d(77,17);
    glVertex2d(88,27);
    glVertex2d(88,41);
    glVertex2d(77,41);
    glEnd();

    ///2ND LEFT CAR DOOR
    glBegin(GL_POLYGON);
    glColor3ub(0,51,0);
    glVertex2d(77,43);
    glVertex2d(88,43);
    glVertex2d(88,53);
    glVertex2d(77,70);
    glEnd();

    ///1ST RIGHT CAR DOOR
    glBegin(GL_POLYGON);
    glColor3ub(0,51,0);
    glVertex2d(112,27);
    glVertex2d(123,17);
    glVertex2d(123,41);
    glVertex2d(112,41);
    glEnd();

    ///2ND RIGHT CAR DOOR
    glBegin(GL_POLYGON);
    glColor3ub(0,51,0);
    glVertex2d(112,43);
    glVertex2d(123,43);
    glVertex2d(123,70);
    glVertex2d(112,53);
    glEnd();

    glPopMatrix();
}

void opositCar(int i)
{
    glPushMatrix();
    glTranslatef(opositCars[i].opositCarSide*200+100, opositCars[i].opositCarY -= speed*1.5, 0.0);
    glRotated(180,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-30,-35);
    glVertex2d(-30,-20);
    glVertex2d(30,-20);
    glVertex2d(30,-35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-30,10);
    glVertex2d(-30,25);
    glVertex2d(30,25);
    glVertex2d(30,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(opositCars[i].r, 255, opositCars[i].b);
    glVertex2d(-25,-40);
    glVertex2d(-25,30);
    glVertex2d(-15,40);
    glVertex2d(15,40);
    glVertex2d(25,30);
    glVertex2d(25,-40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, opositCars[i].g, 0);
    glVertex2d(-15,-30);
    glVertex2d(-15,10);
    glVertex2d(15,10);
    glVertex2d(15,-30);
    glEnd();

    ///BACK GLASS
    glBegin(GL_POLYGON);
    glColor3ub(0,50,0);
    glVertex2d(-23,-38);
    glVertex2d(-23,-7);
    glVertex2d(23,-7);
    glVertex2d(23,-38);
    glEnd();

    ///FRONT GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-15,11);
    glVertex2d(-23,24);
    glVertex2d(23,24);
    glVertex2d(15,11);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(-15,11);
    glVertex2d(-23,24);
    glVertex2d(23,24);
    glVertex2d(15,11);
    glEnd();

    ///LEFT GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-22,-5);
    glVertex2d(-22,19);
    glVertex2d(-17,9);
    glVertex2d(-17,-5);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(-22,-5);
    glVertex2d(-22,19);
    glVertex2d(-17,9);
    glVertex2d(-17,-5);
    glEnd();


    ///RIGHT GLASS
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(18,-5);
    glVertex2d(18,10);
    glVertex2d(23,20);
    glVertex2d(23,-5);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(18,-5);
    glVertex2d(18,10);
    glVertex2d(23,20);
    glVertex2d(23,-5);
    glEnd();
    glPopMatrix();
}

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(100,100,100);
    glVertex2d(20,0);
    glVertex2d(20,700);
    glVertex2d(580,700);
    glVertex2d(580,0);
    glEnd();
}

void laneDevider()
{
    for(int i=0; i<lanePoints; i++)
    {

        glPushMatrix();
        glTranslatef(200, laneDividers[i].y, 0);
        glBegin(GL_QUADS);
        glColor3ub(255,255,0);
        glVertex2d(0,0);
        glVertex2d(0,40);
        glVertex2d(10,40);
        glVertex2d(10,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(400, laneDividers[i].y, 0);
        glBegin(GL_QUADS);
        glColor3ub(255,255,0);
        glVertex2d(0,0);
        glVertex2d(0,40);
        glVertex2d(10,40);
        glVertex2d(10,0);
        glEnd();
        glPopMatrix();
        laneDividers[i].y -= speed;
        if(laneDividers[i].y < -70)
        {
            laneDividers[i].y = 700;
            point++;
        }
    }
}

static void idle(void)
{
    for(int i=0; i<carNumber; i++)
    {
        if(opositCars[i].opositCarY <= -200){
            opositCars[i].opositCarSide = random(0,3);
            opositCars[i].opositCarY = 800;
        }
        if(opositCars[i].opositCarSide == carSide)
        {
            if(opositCars[i].opositCarY<105 && opositCars[i].opositCarY>=30)
            {
                life--;
                opositCars[i].opositCarY = 800+50;
            }
        }
    }
    glutPostRedisplay();
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
    roadSide();
    road();

    laneDevider();
    car();
    for(int i=0; i<carNumber; i++)
    {
        opositCar(i);
    }
    ostringstream strg;
    strg<<point;
    string sl = strg.str();
    stringWrite(440,680,11,"Score: "+sl,1,1,1);
    ostringstream strgg;
    strgg<<life;
    sl = strgg.str();
    stringWrite(30,680,11,"Life: "+sl,1,1,1);
    if(life == 0)
    {
        glutIdleFunc(NULL);
        stringWrite(260,330,11,"GAME OVER! BETTER LUCK NEXT TIME",1,0,0);
    }
    glutSwapBuffers();
}

void special(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_LEFT:
        if(carSide>0)
            carSide--;
        break;
    case GLUT_KEY_RIGHT:
        if(carSide<2)
            carSide++;
        break;
    default:
        break;
    }
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    carGenerate();
    laneDividerGenerator();
    glutInitWindowSize(600,700);
    glutInitWindowPosition(400,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("2D CAR RACING GAME");
    glutSpecialFunc(special);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    point = 0;
    glClearColor(1,1,1,1);
    glOrtho(0,600,0,700,0,600);
    glutMainLoop();
    return EXIT_SUCCESS;
}
