#include "Casilla.h"
#include "Tablero.h"
#include "ETSIDI.h"

Casilla::Casilla(int x, int y)
{
	columna = x;
	fila = y;
	ocupada = false;
	tipoPieza = 0; 
}

void Casilla::colocarPieza(Pieza* pieza) {}

int Casilla::getFila() {
	return fila;
};

int Casilla::getColumna() {
	return columna;
}

void Casilla::setTipoCasilla(int x)
{
	tipocasilla = x;
}
