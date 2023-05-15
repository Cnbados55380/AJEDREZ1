#include "Peon.h"
#include "Tablero.h"

Alfil::Alfil(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 4;
}

void Alfil::draw()
{
	int x, y;

	if (color == 'B') {

		for (int i = 2; i < 6; i+=3) { //i=2 y i=5
			int x = -32 + i * 8;
			int y = -26;
			AlfilB.setPos(x, y);
			AlfilB.draw();
		}
	}
	else if (color == 'N') {

		for (int i = 2; i < 6; i+=3) {
			int x = -32 + i * 8;
			int y = 26;
			AlfilN.setPos(x, y);
			AlfilN.draw();
		}
	}
}
