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

void marcarContorno(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glVertex2f(x4,y4);
	glEnd();
	glFlush();
}

void pintarCuadrante(int s1,int s2,int s3,int s4,int s5,int s6,int s7,int s8){
	float a,b,c,d,e,f,g,h;
	glLineWidth(1);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	a = 0.4*s1;
	c = 0.55*s3;
	f = 0.55*s6;
	h = 0.4*s8;
	drawQUAD(a,0.0,c,0.0,0.0,f,0.0,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,b,0.0,0.0,c,0.0,d);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	a = 1.0*s1;
	c = 1.0*s3;
	e = 0.6*s5;
	drawQUAD(a,0.45,c,0.6,e,1.0,0.45,1.0);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.45,1.0,0.6,0.6,1.0,0.45,1.0);
	/* glColor3f(0.92, 0.65, 0.082);//naranja
	a = 0.55*s1;
	b = 0.7*s2;
	c = 0.7*s3;
	d = 0.55*s4;
	drawQUAD(a,0.0,b,0.0,0.0,c,0.0,d);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,b,0.0,0.0,c,0.0,d);
	glColor3f(0.92, 0.65, 0.082);//naranja
	a = 1.0*s1;
	b = 1.0*s2;
	c = 1.0*s3;
	d = 1.0*s4;
	drawQUAD(a,0.3,b,0.45,0.45,c,0.3,d);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.3,b,0.45,0.45,c,0.3,d);
	glColor3f(0.02, 0.02, 0.63);//azul
	a = 0.7*s1;
	b = 0.77*s2;
	c = 0.77*s3;
	d = 0.7*s3;
	drawQUAD(a,0.0,b,0.07,0.07,c,0.0,d);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,b,0.07,0.07,c,0.0,d);
	glColor3f(0.02, 0.02, 0.63);//azul
	a = 0.93*s1;
	b = 1.0*s2;
	c = 1.0*s3;
	d = 0.93*s4;
	drawQUAD(a,0.23,b,0.3,0.3,c,0.23,d);
	glColor3f(0.0,0.0,0.0);//negro
	a = 0.77;
	b = 0.93;
	c = 0.93;
	d = 0.77;
	drawQUAD(a,0.07,b,0.23,0.23,c,0.07,d); */
}


void display(void) {	
	pintarCuadrante(-1,-1,1,1);
}

void teclado(unsigned char key, int xmouse, int ymouse) {
	float a = 0.25;
	if (key == 'r') printf("tecla r %f\n",a);
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

