#pragma once
#include "freeglut.h"
#include <iostream>
#include "ETSIDI.h"


class Usuario {
private:

	//start
	//ETSIDI::Sprite pantallaInicio{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/start game.png", 0, 0, 2, 2 };


	//MENU principal
	//
	ETSIDI::Sprite menuinicio{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/MENU.png",0,0,160,90 };
	ETSIDI::Sprite menuOpciones{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_Opciones.png" ,0,0,160,90 };
	ETSIDI::Sprite menuModoJuego{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_ModoJuego.png" ,0,0,160,90};

	//MENU opciones

	ETSIDI::Sprite Opciones{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/OPCIONES/OPCIONES.png",0,0,160,90 };
	ETSIDI::Sprite OpcionesInst{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/OPCIONES/O_Instrucciones.png" ,0,0,160,90};
	ETSIDI::Sprite OpcionesAyud{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/OPCIONES/O_Ayuda.png" ,0,0,160,90 };
	ETSIDI::Sprite OpcionesAtras{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/OPCIONES/O_Atras.png" ,0,0,160,90 };

	//OPCIONES-Instrucciones
	
	ETSIDI::Sprite Instrucciones{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/INSTRUCCIONES.png",0,0,160,90 };
	ETSIDI::Sprite InstruccionesCapP{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_CapturaPaso.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesCor{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_Coronacion.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesEnr{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_Enroque.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesJM{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_JaqueMate.png",0,0,160,90 };
	ETSIDI::Sprite InstruccionesObj{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_Objetivo.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesTab{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/I_Tablas.png" ,0,0,160,90};
	ETSIDI::Sprite ICP{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/CAPTURAPASO.png" ,0,0,160,90 };
	ETSIDI::Sprite ICor{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/CORONACION.png",0,0,160,90 };
	ETSIDI::Sprite IEnr{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/ENROQUE.png" ,0,0,160,90};
	ETSIDI::Sprite IJM{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/JAQUE MATE.png" ,0,0,160,90 };
	ETSIDI::Sprite IObj{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/OBJETIVO.png" ,0,0,160,90 };
	ETSIDI::Sprite ITab{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/INSTRUCCIONES/TABLAS.png" ,0,0,160,90 };

	//OPCIONES-Ayuda

	ETSIDI::Sprite Ayuda{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/AYUDA.png",0,0,160,90};
	ETSIDI::Sprite AyudaAlfil{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Alfil.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaCaballo{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Caballo.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaPeon{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Peon.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaReina{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Reina.png",0,0,160,90 };
	ETSIDI::Sprite AyudaRey{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Rey.png",0,0,160,90 };
	ETSIDI::Sprite AyudaTorre{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/A_Torre.png" ,0,0,160,90 };
	ETSIDI::Sprite AAlfil{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Alfil.png" ,0,0,160,90 };
	ETSIDI::Sprite ACaballo{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Caballo.png",0,0,160,90 };
	ETSIDI::Sprite APeon{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Peon.png" ,0,0,160,90 };
	ETSIDI::Sprite AReina{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Reina.png" ,0,0,160,90 };
	ETSIDI::Sprite ARey{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Rey.png" ,0,0,160,90 };
	ETSIDI::Sprite ATorre{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/AYUDA PIEZAS/H_Torre.png" ,0,0,160,90 };


public:
	Usuario();
	virtual ~Usuario();

	void mouse(int x, int y);
	//void tecla(unsigned char key);
	void raton(int button, int state, int x, int y);
	//void mueve(float t);
	void dibuja();


	//setter
	void setMenuInicio(int x);
	//void setMenuCoronacion(int x);
	void setOpciones(int x);
	void setReshape(float x, float y);
	int getEstado();
	int getMenuJuego();
	//bool modojuego; //juego- 1 o 2

	//opciones
	//int opciones;
	int help;
	int movs;
	int texto_ayuda; // 0-5
	int texto_instrucciones; //0-5

	//variables reshape
	float shapx, shapy;

	enum  Estado { INICIO, OP, AYUDA, INSTRUCCIONES, MODOJUEGO, JVJ, FIN };
	Estado estado;

	enum Inicio{I, OPCIONES, MODODEJUEGO};
	Inicio menu_inicio;

	enum Opcion{O, AYUD, INSTRUC, a_opcion};
	Opcion  opt;

	enum Help { H, TEXTO };
	Help menu_help;

	enum Instr { INSTR, TEXTO_I};
	Instr menu_inst;
};

