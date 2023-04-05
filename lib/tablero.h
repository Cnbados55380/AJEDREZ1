#pragma once
#include <iostream>

class tablero
{
private:

	char casilla[8][8]; //matriz 8x8 para el tablero
	
	//static const std::string nombresPiezas[8];
	//Pieza* piezas[32];


public:

	tablero();
	~tablero();

	void dibuja();
};