#include "ListaPiezas.h"
#include "Tablero.h"

ListaPiezas::ListaPiezas()
{
}

void ListaPiezas::inicializa()
{

	for (int i = 0; i < MAX; i++)
		lista[i] = 0;
}

bool ListaPiezas::agregar(Pieza* p)
{
	if (numero < MAX)
		lista[numero++] = p;
	else
		return false; // capacidad máxima alcanzada
	return true;
}

void ListaPiezas::draw()
{
	for (int i = 0; i < numero; i++)
		lista[i]->draw();

}


