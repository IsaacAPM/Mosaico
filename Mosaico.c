#include <GL/glut.h>
#include <stdio.h>

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);
}

void drawQUAD(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){
	glBegin(GL_QUADS);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glVertex2f(x4,y4);
	glEnd();
	glFlush();
}

void marcarContorno(float x1, float y1, float x2, float y2){
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(y2,x2);
	glVertex2f(y1,x1);
	glEnd();
	glFlush();
}

void display(void) {
	glColor3f(0.96, 0.84, 0.13);//amarillo
	drawQUAD(0.2,0.0,0.275,0.0,0.0,0.275,0.0,0.2);
	glColor3f(0.02, 0.02, 0.63);//azul
	drawQUAD(0.275,0.0,0.35,0.0,0.0,0.35,0.0,0.275);
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1);
	marcarContorno(0.2,0.0,0.275,0.0);
	marcarContorno(0.275,0.0,0.35,0.0);
}

void teclado(unsigned char key, int xmouse, int ymouse) {
	if (key == 'r') printf("tecla r\n");
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Mosaico freeglut");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(teclado);
	glutMainLoop();
}

