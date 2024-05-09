#include<GL/glut.h>
void init() {
    glClearColor(0, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-40, 40, -40, 40, -40, 40);

}void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 2);
    glVertex2i(-20, 4);
    glVertex2i(20, 4);
    glVertex2i(20, 2);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 4);
    glVertex2i(-20, 6);
    glVertex2i(20, 6);
    glVertex2i(20, 4);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 6);
    glVertex2i(-20, 8);
    glVertex2i(20, 8);
    glVertex2i(20, 6);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 8);
    glVertex2i(-20, 10);
    glVertex2i(20, 10);
    glVertex2i(20, 8);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 10);
    glVertex2i(-20, 12);
    glVertex2i(20, 12);
    glVertex2i(20, 10);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 12);
    glVertex2i(-20, 14);
    glVertex2i(20, 14);
    glVertex2i(20, 12);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 14);
    glVertex2i(-20, 16);
    glVertex2i(20, 16);
    glVertex2i(20, 14);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 16);
    glVertex2i(-20, 18);
    glVertex2i(20, 18);
    glVertex2i(20, 16);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 18);
    glVertex2i(-20, 20);
    glVertex2i(20, 20);
    glVertex2i(20, 18);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 20);
    glVertex2i(-20, 22);
    glVertex2i(20, 22);
    glVertex2i(20, 20);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 22);
    glVertex2i(-20, 24);
    glVertex2i(20, 24);
    glVertex2i(20, 22);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 24);
    glVertex2i(-20, 26);
    glVertex2i(20, 26);
    glVertex2i(20, 24);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 26);
    glVertex2i(-20, 28);
    glVertex2i(20, 28);
    glVertex2i(20, 26);
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, 14);
    glVertex2i(-20, 28);
    glVertex2i(0, 28);
    glVertex2i(0, 14);
    glEnd();


    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(-20, -30);
    glVertex2i(-20, 28);
    glVertex2i(-24, 28);
    glVertex2i(-24, -30);
    glEnd();



    glColor3f(1, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(-30, -40);
    glVertex2i(-30, -30);
    glVertex2i(-10, -30);
    glVertex2i(-10, -40);
    glEnd();
    glColor3f(1, 1.0, 1.0);
    glBegin(GL_TRIANGLES);


    glVertex2f(-17.5, 26);
    glVertex2f(-17, 27.5);
    glVertex2f(-16.5, 26);

    glVertex2f(-19.8, 26);
    glVertex2i(-16.5, 26);
    glVertex2f(-15.5, 24);

    glVertex2f(-17.5, 26);
    glVertex2f(-19, 24);
    glVertex2i(-14, 26);

    glEnd();


    glFlush();


}
int main(int argc, char** argv) {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("usa flag");
    init();
    glutDisplayFunc(display);
    glutMainLoop();





}