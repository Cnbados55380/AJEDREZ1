#include "Peon.h"
#include "Tablero.h"

Peon::Peon(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 1;
}

void Peon::draw()
{

		if (color == 'B') {
				PeonB.draw();
		}
		else if (color == 'N') {
				PeonN.draw();
			
		}
}


