#include <windows.h>
#include <GL/glut.h>
void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(13.0,8.0);
glVertex2f(-13.0,8.0);
glVertex2f(-13.0,2.0);
glVertex2f(13.0,2.0);
glEnd();

glColor3f(255,255,255);
glBegin(GL_QUADS);
glVertex2f(13.0,-3.0);
glVertex2f(-13.0,-3.0);
glVertex2f(-13.0,2.0);
glVertex2f(13.0,2.0);
glEnd();

glColor3f(0,0.40,0.1);
glBegin(GL_QUADS);
    glVertex2f(13.0,-3.0);
    glVertex2f(13.0,-8.0);
    glVertex2f(-13.0,-8.0);
    glVertex2f(-13.0,-3.0);
glEnd();

glColor3f(0.80,0.09,0.09);
glBegin(GL_TRIANGLES);
     glVertex2f(-13.0,8.0);
     glVertex2f(2.0,0.0);
     glVertex2f(-13.0,-8.0);
 glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(-5.9,0.5);
 glVertex2f(-6.4,1.0);
 glVertex2f(-7.1,1.0);
 glVertex2f(-7.9,0.5);
 glVertex2f(-7.9,-0.5);
 glVertex2f(-7.1,-1.0);
 glVertex2f(-6.4,-1.0);
 glVertex2f(-5.9,-0.5);

glEnd();

glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
 glVertex2f(-5.9,0.5);
 glVertex2f(-6.4,1.0);
 glVertex2f(-5.5,1.8);

 glEnd();

 glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
     glVertex2f(-6.4,1.0);
     glVertex2f(-7.1,1.0);
     glVertex2f(-6.8,2);

 glEnd();

 glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2f(-6.4,1.0);
glVertex2f(-7.1,1.0);
glVertex2f(-6.8,2);

 glEnd();

  glColor3f(1,1,1);
glBegin(GL_TRIANGLES);



 glVertex2f(-7.1,1.0);
 glVertex2f(-7.9,0.5);
 glVertex2f(-7.9,1.5);

 glEnd();

 glColor3f(1,1,1);
glBegin(GL_TRIANGLES);



 glVertex2f(-7.9,0.5);
 glVertex2f(-7.9,-0.5);
 glVertex2f(-8.8,0);

 glEnd();

 glColor3f(1,1,1);
glBegin(GL_TRIANGLES);



 glVertex2f(-7.9,-0.5);
 glVertex2f(-7.1,-1.0);
 glVertex2f(-8.1,-1.6);

 glEnd();
  glColor3f(1,1,1);
glBegin(GL_TRIANGLES);



 glVertex2f(-7.1,-1.0);
 glVertex2f(-5.9,-0.5);
 glVertex2f(-6.0,-1.5);

 glEnd();
 glColor3f(1,1,1);
glBegin(GL_TRIANGLES);




 glVertex2f(-5.9,-0.5);
 glVertex2f(-5.9,0.5);
 glVertex2f(-4.8,0);

 glEnd();




glFlush();
}

void Initialize()
{
glClearColor(1, 1,1, 1);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-14.0, 14.0,-14.0,14.0,-14.0, 14.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(476, 477);
glutInitWindowPosition(250, 250);
glutCreateWindow("JORDAN");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
