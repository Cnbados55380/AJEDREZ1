#include "Casilla.h"
#include "Tablero.h"
#include "ETSIDI.h"

Casilla::Casilla(int x, int y)
{
	columna = x;
	fila = y;
	tipocasilla = false; //vacia
	tipoPieza = 0; 
}

void Casilla::colocarPieza(Pieza* pieza) {}

int Casilla::getFila() {
	return fila;
};

int Casilla::getColumna() {
	return columna;
}

