#pragma once
#include "Tablero.h"
#include "freeglut.h"

#include "Peon.h"
#include "ETSIDI.h"
#include "Pieza.h"
#include "ListaPiezas.h"
#include "Torre.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Rey.h"
#include "Reina.h"

Tablero::Tablero() {}

void Tablero::piezasTablero() {

	//piezas.inicializa();


	//PRIMERA FILA BLANCA
	casillas[0][0]= new Torre('B');
	casillas[0][1]= new Caballo('B');
	casillas[0][2] = new Alfil('B');
	casillas[0][3] = new Reina('B');
	casillas[0][4] = new Rey('B');
	casillas[0][5] = new Alfil('B');
	casillas[0][6]= new Caballo('B');
	casillas[0][7]= new Torre('B');

	// SEGUNDA FILA BLANCA Y NEGRA
	for (int i = 0; i < 8; i++) {
		casillas[i][1] = new Peon('B');
		casillas[i][6] = new Peon('N');
	}

	//PRIMERA FILA NEGRA
	casillas[7][0] = new Torre('N');
	casillas[7][1] = new Caballo('N');
	casillas[7][2] = new Alfil('N');
	casillas[7][4] = new Reina('N');
	casillas[7][3] = new Rey('N');
	casillas[7][5] = new Alfil('N');
	casillas[7][6] = new Caballo('N');
	casillas[7][7] = new Torre('N');


}



void Tablero::dibuja() {

	tableroAjedrez.draw();
	for(int i=0;i<8;i++)
		for (int j = 0; j < 8; j++)
		{
			if (casillas[i][j]) {
				glPushMatrix();
				glTranslatef(i*64,j*64,0.1);
				casillas[i][j]->draw();
				glPopMatrix();
			}
		}

	
}
