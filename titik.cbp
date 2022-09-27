#include <GL/glut.h>
        #include <GL/gl.h>
        #include <windows.h>

        void userdraw () {

      glBegin (GL_POINTS);
      glVertex2i (150,0);
      glVertex2i (150,200);
      glVertex2i (370,200);

        glEnd ();
        }

        void display (void) {
             glClear (GL_COLOR_BUFFER_BIT);
             userdraw ();
                glutSwapBuffers ();
        }
        int main (int argc, char **argv) {
        glutInit (&argc,argv);
        glutInitDisplayMode (GLUT_DOUBLE|GLUT_RGB);
        glutInitWindowSize (640,480);
        glutCreateWindow ("Membuat Objek Titik");
        glClearColor (0.0, 0.0, 0.0, 0.0);
        gluOrtho2D (0.,640.,-240.,240.);
        glutIdleFunc (display);
        glutDisplayFunc (display);
        glutMainLoop ();
        return 0;
        }
