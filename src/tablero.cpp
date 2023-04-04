#include "tablero.h"
#include "ETSIDI.h"
#include <iostream>

tablero::tablero() {

	const char piezas[] = { 't', 'c', 'a', 'q', 'k', 'a', 'c', 't' }; //Tipo de pieza: torre, caballo...

	//Letras minusculas-Negras, Letras mayusculas--Blancas
	for (int i = 0; i < 8; i++) {
		casilla[0][i] = piezas[i];
		casilla[1][i] = 'p';
		casilla[6][i] = 'P';
		casilla[7][i] = piezas[i] - 32; // convertir a mayúsculas para las piezas blancas
		for (int j = 2; j < 6; j++) {
			casilla[j][i] = ' ';
		}
	}
}

tablero::~tablero() {
	// destructor
}

//Intento de incluir las imagenes de las piezas
const std::string nombresPiezas[] = {

	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/torre_blanca.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/caballo_blanco.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/alfil_blanco.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/reina_blanca.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/rey_blanco.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/alfil_blanco.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/caballo_blanco.png",
	"C:/Users/Cristina/source/repos/pruebajuego2/imagen/torre_blanca.png"

};

void tablero::dibuja() {

	// dibujar el tablero
	ETSIDI::Sprite tablero("C:/Users/Cristina/source/repos/pruebajuego2/imagen/tablero1.png", 0, 0, 2, 3);
	tablero.draw();

	//Intento de colocar las piezas en el tablero
	
/*
	for (int i = 0; i < 8; i++) {
		for (int j=0; j < 8; j++) {
			if (casilla[i][j] != ' '){
				int indicePieza = casilla[i][j]-'a';
				ETSIDI::Sprite sprite(nombresPiezas[indicePieza].c_str(), j*100, i*100, 100, 100);
				sprite.draw();
			
			}
		}
	}
	*/
}
