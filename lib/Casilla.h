#pragma once
#include "ETSIDI.h"

class Pieza;

class Casilla
{
	int fila;
	int columna;
	bool ocupada;
	int tipoPieza; // nada = 0, peon = 1, torre = 2, caballo = 3, alfil = 4, reina = 5, reina = 6
	Pieza* pieza;
	int tipocasilla; //ocupada=0, llena = 1



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
