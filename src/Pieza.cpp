#include "Pieza.h"

Pieza::Pieza() {}

Pieza::Pieza(char colorJugador)
{
	color = colorJugador;
}

Pieza::~Pieza() {}

void Pieza::draw() {
	//PeonB.draw();
}

void Pieza::setpos(int x, int y) 
{
	pos.x = x;
	pos.y = y;

}

void Pieza::setCasilla(Casilla* c)
{
	casilla = c;
}

int Pieza::getTipoPieza()
{
	return tipoPieza;
}

char Pieza::getColorPieza()
{
	return color;
}

Casilla* Pieza::getCasilla()
{
	return casilla;
}


