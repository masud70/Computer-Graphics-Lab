#include <GL/glut.h>
#include <cmath>
#include <ctime>

const int windowWidth = 500;
const int windowHeight = 500;
const int cx = windowWidth / 2;
const int cy = windowHeight / 2;
const int clockRadius = 200;

void drawText(int x, int y, const char* text) {
    glRasterPos2i(x, y);

    // Loop through each character in the text and draw it
    for (const char* c = text; *c != '\0'; ++c) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }
}

void drawClock() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Draw clock circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // White color
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; ++i) {
        float angle = i * (M_PI / 180.0f);
        float x = cx + clockRadius * cos(angle);
        float y = cy + clockRadius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Get current time
    time_t currentTime = time(nullptr);
    struct tm* localTime = localtime(&currentTime);

    // Calculate hand positions
    int secondLength = clockRadius - 10;
    int minuteLength = clockRadius - 30;
    int hourLength = clockRadius - 50;

    int sx = cx + static_cast<int>(secondLength * sin((localTime->tm_sec + glutGet(GLUT_ELAPSED_TIME)) * (2 * M_PI / 60000)));
    int sy = cy + static_cast<int>(secondLength * cos((localTime->tm_sec + glutGet(GLUT_ELAPSED_TIME)) * (2 * M_PI / 60000)));

    int mx = cx + static_cast<int>(minuteLength * sin((localTime->tm_min * 60 + localTime->tm_sec) * (2 * M_PI / 3600)));
    int my = cy + static_cast<int>(minuteLength * cos((localTime->tm_min * 60 + localTime->tm_sec) * (2 * M_PI / 3600)));

    int hx = cx + static_cast<int>((hourLength - 20) * sin((localTime->tm_hour % 12 * 3600 + localTime->tm_min * 60 + localTime->tm_sec) * (2 * M_PI / 43200)));
    int hy = cy + static_cast<int>((hourLength - 20) * cos((localTime->tm_hour % 12 * 3600 + localTime->tm_min * 60 + localTime->tm_sec) * (2 * M_PI / 43200)));

    // Draw clock hands
    glColor3f(1.0f, 0.0f, 0.0f); // Red color for hour hand
    glBegin(GL_LINES);
    glVertex2i(cx, cy);
    glVertex2i(hx, hy);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f); // Blue color for minute hand
    glBegin(GL_LINES);
    glVertex2i(cx, cy);
    glVertex2i(mx, my);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black color for second hand
    glBegin(GL_LINES);
    glVertex2i(cx, cy);
    glVertex2i(sx, sy);
    glEnd();

    // Draw hour digit
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for text
    glRasterPos2i(cx - 10, cy + 10);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0' + localTime->tm_hour % 12);

    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("OpenGL Clock");
    glutDisplayFunc(drawClock);
    glutReshapeFunc(reshape);
    glutIdleFunc(drawClock);

    glutMainLoop();
    return 0;
}
