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

void drawTRIANGLE(float x1, float y1, float x2, float y2, float x3, float y3){
	glBegin(GL_TRIANGLES);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
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
	glLineWidth(2);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	a = 0.4*s1;
	c = 0.55*s3;
	f = 0.55*s6;
	h = 0.4*s8;
	drawQUAD(a,0.0,c,0.0,0.0,f,0.0,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,c,0.0,0.0,f,0.0,h);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	a = 1.0*s1;
	b = 0.45*s2;
	c = 1.0*s3;
	d = 0.6*s4;
	e = 0.6*s5;
	f = 1.0*s6;
	g = 0.45*s7;
	h = 1.0*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,b,c,d,e,f,g,h);
	glColor3f(0.92, 0.65, 0.082);//naranja
	a = 0.55*s1;
	c = 0.7*s3;
	f = 0.7*s6;
	h = 0.55*s8;
	drawQUAD(a,0.0,c,0.0,0.0,f,0.0,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,c,0.0,0.0,f,0.0,h);
	glColor3f(0.92, 0.65, 0.082);//naranja
	a = 1.0*s1;
	b = 0.3*s2;
	c = 1.0*s3;
	d = 0.45*s4;
	e = 0.45*s5;
	f = 1.0*s6;
	g = 0.3*s7;
	h = 1.0*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,b,c,d,e,f,g,h);
	glColor3f(0.02, 0.02, 0.63);//azul
	a = 0.7*s1;
	c = 0.77*s3;
	d = 0.07*s4;
	e = 0.07*s5;
	f = 0.77*s6;
	h = 0.7*s8;
	drawQUAD(a,0.0,c,d,e,f,0.0,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,0.0,c,d,e,f,0.0,h);
	glColor3f(0.02, 0.02, 0.63);//azul
	a = 0.93*s1;
	b = 0.23*s2;
	c = 1.0*s3;
	d = 0.3*s4;
	e = 0.3*s5;
	f = 1.0*s6;
	g = 0.23*s7;
	h = 0.93*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	glColor3f(0.0,0.0,0.0);//negro
	marcarContorno(a,b,c,d,e,f,g,h);
	a = 0.77*s1;
	b = 0.07*s2;
	c = 0.93*s3;
	d = 0.23*s4;
	e = 0.23*s5;
	f = 0.93*s6;
	g = 0.07*s7;
	h = 0.77*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	marcarContorno(a,b,c,d,e,f,g,h);

	//triangulo en las esquinas
	glColor3f(0.92, 0.65, 0.082);//naranja
	a = 0.76*s1;
	b = 0.0*s2;
	c = 0.82*s3;
	d = 0.0*s4;
	e = 1.0*s5;
	f = 0.18*s6;
	g = 1.0*s7;
	h = 0.24*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	drawQUAD(b,a,d,c,f,e,h,e);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	a = 0.82*s1;
	b = 0.0*s2;
	c = 0.88*s3;
	d = 0.0*s4;
	e = 1.0*s5;
	f = 0.12*s6;
	g = 1.0*s7;
	h = 0.18*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	drawQUAD(b,a,d,c,f,e,h,e);
	glColor3f(0.02, 0.02, 0.63);//azul
	a = 0.92*s1;
	b = 0.0*s2;
	c = 1.0*s3;
	d = 0.0*s4;
	e = 1.0*s5;
	f = 0.08*s6;
	drawTRIANGLE(a,b,c,d,e,f);
	drawTRIANGLE(b,a,d,c,f,e);
	a = 0.0*s1;
	b = 0.06*s2;
	c = 0.06*s3;
	d = 0.06*s4;
	e = 0.1*s5; 
	f = 0.2*s6;
	g = 0.0*s7;
	h = 0.2*s8;
	drawQUAD(a,b,c,d,e,f,g,h);
	drawQUAD(b,a,d,c,f,e,h,g);
	a = 0.0*s1;
	b = 0.2*s2;
	c = 0.06*s3;
	d = 0.2*s4;
	e = 0.0*s5; 
	f = 0.34*s6;
	drawTRIANGLE(a,b,c,d,e,f);
	drawTRIANGLE(b,a,d,c,f,e);
	a = 0.06*s1;
	b = 0.2*s2;
	c = 0.1*s3;
	d = 0.2*s4;
	e = 0.08*s5; 
	f = 0.24*s6;
	drawTRIANGLE(a,b,c,d,e,f);
	drawTRIANGLE(b,a,d,c,f,e);
}


void display(void) {	
	pintarCuadrante(1,1,1,1,1,1,1,1);
	pintarCuadrante(-1,1,-1,1,-1,1,-1,1);
	pintarCuadrante(-1,-1,-1,-1,-1,-1,-1,-1);
	pintarCuadrante(1,-1,1,-1,1,-1,1,-1);
	glColor3f(0.96, 0.84, 0.13);//amarillo
	drawQUAD(0.0,0.06,0.06,0.0,0.0,-0.06,-0.06,0.0);
}

void teclado(unsigned char key, int xmouse, int ymouse) {
	float a = 0.25;
	if (key == 'r') printf("tecla r %f\n",a);
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Mosaico freeglut");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(teclado);
	glutMainLoop();
}

