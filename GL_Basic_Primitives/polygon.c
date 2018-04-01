

#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(10.0);
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
glVertex2d(10,10);
glVertex2d(10,50);
glVertex2d(70,50);
glVertex2d(70,10);

glEnd();
glutSwapBuffers();
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	gluOrtho2D(0.0,200.0,0.0,200.0);

}

int main_line(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("OpenGL Square");
    myInit();
    glutDisplayFunc(display);
    //glutReshapeFunc(reshape);
    glutMainLoop();
}
