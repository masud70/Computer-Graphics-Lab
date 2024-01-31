#include<GL/glu.h>
#include<GL/glut.h>

GLfloat A = 0, X = 0, Y = 0, XU = 0.001, YU = 0.002;

void Face(GLfloat A[], GLfloat B[], GLfloat C[], GLfloat D[]) {
    glBegin(GL_POLYGON);
    glVertex3fv(A);
    glVertex3fv(B);
    glVertex3fv(C);
    glVertex3fv(D);
    glEnd();
}

void DrawCube(GLfloat V0[], GLfloat V1[], GLfloat V2[], GLfloat V3[], GLfloat V4[], GLfloat V5[], GLfloat V6[], GLfloat V7[]) {
    glColor3f(1, 0, 0);
    Face(V0, V1, V2, V3); // Front

    glColor3f(0, 1, 0);
    Face(V4, V5, V6, V7); // Back

    glColor3f(0, 0, 1);
    Face(V0, V3, V7, V4); // Left

    glColor3f(1, 1, 0);
    Face(V1, V5, V6, V2); // Right

    glColor3f(0, 1, 1);
    Face(V4, V5, V1, V0); // Top

    glColor3f(1, 0, 1);
    Face(V3, V2, V6, V7); // Bottom
}

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    GLfloat V[8][3] = {
        {-0.3, 0.3, 0.3},
        {0.3, 0.3, 0.3},
        {0.3, -0.3, 0.3},
        {-0.3, -0.3, 0.3},

        {-0.3, 0.3, -0.3},
        {0.3, 0.3, -0.3},
        {0.3, -0.3, -0.3},
        {-0.3, -0.3, -0.3}
    };

    glTranslatef(X, Y, 0.0); // Move the cube away from the camera
    glRotatef(A, 0.5, 1, 1);
    DrawCube(V[0], V[1], V[2], V[3], V[4], V[5], V[6], V[7]);
    glutSwapBuffers();
}

void Spin(int value) {
    A += 0.05;
    if (A > 360) A = 0;

    X += XU;
    Y += YU;

    if (X > 0.6 || X < -0.6) XU *= -1;
    if (Y > 0.6 || Y < -0.6) YU *= -1;

    glutPostRedisplay();
    glutTimerFunc(1, Spin, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(500, 100);
    glutCreateWindow("Rotating Cube");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(Draw);
    glutTimerFunc(1, Spin, 0);
    // glutIdleFunc(Spin);
    glutMainLoop();

    return 0;
}
