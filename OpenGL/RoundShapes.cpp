#include <windows.h>
#include <iostream>
#include <stdlib.h>

#ifdef _APPLE_
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

//Called when a key is pressed
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
    case 27: //Escape key
        exit(0);
    }
}

//Initializes 3D rendering
void initRendering() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL); //Enable color
    glClearColor(0.7f, 0.9f, 1.0f, 1.0f); //Change the background to sky blue
}

//Called when the window is resized
void handleResize(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

//Draws the 3D scene
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);
    glTranslatef(0.0f, 0.0f, -5.0f);

    glPushMatrix();
    glTranslatef(0.0f, -1.0f, 0.0f);
    glRotatef(_angle, 0.0f, 0.0f, -1.0f);

    glBegin(GL_QUADS);

    //Trapezoid
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.7f, -0.5f, 0.0f);
    glVertex3f(0.7f, -0.5f, 0.0f);
    glVertex3f(0.7f, 0.5f, 0.0f);
    glVertex3f(-0.7f, 0.5f, 0.0f);

    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(1.0f, 1.0f, 0.0f);
    glRotatef(_angle, 0.0f, 1.0f, 0.0f);
    glScalef(0.7f, 0.7f, 0.7f);

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);

    //Pentagon
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(-0.5f, 0.0f, 0.0f);

    glVertex3f(-0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);

    glVertex3f(-0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);


    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.0f, 1.0f, 0.0f);
    glRotatef(_angle, 1.0f, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);

    //Triangle
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);

    glEnd();

    glPopMatrix();



    glutSwapBuffers();
}

void update(int value) {
    _angle += 2.0f;
    if (_angle > 360) {
        _angle -= 360;
    }

    glutPostRedisplay(); ////Tell GLUT that the scene has changed
    glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
    //Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);

    //Create the window
    glutCreateWindow("Color");
    initRendering();

    //Set handler functions
    glutDisplayFunc(drawScene);
    glutKeyboardFunc(handleKeypress);
    glutReshapeFunc(handleResize);

    glutTimerFunc(25, update, 0); //Add a timer

    glutMainLoop();
    return 0;
}