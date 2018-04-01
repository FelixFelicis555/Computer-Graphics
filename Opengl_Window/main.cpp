#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glutSwapBuffers();
}

void intiopenGL()
{
    glClearColor(1.0,1.0,0.0,1.0);
}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("OpenGL Window");
    intiopenGL();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
