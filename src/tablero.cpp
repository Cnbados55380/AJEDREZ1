#include "Tablero.h"
#include "freeglut.h"


Casilla* Tablero::casillas[8][8];
ListaPiezas Tablero::piezas;

Tablero::Tablero() {}

void Tablero::piezasTablero() {


	piezas.inicializa();

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			casillas[i][j] = new Casilla(i, j);


	//Peones blancos (1)
	Peon* p1b = new Peon('B');
	Peon* p2b = new Peon('B');
	Peon* p3b = new Peon('B');
	Peon* p4b = new Peon('B');
	Peon* p5b = new Peon('B');
	Peon* p6b = new Peon('B');
	Peon* p7b = new Peon('B');
	Peon* p8b = new Peon('B');


	//Peones negros (1)
	Peon* p1n = new Peon('N');
	Peon* p2n = new Peon('N');
	Peon* p3n = new Peon('N');
	Peon* p4n = new Peon('N');
	Peon* p5n = new Peon('N');
	Peon* p6n = new Peon('N');
	Peon* p7n = new Peon('N');
	Peon* p8n = new Peon('N');

	//Torres Blancas
	Torre* t1b = new Torre('B');
	Torre* t2b = new Torre('B');
	//Torre negras
	Torre* t1n = new Torre('N');
	Torre* t2n = new Torre('N');
	//Caballos blancos
	Caballo* c1b = new Caballo('B');
	Caballo* c2b = new Caballo('B');
	//Caballos negros
	Caballo* c1n = new Caballo('N');
	Caballo* c2n = new Caballo('N');

	//Alfiles blancos
	Alfil* a1b = new Alfil('B');
	Alfil* a2b = new Alfil('B');
	//Alfiles negros
	Alfil* a1n = new Alfil('N');
	Alfil* a2n = new Alfil('N');

	//Reinas
	Reina* qb = new Reina('B');
	Reina* qn = new Reina('N');
	//Reyes
	Rey* kb = new Rey('B');
	Rey* kn = new Rey('N');

	//PRIMERA FILA BLANCA
	casillas[0][0]->colocarPieza(t1b);
	casillas[0][1]->colocarPieza(c1b);
	casillas[0][2]->colocarPieza(a1b);
	casillas[0][3]->colocarPieza(qb);
	casillas[0][4]->colocarPieza(kb);
	casillas[0][5]->colocarPieza(a2b);
	casillas[0][6]->colocarPieza(c2b);
	casillas[0][7]->colocarPieza(t2b);

	// SEGUNDA FILA BLANCA
	casillas[0][1]->colocarPieza(p1b);
	casillas[1][1]->colocarPieza(p2b);
	casillas[2][1]->colocarPieza(p3b);
	casillas[3][1]->colocarPieza(p4b);
	casillas[4][1]->colocarPieza(p5b);
	casillas[5][1]->colocarPieza(p6b);
	casillas[6][1]->colocarPieza(p7b);
	casillas[7][1]->colocarPieza(p8b);

	//PRIMERA FILA NEGRA

	casillas[7][0]->colocarPieza(t1n);
	casillas[7][1]->colocarPieza(c1n);
	casillas[7][2]->colocarPieza(a1n);
	casillas[7][3]->colocarPieza(qn);
	casillas[7][4]->colocarPieza(kn);
	casillas[7][5]->colocarPieza(a2n);
	casillas[7][6]->colocarPieza(c2n);
	casillas[7][7]->colocarPieza(t2n);


	//SEGUNDA FILA NEGRA
	casillas[0][6]->colocarPieza(p1n);
	casillas[1][6]->colocarPieza(p2n);
	casillas[2][6]->colocarPieza(p3n);
	casillas[3][6]->colocarPieza(p4n);
	casillas[4][6]->colocarPieza(p5n);
	casillas[5][6]->colocarPieza(p6n);
	casillas[6][6]->colocarPieza(p7n);
	casillas[7][6]->colocarPieza(p8n);


	//Fila primera blanca
	piezas.agregar(t1b);
	piezas.agregar(t2b);
	piezas.agregar(c1b);
	piezas.agregar(c2b);
	piezas.agregar(a1b);
	piezas.agregar(a2b);
	piezas.agregar(qb);
	piezas.agregar(kb);


	//fila primera negra
	piezas.agregar(t1n);
	piezas.agregar(t2n);
	piezas.agregar(c1n);
	piezas.agregar(c2n);
	piezas.agregar(a1n);
	piezas.agregar(a2n);
	piezas.agregar(qn);
	piezas.agregar(kn);

	//peones blancos
	piezas.agregar(p1b);
	piezas.agregar(p2b);
	piezas.agregar(p3b);
	piezas.agregar(p4b);
	piezas.agregar(p5b);
	piezas.agregar(p6b);
	piezas.agregar(p7b);
	piezas.agregar(p8b);

	//peones negros
	piezas.agregar(p1n);
	piezas.agregar(p2n);
	piezas.agregar(p3n);
	piezas.agregar(p4n);
	piezas.agregar(p5n);
	piezas.agregar(p6n);
	piezas.agregar(p7n);
	piezas.agregar(p8n);
}



void Tablero::dibuja() {

	piezas.draw();
	tableroAjedrez.draw();
}
