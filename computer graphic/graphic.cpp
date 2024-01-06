#include<GL/glut.h>
void init() {
//display window color
glClearColor(0, 0, 0, 0);
//projection parameter
glMatrixMode(GL_PROJECTION);
//2D transformation
gluOrtho2D(0.0, 1200, 0.0, 900);
}
void homee() {
//ROOF of HOUSE
glClear(GL_COLOR_BUFFER_BIT);

//floor

glColor3f(0.109, 0.611, 0.109);
glBegin(GL_POLYGON);
glVertex2i(0, 100);
glVertex2i(1200, 100);
glVertex2i(1200, 0);
glVertex2i(0, 0);
glEnd();

//home
glColor3f(0.517, 0.321, 0.356);
glBegin(GL_POLYGON);
glVertex2i(100, 600);
glVertex2i(800, 600);
glVertex2i(800, 100);
glVertex2i(100, 100);
glEnd();
// Traingle
glColor3f(0.380, 0.082, 0.133);
glBegin(GL_TRIANGLES);
glVertex2i(450, 900);
glVertex2i(800, 600);
glVertex2i(100, 600);
glEnd();
// windtri
glColor3f(0.929, 0.737, 0.509);
glBegin(GL_POLYGON);
glVertex2i(300, 600);

Outcome 6

Apply computer science theory and software development fundamentals to produce computing-based
solutions.

Total Mark: /10

4

glVertex2i(500, 600);
glVertex2i(500,600);
glVertex2i(400,600);
glEnd();
// door
glColor3f(0.760, 0.643, 0.501);
glBegin(GL_POLYGON);
glVertex2i(200, 500);
glVertex2i(350, 500);
glVertex2i(350, 100);
glVertex2i(200, 100);
glEnd();
glColor3f(0.772, 0.654, 0.403);
glBegin(GL_POLYGON);
glVertex2i(200, 500);
glVertex2i(350, 500);
glVertex2i(350, 50);
glVertex2i(200, 50);
glEnd();
glColor3f(0.8, 0.729, 0.678);
glBegin(GL_POLYGON);
glVertex2i(200, 500);
glVertex2i(350, 500);
glVertex2i(350, 20);
glVertex2i(200, 20);
glEnd();
glColor3f(0.8, 0.729, 0.678);
glBegin(GL_POLYGON);
glVertex2i(200, 500);
glVertex2i(350, 500);
glVertex2i(350, 1);
glVertex2i(200,1);
glEnd();
//line door
glColor3f(1, 1, 1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(200, 50);
glVertex2i(350, 50);
glEnd();
//line door
glColor3f(1, 1, 1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(200, 10);
glVertex2i(350, 10);
glEnd();
// door
glColor3f(0.835, 0.698, 0.505);
glBegin(GL_POLYGON);
glVertex2i(210, 480);
glVertex2i(340, 480);
glVertex2i(340, 110);
glVertex2i(210, 110);
glEnd();
//point door
glColor3f(0.403, 0.258, 0.337);
glPointSize(10);
glBegin(GL_POINTS);

5

glVertex2i(210, 300);
glEnd();

//window
glColor3f(0.584, 0.694, 0.733);
glBegin(GL_POLYGON);
glVertex2i(450, 400);
glVertex2i(700, 400);
glVertex2i(700, 200);
glVertex2i(450, 200);
glEnd();
//window
glColor3f(0.960, 0.658, 0.980);
glBegin(GL_POLYGON);
glVertex2i(400, 200);
glVertex2i(750, 200);
glVertex2i(750, 150);
glVertex2i(400, 150);
glEnd();
//line window
glColor3f(1,1,1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(550, 400);
glVertex2i(550, 200);
glEnd();
//line window
glColor3f(1, 1, 1);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(450, 300);
glVertex2i(700, 300);
glEnd();
//tree
glColor3f(0.415, 0.145, 0.149);
glBegin(GL_POLYGON);
glVertex2i(900, 300);
glVertex2i(950, 300);
glVertex2i(950, 100);
glVertex2i(900, 100);
glEnd();
glColor3f(0.113, 0.364, 0.176);
glBegin(GL_TRIANGLES);
glVertex2i(925, 500);
glVertex2i(1000, 300);
glVertex2i(850,300);
glEnd();
glColor3f(0.113, 0.364, 0.176);
glBegin(GL_TRIANGLES);
glVertex2i(925, 600);
glVertex2i(1050, 400);
glVertex2i(800, 400);
glEnd();
//star
glColor3f(1,1,1);
glPointSize(5);
glBegin(GL_POINTS);

6

glVertex2i(1000,900);
glEnd();
//star
glColor3f(1, 1, 1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(1000, 850);
glEnd();
//star
glColor3f(1, 1, 1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(1000, 700);
glEnd();
//star
glColor3f(1, 1, 1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(100, 900);
glEnd();
//star
glColor3f(1, 1, 1);
glPointSize(10);
glBegin(GL_POINTS);
glVertex2i(1000, 800);
glEnd();
glFlush();
}
int main(int argc, char** argv) {
//Initialize glut
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(1200, 900);
glutCreateWindow("My graphics HW");

init();
glutDisplayFunc(homee);
glutMainLoop();
}