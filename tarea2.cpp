#include <GL\glut.h>
#include <stdio.h>


bool octagono = false;
bool figura = false;

void renderPrimitiveQuad()
{
	glBegin(GL_QUADS);
	glVertex3f(-0.5f, -0.5f, -3.0f);
	glVertex3f(-0.5f, 0.5f, -3.0f);
	glVertex3f(0.5f, 0.5f, -3.0f);
	glVertex3f(0.5f, -0.5f, -3.0f);
	glEnd();
}

void renderPrimitivePoints()
{
	glPointSize(20.0f);
	glBegin(GL_POINTS);
	glVertex3f(-0.5f, -0.5f, -3.0f);
	glVertex3f(-0.5f, 0.5f, -3.0f);
	glVertex3f(0.5f, 0.5f, -3.0f);
	glVertex3f(0.5f, -0.5f, -3.0f);
	glEnd();
}

void renderPrimitiveLineLoop() {
	glBegin(GL_LINE_LOOP);


	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(4.0f, 4.0f, -3.0f);
	glVertex3f(6.0f, 3.0f, -3.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(8.0f, 4.0f, -3.0f);
	glVertex3f(9.0f, 6.0f, -3.0f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(8.0f, 8.0f, -3.0f);
	glVertex3f(6.0f, 9.0f, -3.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(4.0f, 8.0f, -3.0f);
	glVertex3f(3.0f, 6.0f, -3.0f);

	




	glEnd();
}

void renderPrimitiveTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3f(-0.5f, -0.5f, -3.0f);
	glVertex3f(0.5f, -0.5f, -3.0f);
	glVertex3f(0.0f, 0.5f, -3.0f);
	glEnd();
}

void renderFigura()
{

	//D blanco
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 2.0, -2.0);
	glVertex3f(10.0, 3.0, -2.0);
	glVertex3f(8.0, 3.0, -2.0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 8.0, -2.0);
	glVertex3f(10.0, 3.0, -2.0);
	glVertex3f(8.0, 3.0, -2.0);
	glEnd();
	//--------------

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 8.0, -2.0);
	glVertex3f(4.0, 7.0, -2.0);
	glVertex3f(4.0, 9.0, -2.0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(4.0, 7.0, -2.0);
	glVertex3f(4.0, 9.0, -2.0);
	glVertex3f(3.0, 8.0, -2.0);
	glEnd();

	//--------------

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 8.0, -2.0);
	glVertex3f(14.0, 7.0, -2.0);
	glVertex3f(14.0, 9.0, -2.0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(14.0, 7.0, -2.0);
	glVertex3f(14.0, 9.0, -2.0);
	glVertex3f(15.0, 8.0, -2.0);
	glEnd();

	//-----------

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 14.0, -2.0);
	glVertex3f(10.0, 13.0, -2.0);
	glVertex3f(8.0, 13.0, -2.0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex3f(9.0, 8.0, -2.0);
	glVertex3f(10.0, 13.0, -2.0);
	glVertex3f(8.0, 13.0, -2.0);
	glEnd();
	//--------------



	glFlush();
}

void renderCuadrado()
{
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);


	glVertex3f(0.0f, 0.0f, -3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 4.0f, -3.0f);
	glColor3f(0.0f, 0.0f, 1.0f);

	glVertex3f(4.0f, 4.0f, -3.0f);

	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex3f(4.0f, 0.0f, -3.0f);
	glEnd();
	
}
void init(void) 
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
}

void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT);
   //glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
   glLoadIdentity();
   //renderPrimitiveQuad();
   // renderPrimitivePoints();
   // renderPrimitiveLineLoop();


   if (figura) {
	   renderFigura();
   }


   if (octagono) {
	   renderPrimitiveLineLoop();
   }



   glFlush ();
}

void idleFunc(void)
{
	glutPostRedisplay();
}

void reshape(int width, int height) {
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(45, (GLfloat)width / (GLfloat)height, 0.01, 3.0);
	glOrtho(0, 20, 0, 20, 0, 20);

	glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
	case 27:
         exit(0);
         break;
	case 'a':
	case 'A':
		//printf("Se presiono la tecla A\n");
		octagono = true;
		figura = false;
		break;
	case 'd':
	case 'D':
		//printf("Se presiono la tecla D\n");
		octagono = false;
		figura = true;
		break;
	case 'w':
	case 'W':
		printf("Se presiono la tecla W\n");
		break;
	case 's':
	case 'S':
		printf("Se presiono la tecla S\n");
		break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Teclado");
   init();
   glutDisplayFunc(display);
   glutIdleFunc(idleFunc);
   glutKeyboardFunc(keyboard);
   glutReshapeFunc(reshape);
   glutMainLoop();
   return 0;
}
