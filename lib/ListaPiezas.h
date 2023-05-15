#pragma once
#include "Pieza.h"

#define MAX 32

class ListaPiezas {
private:
	Pieza* lista[MAX];
	int numero = 0;
	ETSIDI::Vector2D pos;


public:
	ListaPiezas();
	void inicializa();

	bool agregar(Pieza* p);
	void draw();

	//void mueve(float t);
	//Esfera* colision(Hombre& h);
	//void eliminar(int index);
	//void eliminar(Esfera* e);
	

};