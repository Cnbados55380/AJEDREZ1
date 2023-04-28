#include "ETSIDI.h"
#include <iostream> 
#include "freeglut.h"
#include "Usuario.h"

Usuario usuario;

//los callback, funciones que seran llamadas automaticamente por la glut
//cuando sucedan eventos

void OnDraw(void); //esta funcion sera llamada para dibujar
void OnTimer(int value); //esta funcion sera llamada cuando transcurra una temporizacion
void OnKeyboardDown(unsigned char key, int x, int y); //cuando se pulse una tecla	
void mouseClick(int button, int state, int x, int y); //para utilizar el raton
void mouse(int x, int y);
void reshape(int width, int height);

//ETSIDI::Sprite menuinicio{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/MENU.png",0,0,160,90 };
//bool juegoiniciado = false;

int main(int argc, char* argv[])
{
	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	glutInitWindowSize(1366, 768);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Ajedrez");

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective( 40.0, 1366/768.0f, 0.1, 150);
	
	//Registrar los callbacks
	glutPassiveMotionFunc(mouse);
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25, OnTimer, 0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer()
	glutKeyboardFunc(OnKeyboardDown);
	glutMouseFunc(mouseClick);
	glutReshapeFunc(reshape);

	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();

	return 0;
}
//se usa para manejar los eventos del mouse
//detectamos cuando se hace clic en un objeto
void mouse(int x, int y) {

	usuario.mouse(x, y);
	OnDraw();

	glutPostRedisplay;

}


void OnDraw(void)
{
	//Borrado de la pantalla	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(0, 0, 120, // posicion del ojo
		0, 0, 0, // hacia que punto mira (0,0,0)
		0.0, 1.0, 0.0); // definimos hacia arriba (eje Y)
		
	//if (!juegoiniciado) {
	
		usuario.dibuja();

	//tablero.draw();

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}

void mouseClick(int button, int state, int x, int y)
{

	usuario.raton(button, state, x, y);
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		int screenX = x;
		int screenY = y;
		std::cout << "Coordenadas del raton en la pantalla: (" << screenX << ", " << screenY << ")" << std::endl;

		glutPostRedisplay;
	}
}


void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	//poner aqui el c�digo de teclado
	//if (key == 'i' || key == 'I') {
		//juegoiniciado = true;
	//}
	glutPostRedisplay();
}

void OnTimer(int value)
{
	//poner aqui el c�digo de animacion
		//ajedrez.mueve(0);

		//no borrar estas lineas
	glutTimerFunc(100, OnTimer, 0);
	glutPostRedisplay();
}

//Especifica como se debe ajustar la ventana cuando se redimensiona
// w y h representan los nuevos valores de ancho y alto
void reshape(int width, int height)
{
	usuario.setReshape(width * 1.0 / 1366, height * 1.0 / 768);

	// Prevent a divide by zero, when window is too short
	 // (you cant make a window of zero width).
	float ratio = width * 1.0 / height;

	// establece la ventana de visualizacion para que coincida con 
	//el tama�o de la ventana
	glViewport(0, 0, width, height);

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// se carga la matriz identidad
	glLoadIdentity();

	//poryeccion ortogr�fica que mantiene una relacion de aspecto constante
	//con una altura del 75% del ancho
	gluPerspective(40.0, ratio, 0.1, 150);

	// matriz de vista de modelo
	glMatrixMode(GL_MODELVIEW);
}

