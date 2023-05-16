#include "Reina.h"
#include "Tablero.h"

Reina::Reina(char colorEquipo)
{
	color = colorEquipo;
	tipoPieza = 5;
}

void Reina::draw()
{
if (color == 'B')ReinaB.draw();
	else ReinaN.draw();
}

