#include "Rey.h"
#include "Tablero.h"

Rey::Rey(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 6;
}

void Rey::draw()
{
	int x, y;

	if (color == 'B') {

			int x = -32 + 4 * 8;
			int y = -26;
			ReyB.setPos(x, y);
			ReyB.draw();
		
	}
	else if (color == 'N') {

			int x = -32 + 4 * 8;
			int y = 26;
			ReyN.setPos(x, y);
			ReyN.draw();
		}
	}

