#include "Torre.h"
#include "Tablero.h"

Torre::Torre(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 2;
}

void Torre::draw()
{
	int x, y;

	if (color == 'B') {

		for (int i = 0; i < 8; i+=7) { //Las posiciones de las torres es 0 y 7
			int x = -32 + i * 8;
			int y = -26;
			TorreB.setPos(x, y);
			TorreB.draw();
		}
	}
	else if (color == 'N') {

		for (int i = 0; i < 8; i+=7) {
			int x = -32 + i * 8;
			int y = 26;
			TorreN.setPos(x, y);
			TorreN.draw();
		}
	}
}