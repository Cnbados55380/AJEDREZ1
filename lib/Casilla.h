#pragma once
#include "ETSIDI.h"

class Pieza;

class Casilla
{
	int fila;
	int columna;
	int tipoPieza; // nada = 0, peon = 1, torre = 2, caballo = 3, alfil = 4, reina = 5, reina = 6
	Pieza* pieza;
	bool tipocasilla; //ocupada=false, llena = true



public:

	Casilla(int x, int y);
	//~Casilla(); //destructor

	void colocarPieza(Pieza* pieza); //coloca una pieza en una casilla
	int getTipoPieza();
	int getFila();
	int getColumna();

};
