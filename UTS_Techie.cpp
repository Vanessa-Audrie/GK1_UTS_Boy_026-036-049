#include <glut.h>
#include <math.h>
#include <stdlib.h>
float xp = 0, yp = 0, r = 0, n = 1000.0, a, x, y;
float posX = 0, posY = 0;

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
        if (posX - 20 >= -320 && posY + 20 <= 100) {
            posX -= 10;
            posY += 10;
        }

    if (button == GLUT_RIGHT_BUTTON)
        if (posX + 20 <= 320 && posY + 20 <= 100) {
            posX += 10;
            posY += 10;
        }

    glutPostRedisplay();
}

void keyboard(unsigned char key, int, int) {
    switch (key)
    {
    case 'd':
    case 'D':
        if (posX + 20 <= 320) {
            posX += 10;
        }
        break;
    case 'a':
    case 'A':
        if (posX - 20 >= -320) {
            posX -= 10;
        }
        break;
    case 'w':
    case 'W':
        if (posY + 20 <= 100) {
            posY += 10;
        }
        break;
    case 's':
    case 'S':
        if (posY - 20 >= -150) {
            posY -= 10;
        }
        break;
    }
    glutPostRedisplay();
}

void matahari() {
    xp = 0, yp = 150, r = 50;

    glColor3ub(255, 230, 0);
    glBegin(GL_POLYGON);
    a = 6.28 / n;
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();
}

void gunung() {
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 51);
    glVertex2f(-320, -20);
    glVertex2f(-165, 100);
    glVertex2f(0, -20);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 51);
    glVertex2f(0, -20);
    glVertex2f(165, 100);
    glVertex2f(320, -20);
    glEnd();
}

void jalan() {
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2f(-320, -20);
    glVertex2f(-320, -110);
    glVertex2f(320, -110);
    glVertex2f(320, -20);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2i(-320, -65);
    glVertex2i(-280, -65);

    glVertex2i(-240, -65);
    glVertex2i(-200, -65);

    glVertex2i(-160, -65);
    glVertex2i(-120, -65);

    glVertex2i(-80, -65);
    glVertex2i(-40, -65);

    glVertex2i(0, -65);
    glVertex2i(40, -65);

    glVertex2i(80, -65);
    glVertex2i(120, -65);

    glVertex2i(160, -65);
    glVertex2i(200, -65);

    glVertex2i(240, -65);
    glVertex2i(280, -65);
    glEnd();
}

void langit() {
    glBegin(GL_QUADS);

    glColor3ub(128, 179, 255);
    glVertex2f(-320, 240);
    glVertex2f(320, 240);

    glColor3ub(0, 51, 153);
    glVertex2f(320, -20);
    glVertex2f(-320, -20);

    glEnd();
}

void sand() {
    glBegin(GL_QUADS);

    glColor3ub(194, 178, 128);
    glVertex2f(-320, -110);
    glVertex2f(320, -110);
    glVertex2f(320, -240);
    glVertex2f(-320, -240);

    glEnd();
}

void kepala() {
    xp = 0, yp = -5, r = 30;
    glColor3ub(255, 204, 153);
    glBegin(GL_POLYGON);
    a = 6.28 / n;
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    xp = -10, yp = 5, r = 5;
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    xp = 10, yp = 5, r = 5;
    glBegin(GL_POLYGON);
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    xp = -30, yp = -5, r = 8;
    glColor3ub(255, 204, 153); 
    glBegin(GL_POLYGON);
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    xp = 30, yp = -5, r = 8;
    glBegin(GL_POLYGON);
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    glColor3ub(0, 0, 0); 
    glBegin(GL_TRIANGLES);
    glVertex2f(-15, 23); 
    glVertex2f(0, 40);
    glVertex2f(15, 23);
    glEnd();

    glColor3ub(255, 153, 102);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(-3, -5);
    glVertex2f(3, -5);
    glEnd();

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    xp = 0, yp = -10, r = 10;
    for (int i = n / 2; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();
}

void badan() {
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-20, -30); 
    glVertex2f(20, -30);
    glVertex2f(25, -100); 
    glVertex2f(-25, -100); 
    glEnd();

    glColor3ub(255, 204, 153); 
    glBegin(GL_QUADS);
    glVertex2f(-20, -30);   
    glVertex2f(-40, -60);  
    glVertex2f(-35, -75);  
    glVertex2f(-20, -45); 
    glEnd();

    float xp = -40, yp = -69, r = 8;
    glBegin(GL_POLYGON);
    a = 6.28 / n;
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(20, -30); 
    glVertex2f(40, -60);  
    glVertex2f(35, -75);  
    glVertex2f(20, -45); 
    glEnd();

    xp = 40, yp = -69, r = 8;
    glBegin(GL_POLYGON);
    for (int i = 0; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();
}

void kaki() {
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-20, -100);
    glVertex2f(-5, -100);
    glVertex2f(-5, -140);
    glVertex2f(-20, -140);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(5, -100);
    glVertex2f(20, -100);
    glVertex2f(20, -140);
    glVertex2f(5, -140);
    glEnd();

    float xp = -12.5, yp = -140, r = 7.5;
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    a = 6.28 / n;
    for (int i = n / 2; i < n; i++) {
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

    xp = 12.5, yp = -140, r = 7.5;
    glBegin(GL_POLYGON);
    for (int i = n / 2; i < n; i++) { 
        x = xp + r * cos(i * a);
        y = yp + r * sin(i * a);
        glVertex2f(x, y);
    }
    glEnd();

}

void karakter() {
    badan();
    kepala();
    kaki();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    langit();
    matahari();
    gunung();
    jalan();
    sand();
    glPushMatrix();
    glTranslatef(posX, posY, 0);
    karakter();
    glPopMatrix();

    glutSwapBuffers();
}

int main()
{
    glutInit(&__argc, __argv);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Pertemuan 6");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-320, 320, -240, 240);

    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file