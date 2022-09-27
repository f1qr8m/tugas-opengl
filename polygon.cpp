#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void trapesium(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.7);

    glBegin(GL_POLYGON);

    glVertex2f(0.2, 0.5);
    glVertex2f(0.7, 0.5);
    glVertex2f(0.2, 0.2);

    glEnd();

    glColor3f(0.0, 0.0, 0.7);
    glLineWidth(3.0);

    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.7);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.7, 0.5);

    glColor3f(0.0, 0.0, 0.7);
    glVertex2f(0.7, 0.5);
    glVertex2f(0.2, 0.2);

    glColor3f(0.0, 0.0, 0.7);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.2, 0.5);

    glEnd();

    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(200, 100);
glutCreateWindow("Point");
Initialize();
glutDisplayFunc(trapesium);
glutMainLoop();
return 0;
}
