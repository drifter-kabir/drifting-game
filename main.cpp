#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <string.h>

void display();
int i,q;
int score = 0;
int screen = 0;
int collide = 3;
char buffer[10];

int vehicleX = 200, vehicleY = 70;
int ovehicleX[4], ovehicleY[4];
int divx = 250, divy = 4, movd;

void init();

void drawText(char ch[],int xpos, int ypos)
{
    int numofchar = strlen(ch);
    glLoadIdentity ();
    glRasterPos2f( xpos, ypos);
    for (i = 0; i <= numofchar - 1; i++)
    {

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[i]);
    }
}


void drawTextNum(char ch[],int numtext,int xpos, int ypos)
{
    int len;
    int k;
    k = 0;
    len = numtext - strlen (ch);
    glLoadIdentity ();
    glRasterPos2f( xpos, ypos);
    for (i = 0; i <=numtext - 1; i++)
    {
        if ( i < len )
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'0');
        else
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[k]);
            k++;
        }

    }
}


void ovpos()
{
    glClearColor(0,0,1,0);
    for(i = 0; i < 4; i++)
    {
        if(rand() % 2 == 0)
        {
            ovehicleX[i] = 200;
        }
        else
        {
            ovehicleX[i] = 300;
        }
        ovehicleY[i] = 1000 - i * 160;
    }
}


void drawRoad()
{
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(250 - 100, 500);
    glVertex2f(250 - 100, 0);
    glVertex2f(250 + 100, 0);
    glVertex2f(250 + 100, 500);
    glEnd();
}


void drawDivider()//black patch drawn in middle of road
{
    glLoadIdentity();
    glTranslatef(0, movd, 0);
    for(i = 1; i <= 10; i++)
    {
        glColor3f(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2f(divx  - 5, divy * 15 * i + 18);
        glVertex2f(divx  - 5, divy * 15 * i - 18);
        glVertex2f(divx  + 5, divy * 15 * i - 18);
        glVertex2f(divx  + 5, divy * 15 * i + 18);
        glEnd();
    }
    glLoadIdentity();
}


void drawVehicle()
{
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glColor3f(0,0,0);
    glVertex2f(vehicleX - 25, vehicleY + 16);
    glVertex2f(vehicleX + 25, vehicleY + 16);
    glVertex2f(vehicleX - 25, vehicleY - 16);
    glVertex2f(vehicleX + 25, vehicleY - 16);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(vehicleX - 25, vehicleY + 20);
    glVertex2f(vehicleX - 25, vehicleY - 20);
    glVertex2f(vehicleX + 25, vehicleY - 20);
    glVertex2f(vehicleX + 25, vehicleY + 20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(vehicleX - 23, vehicleY + 20);
    glVertex2f(vehicleX - 19, vehicleY + 40);
    glVertex2f(vehicleX + 19, vehicleY + 40);
    glVertex2f(vehicleX + 23, vehicleY + 20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(vehicleX - 23, vehicleY - 20);
    glVertex2f(vehicleX - 19, vehicleY - 35);
    glVertex2f(vehicleX + 19, vehicleY - 35);
    glVertex2f(vehicleX + 23, vehicleY - 20);
    glEnd();
}

void drawOVehicle()//other cars
{

    for(i = 0; i < 4; i++)
    {
        glPointSize(10.0);
        glBegin(GL_POINTS);
        glColor3f(0,0,0);
        glVertex2f(ovehicleX[i] - 25, ovehicleY[i] + 16);
        glVertex2f(ovehicleX[i] + 25, ovehicleY[i] + 16);
        glVertex2f(ovehicleX[i] - 25, ovehicleY[i] - 16);
        glVertex2f(ovehicleX[i] + 25, ovehicleY[i] - 16);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(0.99609, 0.83984, 0);
        glVertex2f(ovehicleX[i] - 25, ovehicleY[i] + 20);
        glVertex2f(ovehicleX[i] - 25, ovehicleY[i] - 20);
        glVertex2f(ovehicleX[i] + 25, ovehicleY[i] - 20);
        glVertex2f(ovehicleX[i] + 25, ovehicleY[i] + 20);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(0,1,0);
        glVertex2f(ovehicleX[i] - 23, ovehicleY[i] + 20);
        glVertex2f(ovehicleX[i] - 19, ovehicleY[i] + 40);
        glVertex2f(ovehicleX[i] + 19, ovehicleY[i] + 40);
        glVertex2f(ovehicleX[i] + 23, ovehicleY[i] + 20);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(0,1,0);
        glVertex2f(ovehicleX[i] - 23, ovehicleY[i] - 20);
        glVertex2f(ovehicleX[i] - 19, ovehicleY[i] - 35);
        glVertex2f(ovehicleX[i] + 19, ovehicleY[i] - 35);
        glVertex2f(ovehicleX[i] + 23, ovehicleY[i] - 20);
        glEnd();

        ovehicleY[i] = ovehicleY[i] - 8;

        if(ovehicleY[i] > vehicleY - 25 - 25 && ovehicleY[i] < vehicleY + 25 + 25 && ovehicleX[i] == vehicleX)
        {
            collide --;
            glutIdleFunc(NULL);
            ovpos();
            glutIdleFunc(display);
        }

        if(ovehicleY[i] < -25)
        {
            if(rand() % 2 == 0)
            {
                ovehicleX[i] = 200;
            }
            else
            {
                ovehicleX[i] = 300;
            }
            ovehicleY[i] = 600;
        }
    }
}

void Specialkey(int key, int x, int y)
{
    switch(key)
    {

    case GLUT_KEY_LEFT:
        vehicleX = 200;
        break;
    case GLUT_KEY_RIGHT:
        vehicleX = 300;
        break;

    }

    glutPostRedisplay();
}

void Normalkey(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'y':
        score=0;
        collide=3;
        ovpos();
        glutIdleFunc(display);

        break;

    case 'n':
        exit(0);
    }
}


void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
    glMatrixMode(GL_MODELVIEW);
}


void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    drawRoad();
    drawDivider();
    drawVehicle();
    drawOVehicle();
    movd = movd - 16;
    if(movd < - 60)
    {
        movd = 0;
    }

    score = score + 1;
    glColor3f(1,1,1);
    drawText("Score:", 360,455);
    itoa (score, buffer, 10);
    drawTextNum(buffer, 6, 420,455);
    drawText("Life:", 360,355);
    itoa (collide, buffer, 10);
    drawTextNum(buffer, 1, 420,355);
    glutSwapBuffers();
    for(q = 0; q<= 10000000; q++)
    {
        ;
    }
    if(collide == 0)
    {
        glutIdleFunc(NULL);
        glColor3f(1,1,1);
        drawText("Game Over", 50,350);
        drawText("Play again? Press y or n", 20,300);
        drawText("Life:", 360,355);
        itoa (collide, buffer, 10);
        drawTextNum(buffer, 1, 420,355);
         glutSwapBuffers();
    }
}


int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,500);
    glutCreateWindow("DRIFTER");
    ovpos();
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(Specialkey);
    glutKeyboardFunc(Normalkey);
    glutIdleFunc(display);

    glutMainLoop();
}
