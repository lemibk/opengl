
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


    glColor3f(0.5, 0.5, 0.50);
    glBegin(GL_QUADS);
    glVertex2i(-20, -28);
    glVertex2i(-20, 30);
    glVertex2i(-22, 30);
    glVertex2i(-22, -28);
    glEnd();



    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_QUADS);
    glVertex2i(-28, -28);
    glVertex2i(-28, -31);
    glVertex2i(-14, -31);
    glVertex2i(-14, -28);

    glVertex2i(-34, -31);
    glVertex2i(-34, -36);
    glVertex2i(-8, -36);
    glVertex2i(-8, -31);

    glVertex2i(-39, -36);
    glVertex2i(-39, -39);
    glVertex2i(-3, -39);
    glVertex2i(-3, -36);
    glEnd();
    glColor3f(1, 1.0, 1.0);
    glBegin(GL_TRIANGLES);

    glVertex2f(-18.5, 27);
    glVertex2f(-18, 27.6);
    glVertex2f(-17.9, 27);

    glVertex2f(-19.6, 27);
    glVertex2i(-18, 27);
    glVertex2f(-17, 26);

    glVertex2f(-18.8, 27);
    glVertex2f(-19, 26);
    glVertex2i(-17, 27);

    glVertex2f(-15.5, 27);
    glVertex2f(-15, 27.6);
    glVertex2f(-14.9, 27);

    glVertex2f(-16.6, 27);
    glVertex2i(-15, 27);
    glVertex2f(-14, 26);

    glVertex2f(-15.8, 27);
    glVertex2f(-16, 26);
    glVertex2i(-14, 27);

    glVertex2f(-12.5, 27);
    glVertex2f(-12, 27.6);
    glVertex2f(-11.9, 27);

    glVertex2f(-13.6, 27);
    glVertex2i(-12, 27);
    glVertex2f(-11, 26);

    glVertex2f(-12.8, 27);
    glVertex2f(-13, 26);
    glVertex2i(-11, 27);

    glVertex2f(-9.5, 27);
    glVertex2f(-9, 27.6);
    glVertex2f(-8.9, 27);

    glVertex2f(-10.6, 27);
    glVertex2i(-9, 27);
    glVertex2f(-8, 26);

    glVertex2f(-9.8, 27);
    glVertex2f(-10, 26);
    glVertex2i(-8, 27);

    
        glVertex2f(-6.5, 27);
    glVertex2f(-6, 27.6);
    glVertex2f(-5.9, 27);

    glVertex2f(-7.6, 27);
    glVertex2i(-6, 27);
    glVertex2f(-5, 26);

    glVertex2f(-6.8, 27);
    glVertex2f(-7, 26);
    glVertex2i(-5, 27);
    glVertex2f(-3.5, 27);
    glVertex2f(-3, 27.6);
    glVertex2f(-2.9, 27);

    glVertex2f(-4.6, 27);
    glVertex2f(-3, 27);
    glVertex2f(-2, 26);

    glVertex2f(-3.8, 27);
    glVertex2f(-4, 26);
    glVertex2f(-2, 27);
    //second round

    glVertex2f(-16.5, 25.5);
    glVertex2f(-16, 26.1);
    glVertex2f(-15.9, 25.5);

    glVertex2f(-17.6, 25.5);
    glVertex2f(-16, 25.5);
    glVertex2f(-15, 24.5);

    glVertex2f(-16.8, 25.5);
    glVertex2f(-17, 24.5);
    glVertex2f(-15, 25.5);


    glVertex2f(-13.5, 25.5);
    glVertex2f(-13, 26.1);
    glVertex2f(-12.9, 25.5);

    glVertex2f(-14.6, 25.5);
    glVertex2f(-13, 25.5);
    glVertex2f(-12, 24.5);

    glVertex2f(-13.8, 25.5);
    glVertex2f(-14, 24.5);
    glVertex2f(-12, 25.5);


    glVertex2f(-10.5, 25.5);
    glVertex2f(-10, 26.1);
    glVertex2f(-9.9, 25.5);

    glVertex2f(-11.6, 25.5);
    glVertex2f(-10, 25.5);
    glVertex2f(-9, 24.5);

    glVertex2f(-10.8, 25.5);
    glVertex2f(-11, 24.5);
    glVertex2f(-9, 25.5);

    glVertex2f(-7.5, 25.5);
    glVertex2f(-7, 26.1);
    glVertex2f(-6.9, 25.5);

    glVertex2f(-8.6, 25.5);
    glVertex2f(-7, 25.5);
    glVertex2f(-6, 24.5);

    glVertex2f(-7.8, 25.5);
    glVertex2f(-8, 24.5);
    glVertex2f(-6, 25.5);

    glVertex2f(-4.5, 25.5);
    glVertex2f(-4, 26.1);
    glVertex2f(-3.9, 25.5);

    glVertex2f(-5.6, 25.5);
    glVertex2f(-4, 25.5);
    glVertex2f(-3, 24.5);

    glVertex2f(-4.8, 25.5);
    glVertex2f(-5, 24.5);
    glVertex2f(-3, 25.5);
    //third row

    glVertex2f(-18.5, 24);
    glVertex2f(-18, 24.6);
    glVertex2f(-17.9, 24);

    glVertex2f(-19.6, 24);
    glVertex2f(-18, 24);
    glVertex2f(-17, 23);

    glVertex2f(-18.8, 24);
    glVertex2f(-19, 23);
    glVertex2f(-17, 24);

    glVertex2f(-15.5, 24);
    glVertex2f(-15, 24.6);
    glVertex2f(-14.9, 24);

    glVertex2f(-16.6, 24);
    glVertex2f(-15, 24);
    glVertex2f(-14, 23);

    glVertex2f(-15.8, 24);
    glVertex2f(-16, 23);
    glVertex2f(-14, 24);

    glVertex2f(-12.5, 24);
    glVertex2f(-12, 24.6);
    glVertex2f(-11.9, 24);

    glVertex2f(-13.6, 24);
    glVertex2f(-12, 24);
    glVertex2f(-11, 23);

    glVertex2f(-12.8, 24);
    glVertex2f(-13, 23);
    glVertex2f(-11, 24);

    glVertex2f(-9.5, 24);
    glVertex2f(-9, 24.6);
    glVertex2f(-8.9, 24);

    glVertex2f(-10.6, 24);
    glVertex2f(-9, 24);
    glVertex2f(-8, 23);

    glVertex2f(-9.8, 24);
    glVertex2f(-10, 23);
    glVertex2f(-8, 24);


    glVertex2f(-6.5, 24);
    glVertex2f(-6, 24.6);
    glVertex2f(-5.9, 24);

    glVertex2f(-7.6, 24);
    glVertex2f(-6, 24);
    glVertex2f(-5, 23);

    glVertex2f(-6.8, 24);
    glVertex2f(-7, 23);
    glVertex2f(-5, 24);

    glVertex2f(-3.5, 24);
    glVertex2f(-3, 24.6);
    glVertex2f(-2.9, 24);

    glVertex2f(-4.6, 24);
    glVertex2f(-3, 24);
    glVertex2f(-2, 23);

    glVertex2f(-3.8, 24);
    glVertex2f(-4, 23);
    glVertex2f(-2, 24);
    //fourth row
    glVertex2f(-16.5, 22.5);
    glVertex2f(-16, 23.1);
    glVertex2f(-15.9, 22.5);

    glVertex2f(-17.6, 22.5);
    glVertex2f(-16, 22.5);
    glVertex2f(-15, 21.5);

    glVertex2f(-16.8, 22.5);
    glVertex2f(-17, 21.5);
    glVertex2f(-15, 22.5);

    glVertex2f(-13.5, 22.5);
    glVertex2f(-13, 23.1);
    glVertex2f(-12.9, 22.5);

    glVertex2f(-14.6, 22.5);
    glVertex2f(-13, 22.5);
    glVertex2f(-12, 21.5);

    glVertex2f(-13.8, 22.5);
    glVertex2f(-14, 21.5);
    glVertex2f(-12, 22.5);

    glVertex2f(-10.5, 22.5);
    glVertex2f(-10, 23.1);
    glVertex2f(-9.9, 22.5);

    glVertex2f(-11.6, 22.5);
    glVertex2f(-10, 22.5);
    glVertex2f(-9, 21.5);

    glVertex2f(-10.8, 22.5);
    glVertex2f(-11, 21.5);
    glVertex2f(-9, 22.5);

    glVertex2f(-7.5, 22.5);
    glVertex2f(-7, 23.1);
    glVertex2f(-6.9, 22.5);

    glVertex2f(-8.6, 22.5);
    glVertex2f(-7, 22.5);
    glVertex2f(-6, 21.5);

    
        glVertex2f(-7.8, 22.5);
    glVertex2f(-8, 21.5);
    glVertex2f(-6, 22.5);

    glVertex2f(-4.5, 22.5);
    glVertex2f(-4, 23.1);
    glVertex2f(-3.9, 22.5);

    glVertex2f(-5.6, 22.5);
    glVertex2f(-4, 22.5);
    glVertex2f(-3, 21.5);

    glVertex2f(-4.8, 22.5);
    glVertex2f(-5, 21.5);
    glVertex2f(-3, 22.5);
    //fifth row
    glVertex2f(-18.5, 21);
    glVertex2f(-18, 21.6);
    glVertex2f(-17.9, 21);

    glVertex2f(-19.6, 21);
    glVertex2f(-18, 21);
    glVertex2f(-17, 20);

    glVertex2f(-18.8, 21);
    glVertex2f(-19, 20);
    glVertex2f(-17, 21);

    glVertex2f(-15.5, 21);
    glVertex2f(-15, 21.6);
    glVertex2f(-14.9, 21);

    glVertex2f(-16.6, 21);
    glVertex2f(-15, 21);
    glVertex2f(-14, 20);

    glVertex2f(-15.8, 21);
    glVertex2f(-16, 20);
    glVertex2f(-14, 21);

    glVertex2f(-12.5, 21);
    glVertex2f(-12, 21.6);
    glVertex2f(-11.9, 21);

    glVertex2f(-13.6, 21);
    glVertex2f(-12, 21);
    glVertex2f(-11, 20);

    glVertex2f(-12.8, 21);
    glVertex2f(-13, 20);
    glVertex2f(-11, 21);


    glVertex2f(-9.5, 21);
    glVertex2f(-9, 21.6);
    glVertex2f(-8.9, 21);

    glVertex2f(-10.6, 21);
    glVertex2f(-9, 21);
    glVertex2f(-8, 20);

    glVertex2f(-9.8, 21);
    glVertex2f(-10, 20);
    glVertex2f(-8, 21);


    glVertex2f(-6.5, 21);
    glVertex2f(-6, 21.6);
    glVertex2f(-5.9, 21);

    glVertex2f(-7.6, 21);
    glVertex2f(-6, 21);
    glVertex2f(-5, 20);

    glVertex2f(-6.8, 21);
    glVertex2f(-7, 20);
    glVertex2f(-5, 21);

    glVertex2f(-3.5, 21);
    glVertex2f(-3, 21.6);
    glVertex2f(-2.9, 21);

    glVertex2f(-4.6, 21);
    glVertex2f(-3, 21);
    glVertex2f(-2, 20);

    glVertex2f(-3.8, 21);
    glVertex2f(-4, 20);
    glVertex2f(-2, 21);
    //the sixth row
    glVertex2f(-16.5, 19.5);
    glVertex2f(-16, 20.1);
    glVertex2f(-15.9, 19.5);

    glVertex2f(-17.6, 19.5);
    glVertex2f(-16, 19.5);
    glVertex2f(-15, 18.5);

    glVertex2f(-16.8, 19.5);
    glVertex2f(-17, 18.5);
    glVertex2f(-15, 19.5);

    glVertex2f(-13.5, 19.5);
    glVertex2f(-13, 20.1);
    glVertex2f(-12.9, 19.5);

    glVertex2f(-14.6, 19.5);
    glVertex2f(-13, 19.5);
    glVertex2f(-12, 18.5);

    glVertex2f(-13.8, 19.5);
    glVertex2f(-14, 18.5);
    glVertex2f(-12, 19.5);

    glVertex2f(-10.5, 19.5);
    glVertex2f(-10, 20.1);
    glVertex2f(-9.9, 19.5);

    glVertex2f(-11.6, 19.5);
    glVertex2f(-10, 19.5);
    glVertex2f(-9, 18.5);

    glVertex2f(-10.8, 19.5);
    glVertex2f(-11, 18.5);
    glVertex2f(-9, 19.5);

    glVertex2f(-7.5, 19.5);
    glVertex2f(-7, 20.1);
    glVertex2f(-6.9, 19.5);

    glVertex2f(-8.6, 19.5);
    glVertex2f(-7, 19.5);
    glVertex2f(-6, 18.5);

    glVertex2f(-7.8, 19.5);
    glVertex2f(-8, 18.5);
    glVertex2f(-6, 19.5);

    glVertex2f(-4.5, 19.5);
    glVertex2f(-4, 20.1);
    glVertex2f(-3.9, 19.5);

    glVertex2f(-5.6, 19.5);
    glVertex2f(-4, 19.5);
    glVertex2f(-3, 18.5);

    glVertex2f(-4.8, 19.5);
    glVertex2f(-5, 18.5);
    glVertex2f(-3, 19.5);
    //the seventh
    glVertex2f(-18.5, 18);
    glVertex2f(-18, 18.6);
    glVertex2f(-17.9, 18);

    glVertex2f(-19.6, 18);
    glVertex2f(-18, 18);
    glVertex2f(-17, 17);

    glVertex2f(-18.8, 18);
    glVertex2f(-19, 17);
    glVertex2f(-17, 18);

    glVertex2f(-15.5, 18);
    glVertex2f(-15, 18.6);
    glVertex2f(-14.9, 18);

    glVertex2f(-16.6, 18);
    glVertex2f(-15, 18);
    glVertex2f(-14, 17);

    glVertex2f(-15.8, 18);
    glVertex2f(-16, 17);
    glVertex2f(-14, 18);

    glVertex2f(-12.5, 18);
    glVertex2f(-12, 18.6);
    glVertex2f(-11.9, 18);

    glVertex2f(-13.6, 18);
    glVertex2f(-12, 18);
    glVertex2f(-11, 17);

    glVertex2f(-12.8, 18);
    glVertex2f(-13, 17);
    glVertex2f(-11, 18);

    glVertex2f(-9.5, 18);
    glVertex2f(-9, 18.6);
    glVertex2f(-8.9, 18);

    glVertex2f(-10.6, 18);
    glVertex2f(-9, 18);
    glVertex2f(-8, 17);

    glVertex2f(-9.8, 18);
    glVertex2f(-10, 17);
    glVertex2f(-8, 18);

    glVertex2f(-6.5, 18);
    glVertex2f(-6, 18.6);
    glVertex2f(-5.9, 18);

   
        glVertex2f(-7.6, 18);
    glVertex2f(-6, 18);
    glVertex2f(-5, 17);

    glVertex2f(-6.8, 18);
    glVertex2f(-7, 17);
    glVertex2f(-5, 18);
    glVertex2f(-3.5, 18);
    glVertex2f(-3, 18.6);
    glVertex2f(-2.9, 18);

    glVertex2f(-4.6, 18);
    glVertex2f(-3, 18);
    glVertex2f(-2, 17);

    glVertex2f(-3.8, 18);
    glVertex2f(-4, 17);
    glVertex2f(-2, 18);
    //the eigth row
    glVertex2f(-16.5, 16.5);
    glVertex2f(-16, 17.1);
    glVertex2f(-15.9, 16.5);

    glVertex2f(-17.6, 16.5);
    glVertex2f(-16, 16.5);
    glVertex2f(-15, 15.5);

    glVertex2f(-16.8, 16.5);
    glVertex2f(-17, 15.5);
    glVertex2f(-15, 16.5);

    glVertex2f(-13.5, 16.5);
    glVertex2f(-13, 17.1);
    glVertex2f(-12.9, 16.5);

    glVertex2f(-14.6, 16.5);
    glVertex2f(-13, 16.5);
    glVertex2f(-12, 15.5);

    glVertex2f(-13.8, 16.5);
    glVertex2f(-14, 15.5);
    glVertex2f(-12, 16.5);

    glVertex2f(-10.5, 16.5);
    glVertex2f(-10, 17.1);
    glVertex2f(-9.9, 16.5);

    glVertex2f(-11.6, 16.5);
    glVertex2f(-10, 16.5);
    glVertex2f(-9, 15.5);

    glVertex2f(-10.8, 16.5);
    glVertex2f(-11, 15.5);
    glVertex2f(-9, 16.5);


    glVertex2f(-7.5, 16.5);
    glVertex2f(-7, 17.1);
    glVertex2f(-6.9, 16.5);

    glVertex2f(-8.6, 16.5);
    glVertex2f(-7, 16.5);
    glVertex2f(-6, 15.5);

    glVertex2f(-7.8, 16.5);
    glVertex2f(-8, 15.5);
    glVertex2f(-6, 16.5);

    glVertex2f(-4.5, 16.5);
    glVertex2f(-4, 17.1);
    glVertex2f(-3.9, 16.5);

    glVertex2f(-5.6, 16.5);
    glVertex2f(-4, 16.5);
    glVertex2f(-3, 15.5);

    glVertex2f(-4.8, 16.5);
    glVertex2f(-5, 15.5);
    glVertex2f(-3, 16.5);
    //the last row
    glVertex2f(-18.5, 15);
    glVertex2f(-18, 15.6);
    glVertex2f(-17.9, 15);

    glVertex2f(-19.6, 15);
    glVertex2f(-18, 15);
    glVertex2f(-17, 14);

    glVertex2f(-18.8, 15);
    glVertex2f(-19, 14);
    glVertex2f(-17, 15);

    glVertex2f(-15.5, 15);
    glVertex2f(-15, 15.6);
    glVertex2f(-14.9, 15);

    glVertex2f(-16.6, 15);
    glVertex2f(-15, 15);
    glVertex2f(-14, 14);

    glVertex2f(-15.8, 15);
    glVertex2f(-16, 14);
    glVertex2f(-14, 15);

    glVertex2f(-12.5, 15);
    glVertex2f(-12, 15.6);
    glVertex2f(-11.9, 15);

    glVertex2f(-13.6, 15);
    glVertex2f(-12, 15);
    glVertex2f(-11, 14);

    glVertex2f(-12.8, 15);
    glVertex2f(-13, 14);
    glVertex2f(-11, 15);

    glVertex2f(-9.5, 15);
    glVertex2f(-9, 15.6);
    glVertex2f(-8.9, 15);

    glVertex2f(-10.6, 15);
    glVertex2f(-9, 15);
    glVertex2f(-8, 14);

    glVertex2f(-9.8, 15);
    glVertex2f(-10, 14);
    glVertex2f(-8, 15);

    glVertex2f(-6.5, 15);
    glVertex2f(-6, 15.6);
    glVertex2f(-5.9, 15);

    glVertex2f(-7.6, 15);
    glVertex2f(-6, 15);
    glVertex2f(-5, 14);

    glVertex2f(-6.8, 15);
    glVertex2f(-7, 14);
    glVertex2f(-5, 15);

    glVertex2f(-3.5, 15);
    glVertex2f(-3, 15.6);
    glVertex2f(-2.9, 15);

    glVertex2f(-4.6, 15);
    glVertex2f(-3, 15);
    glVertex2f(-2, 14);

    glVertex2f(-3.8, 15);
    glVertex2f(-4, 14);
    glVertex2f(-2, 15);

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