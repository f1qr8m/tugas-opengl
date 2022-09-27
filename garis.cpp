#include <windows.h>

#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

void draw(){

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(0.2, 0.3, 0.0);
    glVertex3f(0.8, 0.4, 0.0);
    glEnd();

    glFlush();
}


void Initialize(){

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(200,100 );
glutCreateWindow("MEMBUAT GARIS");

    Initialize();
glutDisplayFunc(draw);
glutMainLoop();
    return 0;
}
