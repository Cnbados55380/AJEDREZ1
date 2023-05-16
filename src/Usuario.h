#pragma once
#include "freeglut.h"
#include <iostream>
#include "ETSIDI.h"


class Usuario {
private:

	//start
	//ETSIDI::Sprite pantallaInicio{ "imagen/menu/start game.png", 0, 0, 2, 2 };


	//MENU principal
	//
	ETSIDI::Sprite menuinicio{ "imagen/menu/MENU.png",0,0,160,90 };
	ETSIDI::Sprite menuOpciones{ "imagen/menu/M_Opciones.png" ,0,0,160,90 };
	ETSIDI::Sprite menuModoJuego{ "imagen/menu/M_ModoJuego.png" ,0,0,160,90};
	
	///MENU JUEGO
	ETSIDI::Sprite ModoJuego{ "imagen/menu/MODODEJUEGO/MODODEJUEGO.png" ,0,0,160,90 };
	ETSIDI::Sprite M_Jugador{ "imagen/menu/MODODEJUEGO/M_JUGADOR.png" ,0,0,160,90 };
	ETSIDI::Sprite M_IA{ "imagen/menu/MODODEJUEGO/M_IA.png" ,0,0,160,90 };

	//JUGvsJUG
	ETSIDI::Sprite JugJug{ "imagen/menu/MODODEJUEGO/JUGvsJUG/JUGvsJUG.png",0,0,160,90 };
	ETSIDI::Sprite M_JugNegro{ "imagen/menu/MODODEJUEGO/JUGvsJUG/JUG_NEGRO.png" ,0,0,160,90 };
	ETSIDI::Sprite M_JugBlanco{ "imagen/menu/MODODEJUEGO/JUGvsJUG/JUG_BLANCO.png" ,0,0,160,90 };

	//TABLERO
	ETSIDI::Sprite Tablero{ "imagen/TABLERO1/TABLERO.png",0,0,160,90 };


	//MENU opciones

	ETSIDI::Sprite Opciones{"imagen/menu/OPCIONES/OPCIONES.png",0,0,160,90};
	ETSIDI::Sprite OpcionesInst{ "imagen/menu/OPCIONES/O_Instrucciones.png" ,0,0,160,90};
	ETSIDI::Sprite OpcionesAyud{ "imagen/menu/OPCIONES/O_Ayuda.png" ,0,0,160,90 };
	ETSIDI::Sprite OpcionesAtras{ "imagen/menu/OPCIONES/O_Atras.png" ,0,0,160,90 };
	
	//OPCIONES-Instrucciones
	
	ETSIDI::Sprite Instrucciones{ "imagen/menu/INSTRUCCIONES/INSTRUCCIONES.png",0,0,160,90 };
	ETSIDI::Sprite InstruccionesCapP{ "imagen/menu/INSTRUCCIONES/I_CapturaPaso.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesCor{ "imagen/menu/INSTRUCCIONES/I_Coronacion.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesEnr{ "imagen/menu/INSTRUCCIONES/I_Enroque.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesJM{ "imagen/menu/INSTRUCCIONES/I_JaqueMate.png",0,0,160,90 };
	ETSIDI::Sprite InstruccionesObj{ "imagen/menu/INSTRUCCIONES/I_Objetivo.png" ,0,0,160,90 };
	ETSIDI::Sprite InstruccionesTab{ "imagen/menu/INSTRUCCIONES/I_Tablas.png" ,0,0,160,90};
	ETSIDI::Sprite ICP{ "imagen/menu/INSTRUCCIONES/CAPTURAPASO.png" ,0,0,160,90 };
	ETSIDI::Sprite ICor{ "imagen/menu/INSTRUCCIONES/CORONACION.png",0,0,160,90 };
	ETSIDI::Sprite IEnr{ "imagen/menu/INSTRUCCIONES/ENROQUE.png" ,0,0,160,90};
	ETSIDI::Sprite IJM{ "imagen/menu/INSTRUCCIONES/JAQUE MATE.png" ,0,0,160,90 };
	ETSIDI::Sprite IObj{ "imagen/menu/INSTRUCCIONES/OBJETIVO.png" ,0,0,160,90 };
	ETSIDI::Sprite ITab{ "imagen/menu/INSTRUCCIONES/TABLAS.png" ,0,0,160,90 };

	//OPCIONES-Ayuda

	ETSIDI::Sprite Ayuda{ "imagen/menu/AYUDA PIEZAS/AYUDA.png",0,0,160,90};
	ETSIDI::Sprite AyudaAlfil{ "imagen/menu/AYUDA PIEZAS/A_Alfil.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaCaballo{ "imagen/menu/AYUDA PIEZAS/A_Caballo.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaPeon{ "imagen/menu/AYUDA PIEZAS/A_Peon.png" ,0,0,160,90 };
	ETSIDI::Sprite AyudaReina{ "imagen/menu/AYUDA PIEZAS/A_Reina.png",0,0,160,90 };
	ETSIDI::Sprite AyudaRey{ "imagen/menu/AYUDA PIEZAS/A_Rey.png",0,0,160,90 };
	ETSIDI::Sprite AyudaTorre{ "imagen/menu/AYUDA PIEZAS/A_Torre.png" ,0,0,160,90 };
	ETSIDI::Sprite AAlfil{ "imagen/menu/AYUDA PIEZAS/H_Alfil.png" ,0,0,160,90 };
	ETSIDI::Sprite ACaballo{ "imagen/menu/AYUDA PIEZAS/H_Caballo.png",0,0,160,90 };
	ETSIDI::Sprite APeon{ "imagen/menu/AYUDA PIEZAS/H_Peon.png" ,0,0,160,90 };
	ETSIDI::Sprite AReina{ "imagen/menu/AYUDA PIEZAS/H_Reina.png" ,0,0,160,90 };
	ETSIDI::Sprite ARey{ "imagen/menu/AYUDA PIEZAS/H_Rey.png" ,0,0,160,90 };
	ETSIDI::Sprite ATorre{ "imagen/menu/AYUDA PIEZAS/H_Torre.png" ,0,0,160,90 };
	

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
	void setTipoJuego(int x);
	void setColor(int x);
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

	enum  Estado { INICIO, OP, AYUDA, INSTRUCCIONES, MODOJUEGO, BLANCONEGRO_JUG, BLANCONEGRO_IA, JVJ_blanco, JVJ_negro, FIN };
	Estado estado;

	enum Modjuego{M,JUGADOR, IA, a_modojuego};
	Modjuego eleccion;

	enum Color{C, BLANCO, NEGRO, a_color};
	Color col;

	enum Inicio{I, OPCIONES, MODODEJUEGO};
	Inicio menu_inicio;

	enum Opcion{O, AYUD, INSTRUC, a_opcion};
	Opcion  opt;

	enum Help { H, TEXTO };
	Help menu_help;

	enum Instr { INSTR, TEXTO_I};
	Instr menu_inst;
};

