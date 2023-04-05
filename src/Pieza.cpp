#include "Pieza.h"
#include "ETSIDI.h"

Pieza::Pieza() {};

void Pieza::dibuja() {

	ETSIDI::Sprite torreblancaizq("C:/Users/Cristina/source/repos/pruebajuego2/imagen/torre_blanca.png", -0.8, -0.83, 0.2, 0.2);
	torreblancaizq.draw();
	ETSIDI::Sprite caballoblancoizq("C:/Users/Cristina/source/repos/pruebajuego2/imagen/caballo_blanco.png", -0.54, -0.83, 0.2, 0.2);
	caballoblancoizq.draw();
	ETSIDI::Sprite alfilblancoizq("C:/Users/Cristina/source/repos/pruebajuego2/imagen/alfil_blanco.png", -0.30, -0.83, 0.2, 0.2);
	alfilblancoizq.draw();
	ETSIDI::Sprite reinablanca("C:/Users/Cristina/source/repos/pruebajuego2/imagen/reina_blanca.png", -0.10, -0.83, 0.2, 0.2);
	reinablanca.draw();
	ETSIDI::Sprite reyblanco("C:/Users/Cristina/source/repos/pruebajuego2/imagen/rey_blanco.png", 0.10, -0.83, 0.2, 0.2);
	reyblanco.draw();
	ETSIDI::Sprite torreblancadch("C:/Users/Cristina/source/repos/pruebajuego2/imagen/torre_blanca.png", 0.8, -0.83, 0.2, 0.2);
	torreblancadch.draw();
	ETSIDI::Sprite caballoblancodch("C:/Users/Cristina/source/repos/pruebajuego2/imagen/caballo_blanco.png", 0.54, -0.83, 0.2, 0.2);
	caballoblancodch.draw();
	ETSIDI::Sprite alfilblancodch("C:/Users/Cristina/source/repos/pruebajuego2/imagen/alfil_blanco.png", 0.30, -0.83, 0.2, 0.2);
	alfilblancodch.draw();
	ETSIDI::Sprite peonblanco1("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", -0.8, -0.5, 0.2, 0.2);
	peonblanco1.draw();
	ETSIDI::Sprite peonblanco2("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", -0.54, -0.5, 0.2, 0.2);
	peonblanco2.draw();
	ETSIDI::Sprite peonblanco3("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", -0.30, -0.5, 0.2, 0.2);
	peonblanco3.draw();
	ETSIDI::Sprite peonblanco4("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", -0.1, -0.5, 0.2, 0.2);
	peonblanco4.draw();
	ETSIDI::Sprite peonblanco5("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", 0.10, -0.5, 0.2, 0.2);
	peonblanco5.draw();
	ETSIDI::Sprite peonblanco6("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", 0.8, -0.5, 0.2, 0.2);
	peonblanco6.draw();
	ETSIDI::Sprite peonblanco7("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", 0.54, -0.5, 0.2, 0.2);
	peonblanco7.draw();
	ETSIDI::Sprite peonblanco8("C:/Users/Cristina/source/repos/pruebajuego2/imagen/peon_blanco.png", 0.30, -0.5, 0.2, 0.2);
	peonblanco8.draw();

}

Pieza::~Pieza() {
	// destructor
}
