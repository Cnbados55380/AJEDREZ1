#pragma once
#include "Casilla.h"
#include "Peon.h"
#include "ETSIDI.h"
#include "Pieza.h"
#include "ListaPiezas.h"
#include "Torre.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Rey.h"
#include "Reina.h"


class Tablero {

private:

	static Casilla* casillas[8][8];

	static ListaPiezas piezas;
	int i, j;
	
	ETSIDI::Sprite tableroAjedrez{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/TABLERO1/TABLERO.png",0,0,160,90 };
	
public:
	Tablero();
	void dibuja();
	void piezasTablero();
};
