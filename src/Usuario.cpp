#include "Usuario.h"
#include <iostream>
#include "freeglut.h"
Usuario::Usuario() {

	//INICIALIZAR VARIABLES
	estado = INICIO;
	menu_inicio = I;
	opt = O;
	menu_help = H;
	menu_inst = INSTR;
	movs = 0;
	help = 0;
	texto_ayuda = 0;
	texto_instrucciones = 0;
	
}

Usuario:: ~Usuario() {}

void Usuario::mouse(int x, int y) {
	//std::cout << x << ',' << y << std::endl;
	if (estado == INICIO) {
		/*if (x > shapx * 1024 || x< shapx * 277 || y> shapy * 480 || y < shapy * 260) {
			setMenuInicio(0);
		} //sin nada
		*/
		if (x<shapx * 1024 && x> shapx * 277 && y< shapy * 360 && y>shapy * 260) {
			setMenuInicio(1);
		} //modo de juego
		else if (x< shapx * 852 && x>shapx * 420 && y < shapy * 480 && y>shapy * 385) {
			setMenuInicio(2);
		}//opciones
		else {
			setMenuInicio(0);
		}
	}
	if (estado == OP) {
		/*if (x > shapx * 1230 || x<shapx * 152 || y>shapy * 584 || y < shapy * 98) {
			setOpciones(0);
		} //sin nada
		*/
		if (x < shapx * 1000 && x> shapx*304 && y<shapy * 98 && y>shapy * 230) {
			setOpciones(1);
		} //ayuda
		else if (x < shapx * 1230 && x> shapx*152 && y<shapy * 460 && y>shapy * 230) {
			setOpciones(2);
		} //instrucciones
		else if (x < shapx * 875 && x> shapx * 450 && y<shapy * 584 && y>shapy * 465) {
			setOpciones(3);
		} //atras
		else {
			setOpciones(0);
		}
	}
	if (estado == AYUDA) {
		if (menu_help == H) {
			if (x > shapx * 778 || x<shapx * 462 || y>shapy * 626 || y < shapy * 173) {
				help = 0;
				
			} //sin nada
			else if (x < shapx * 760 && x>shapx * 492 && y<shapy * 256 && y>shapy * 173) {
				help = 1;

			} //torre
			else if (x < shapx * 731 && x>shapx * 506 && y<shapy * 325 && y>shapy * 256) {
				help = 2;

			} //peon
			else if (x < shapx * 778 && x>shapx * 462 && y<shapy * 402 && y>shapy * 325) {
				help = 3;

				
			} //caballo
			else if (x < shapx * 712 && x>shapx * 538 && y<shapy * 480 && y>shapy * 402) {
				help = 4;
				
			} //alfil
			else if (x < shapx * 715 && x>shapx * 532 && y<shapy * 553 && y>shapy * 480) {
				help = 5;

			} //rey
			else if (x < shapx * 747 && x> shapx * 490 && y<shapy * 626 && y>shapy * 553) {
				help = 6;

			} //reina
			else if (x < shapx * 300 && x> shapx * 50 && y<shapy * 690 && y>shapy * 628) {
				help = 7;
				
			} //atras
		}
	}
	if (estado == INSTRUCCIONES) {
		if (x > shapx * 1160 || x<shapx * 40 || y>shapy * 680 || y < shapy * 160) {

			movs = 0;
		} //sin nada
		else if (x < shapx * 920 && x>shapx * 382 && y<shapy * 250 && y>shapy * 160) {

			movs = 1;
		} //objetivo
		else if (x < shapx * 940 && x>shapx * 360 && y<shapy * 314 && y>shapy * 255) {

			movs = 2;


		} //enroque
		else if (x < shapx * 1030 && x>shapx * 270 && y<shapy * 410 && y>shapy * 330) {

			movs = 3;
		} //jaquemate
		else if (x < shapx * 1010 && x>shapx * 270 && y<shapy * 480 && y>shapy * 420) {

			movs = 4;
		} //coronacion
		else if (x < shapx * 1160 && x>shapx * 140 && y<shapy * 565 && y>shapy * 490) {

			movs = 5;
		} //captura al paso
		else if (x < shapx * 870 && x> shapx * 430 && y<shapy * 638 && y>shapy * 567) {

			movs = 6;
		} //tablas
		else if (x < shapx * 781 && x> shapx * 520 && y<shapy * 680 && y>shapy * 610) {

			movs = 7;
		} //atras
	}
}

void Usuario::setMenuInicio(int x) {
	if (x == 0) menu_inicio = I;
	if (x == 1) menu_inicio = OPCIONES;
	if (x == 2) menu_inicio = MODODEJUEGO;
}

void Usuario::setOpciones(int x) {
	if (x == 0) opt = O;
	if (x == 1) opt = AYUD;
	if (x == 2) opt = INSTRUC;
	if (x == 3) opt = a_opcion;
}


void Usuario::setReshape(float x, float y) {
	shapx = x;
	shapy = y;
}

int Usuario::getEstado() {
	return estado;
}

int Usuario::getMenuJuego() {
	return menu_inicio;
}

void Usuario::raton(int button, int state, int x, int y) {
	//int screenX = x;
	//int screenY = y;
	// Actualizar las coordenadas del objeto en el juego
			//std:: cout << "Coordenadas del raton en la pantalla: (" << screenX << ", " << screenY << ")" << std:: endl;

	if (estado == INICIO) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x<shapx * 1024 && x> shapx * 277 && y< shapy * 360 && y>shapy * 260) {

				//JUEGO
			}
			else if (x< shapx * 852 && x>shapx * 420 && y < shapy * 480 && y>shapy * 385) {

				glutSetWindow(OP);
				estado = OP;

			}
		}
	}
	if (estado == OP) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x < shapx * 1000 && x> shapx * 304 && y<shapy * 98 && y>shapy * 230) {

				estado = AYUDA;
			}
			else if (x < shapx * 1230 && x> shapx * 152 && y<shapy * 460 && y>shapy * 230) {

				estado = INSTRUCCIONES;
			}
			else if (x < shapx * 875 && x> shapx * 450 && y<shapy * 584 && y>shapy * 460) {

				estado = INICIO;
				return;
			}
		}
	}
		if (estado == AYUDA) {
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (menu_help == H) {
					if (x > shapx * 778 || x<shapx * 462 || y>shapy * 626 || y < shapy * 173) {

						help = 0;
						return; //no hay ayuda
					}
					else if (x < shapx * 760 && x>shapx * 492 && y<shapy * 256 && y>shapy * 173) {

						menu_help = TEXTO;
						texto_ayuda = 0;
						return; //torre
					}
					else if (x < shapx * 731 && x>shapx * 506 && y<shapy * 325 && y>shapy * 256) {

						menu_help = TEXTO;
						texto_ayuda = 1;
						return;
					}//peon
					else if (x < shapx * 778 && x>shapx * 462 && y<shapy * 402 && y>shapy * 325) {

						menu_help = TEXTO;
						texto_ayuda = 2;
						return; //caballo
					}
					else if (x < shapx * 712 && x>shapx * 538 && y<shapy * 480 && y>shapy * 402) {

						menu_help = TEXTO;
						texto_ayuda = 3;
						return; //alfil
					}
					else if (x < shapx * 715 && x>shapx * 532 && y<shapy * 553 && y>shapy * 480) {

						menu_help = TEXTO;
						texto_ayuda = 4;
						return;
					}//rey
					else if (x < shapx * 747 && x> shapx * 490 && y<shapy * 626 && y>shapy * 553) {
						menu_help = TEXTO;
						texto_ayuda = 5;
						return;
					}//reina

					else if (x < shapx * 300 && x> shapx * 50 && y<shapy * 690 && y>shapy * 628) {
						estado = OP;
						return;
					}
				}//atras
				if (menu_help == TEXTO) {
					if (x<shapx * 259 && x>shapx * 50 && y<shapy * 650 && y>shapy * 570 && (texto_ayuda == 0 || texto_ayuda == 1 || texto_ayuda == 2 || texto_ayuda == 3 || texto_ayuda == 4 || texto_ayuda == 5 || texto_ayuda == 6)) {
						menu_help = H;
						return;
					}
				}
			}
		}

		

		if (estado == INSTRUCCIONES) {
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (menu_inst == INSTR) {
					if (x > shapx * 1160 || x<shapx * 40 || y>shapy * 680 || y < shapy * 160) {
						movs = 0;
						return; //no hay ayuda

					}
					else if (x < shapx * 920 && x>shapx * 382 && y<shapy * 250 && y>shapy * 160) {
						//texto_ayuda = 0;
						menu_inst = TEXTO_I;  //objetivo
						texto_instrucciones = 0;
					}
					else if (x < shapx * 940 && x>shapx * 360 && y<shapy * 314 && y>shapy * 255) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 1;
					} //enroque

					else if (x < shapx * 1030 && x>shapx * 270 && y<shapy * 410 && y>shapy * 330) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 2;
					} //jaquemate
					else if (x < shapx * 1010 && x>shapx * 270 && y<shapy * 480 && y>shapy * 420) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 3;
					} //coronacion...(ATRAS DCHA)
					else if (x < shapx * 1160 && x>shapx * 140 && y<shapy * 565 && y>shapy * 490) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 4;
					} //captura al paso
					else if (x < shapx * 870 && x> shapx * 430 && y<shapy * 638 && y>shapy * 567) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 5;
					} //tablas

					else if (x < shapx * 781 && x> shapx * 520 && y<shapy * 680 && y>shapy * 610) {
						estado = OP;
						return;
					}

				}
				if (menu_inst == TEXTO_I) {
					if (x<shapx * 230 && x>shapx * 50 && y<shapy * 660 && y>shapy * 595 && (texto_instrucciones == 0 || texto_instrucciones == 1 || texto_instrucciones == 2 || texto_instrucciones == 3 || texto_instrucciones == 4 || texto_instrucciones == 5)) {
						menu_inst = INSTR;
						return;
					}
				}
			}
		}
	}
	


	void Usuario::dibuja() {
		//pantallaInicio.draw();

		////INICIO
		if (estado == INICIO) {
			//ETSIDI::Sprite pantallaInicio{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/start game.png", 0, 0, 2, 2 };

			switch (menu_inicio) {
			case I:
				menuinicio.draw();
				//ETSIDI::Sprite menuinicio{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/MENU.png",0,0,2,2 };
			case OPCIONES:
				menuOpciones.draw();
				//ETSIDI::Sprite menuOpciones{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_Opciones.png" ,0,0,2,2 };
			case MODODEJUEGO:
				menuModoJuego.draw();
				//ETSIDI::Sprite menuModoJuego{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_ModoJuego.png" ,0,0,2,2 };

			}
		}
		if (estado == OP) {
			switch (opt) {
			case O:
				Opciones.draw();
			case AYUD:
				OpcionesAyud.draw();
			case INSTRUC:
				OpcionesInst.draw();
			case a_opcion:
				OpcionesAtras.draw();
			}
		}
		if (estado == AYUDA) {
			if (menu_help == H) {
				switch (help) {
				case 0:
					Ayuda.draw();
				case 1:
					AyudaTorre.draw();
				case 2:
					AyudaPeon.draw();
				case 3:
					AyudaCaballo.draw();
				case 4:
					AyudaAlfil.draw();
				case 5:
					AyudaRey.draw();
				case 6:
					AyudaReina.draw();
				case 7:
					Ayuda.draw();
				}
			}

			if (menu_help == TEXTO) {
				switch (texto_ayuda)
				{
				case 0:
					ATorre.draw();
				case 1:
					APeon.draw();
				case 2:
					ACaballo.draw();
				case 3:
					AAlfil.draw();
				case 4:
					ARey.draw();
				case 5:
					AReina.draw();



				}
			}
		}
				if (estado == INSTRUCCIONES) {
					if (menu_inst == INSTR) {
						switch (movs) {
						case 0:
							Instrucciones.draw();
						case 1:
							InstruccionesObj.draw();
						case 2:
							InstruccionesEnr.draw();
						case 3:
							InstruccionesJM.draw();
						case 4:
							InstruccionesCor.draw();
						case 5:
							InstruccionesCapP.draw();
						case 6:
							InstruccionesTab.draw();
						case 7:
							Instrucciones.draw();
						}
					}
					if (menu_inst == TEXTO_I) {
						switch (texto_instrucciones) {
						case 0:
							IObj.draw();
						case 1:
							IEnr.draw();
						case 2:
							IJM.draw();
						case 3:
							ICor.draw();
						case 4:
							ICP.draw();
						case 5:
							ITab.draw();
						}

					}
				}
			}