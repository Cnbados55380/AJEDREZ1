ragma once
#include <iostream>
#include "ETSIDI.h"
#include "Casilla.h"

class Pieza {
protected:
	//atributos comunes de todas las piezas, que viene siendo: tipo, color
	ETSIDI::Vector2D pos;
	Casilla* casilla;

	char color;  // 0 blanco, 1 negro // 
	int tipoPieza; //  nada =0, peon = 1, torre = 2, caballo = 3, alfil = 4, reina = 5, rey = 6
	bool primermovimiento = false;

	ETSIDI::Sprite PeonN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/peon-negro.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite PeonB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/peon-blanco.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite TorreN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/torre-negra.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite TorreB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/torre-blanca.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite CaballoN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/caballo-negro.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite CaballoB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/caballo-blanco.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite AlfilN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/alfil-negro.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite AlfilB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/alfil-blanco.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite ReyB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/rey-blanco.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite ReyN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/rey-negro.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite ReinaN{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/reina-negra.png", pos.x, pos.y, 7, 7 };
	ETSIDI::Sprite ReinaB{ "C:/Users/Cristina/source/repos/trabajo_prueba/imagen/piezas/reina-blanca.png", pos.x, pos.y, 7, 7 };

public:
	Pieza();
	Pieza(char colorJugador);
	virtual void draw(); //Cualquier clase que herede este método(las piezas) puede redefinir este método
	~Pieza();

	void setpos(int x, int y);
	int getTipoPieza();
	char getColorPieza(); 
	
	void setCasilla(Casilla* c); //Establecer valor a la casilla
	Casilla* getCasilla(); //Obtener valor actual de la casilla

};
