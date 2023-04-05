#include "Pieza.h"
#include "ETSIDI.h"

Pieza::Pieza() {};

void Pieza::dibuja() {

	ETSIDI::Sprite torreblanca("C:/Users/Cristina/source/repos/pruebajuego2/imagen/torre_blanca.png", -0.8, -0.83, 0.2, 0.2);
	torreblanca.draw();

}

Pieza::~Pieza() {
	// destructor
}
