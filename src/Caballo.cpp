#include "Caballo.h"
#include "Tablero.h"
Caballo::Caballo(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 3;
}

void Caballo::draw()
{
	int x, y;

	if (color == 'B') {

		for (int i = 1; i < 7; i+=5) { // i=1 y i = 6
			int x = -32 + i * 8;
			int y = -26;
			CaballoB.setPos(x, y);
			CaballoB.draw();
		}
	}
	else if (color == 'N') {

		for (int i = 1; i < 7; i+=5) {
			int x = -32 + i * 8;
			int y = 26;
			CaballoN.setPos(x, y);
			CaballoN.draw();
		}
	}
}
