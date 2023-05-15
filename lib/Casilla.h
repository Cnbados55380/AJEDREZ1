#pragma once
#include "ETSIDI.h"

class Pieza;

class Casilla
{
	int fila;
	int columna;
	bool ocupada;
	int tipoPieza; //  VACIO(0) PEON(1) TORRE(2) ALFIL(3) CABALLO(4) REINA(5) REY(6)
	Pieza* pieza;
	int tipocasilla;


/*	ETSIDI::Sprite casilla_seleccionada{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/casilla/casilla_seleccionada.png",1000, 1000,8,8 };
	ETSIDI::Sprite casilla_legal{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/casilla/casilla_legal.png",1000, 1000,8,8 };
	ETSIDI::Sprite casilla_atacada{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/casilla/casilla_atacada.png",1000, 1000,8,8 };
*/
public:

	Casilla(int x, int y);
	//~Casilla(); //destructor

	void colocarPieza(Pieza* pieza); //coloca una pieza en una casilla
	void draw();

	int getTipoPieza();
	int getFila();
	int getColumna();

	void setTipoCasilla(int x);
};