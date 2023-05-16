#pragma once



#include "Pieza.h"
class Tablero {

private:

	Pieza* casillas[8][8]{};
	ETSIDI::Sprite tableroAjedrez{ "imagen/TABLERO1/TABLERO.png",0,0,160,90 };
	
public:
	Tablero();
	void dibuja();
	void piezasTablero();
};
