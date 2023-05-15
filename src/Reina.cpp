#include "Reina.h"
#include "Tablero.h"

Reina::Reina(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 5;
}

void Reina::draw()
{
	int x, y;

	if (color == 'B') {

		int x = -32 + 3 * 8;
		int y = -26;
		ReinaB.setPos(x, y);
		ReinaB.draw();

	}
	else if (color == 'N') {

		int x = -32 + 3 * 8;
		int y = 26;
		ReinaN.setPos(x, y);
		ReinaN.draw();
	}
}

