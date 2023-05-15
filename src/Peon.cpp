#include "Peon.h"
#include "Tablero.h"

Peon::Peon(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 1;
}

void Peon::draw()
{
	int x, y;

		if (color == 'B') {
			
			for (int i = 0; i < 8; i++) { 
				int x = -32 + i * 8;
				int y = -18;
				PeonB.setPos(x, y);
				PeonB.draw();
			}
		}
		else if (color == 'N') {

			for (int i = 0; i < 8; i++) {
				int x = -32 + i * 8;
				int y = 18;
				PeonN.setPos(x, y);
				PeonN.draw();
			}
		}
	}


