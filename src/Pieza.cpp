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



int Pieza::getTipoPieza()
{
	return tipoPieza;
}

char Pieza::getColorPieza()
{
	return color;
}




