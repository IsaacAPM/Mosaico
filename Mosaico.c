#include <GL/glut.h>
#include <stdio.h>

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);
}

void drawQUAD(float x1, float y1, float x2, float y2){
	glBegin(GL_QUADS);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(y2,x2);
	glVertex2f(y1,x1);
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

void dibujaCuadrante(int sx, int sy){
	
}

void display(void) {
	glColor3f(0.96, 0.84, 0.13);//amarillo
	drawQUAD(0.4,0.0,0.55,0.0);
	drawQUAD(1.0,0.45,1.0,0.6);
	glColor3f(0.92, 0.65, 0.082);//naranja
	drawQUAD(0.55,0.0,0.7,0.0);
	drawQUAD(1.0,0.3,1.0,0.45);
	glColor3f(0.02, 0.02, 0.63);//azul
	drawQUAD(0.7,0.0,0.77,0.07);
	drawQUAD(0.93,0.23,1.0,0.3);
	glColor3f(0.0,0.0,0.0);//negro
	drawQUAD(0.77,0.07,0.93,0.23);
	glLineWidth(1);
	marcarContorno(0.4,0.0,0.55,0.0);
	marcarContorno(0.55,0.0,0.7,0.0);
	marcarContorno(0.7,0.0,0.77,0.07);
	marcarContorno(0.93,0.23,1.0,0.3);
	marcarContorno(1.0,0.3,1.0,0.45);
	marcarContorno(1.0,0.45,1.0,0.6);
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

