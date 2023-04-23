#include "Usuario.h"
#include <iostream>

Usuario::Usuario() {

	//INICIALIZAR VARIABLES
	estado = INICIO;
	menu_inicio = I;
	opt = O;
	menu_help = H;
	menu_inst = INSTR;
	movs = 0;
	help = 0;
	//texto_ayuda = 0;
	//texto_instrucciones = 0;
	
}

Usuario:: ~Usuario() {}

void Usuario::mouse(int x, int y) {
	//std::cout << x << ',' << y << std::endl;
	if (estado == INICIO) {
		if (x>reshx * 1150 || x< reshx *150  || y> reshy * 518 || y < reshy * 393) { 
			setMenuInicio(0);
		} //sin nada
		else if (x<reshx * 1150 && x> reshx * 150 && y< reshy * 452 && y>reshy * 393) {
			setMenuInicio(1);
		} //modo de juego
		else if (x< reshx * 947 && x>reshx * 339 && y < reshy * 518 && y>reshy * 464) { 
			setMenuInicio(2); 
		}//opciones
	}
	if (estado == OP) {
		if (x > reshx * 1230 || x<reshx * 152 || y>reshy * 531 || y < reshy * 242) {
			setOpciones(0);
		} //sin nada
		else if (x < reshx * 925 && x> reshx*440 && y<reshy * 310 && y>reshy * 242) { 
			setOpciones(1); 
		} //ayuda
		else if (x < reshx * 1230 && x> reshx*152 && y<reshy * 419 && y>reshy * 352) {
			setOpciones(2);
		} //instrucciones
		else if (x < reshx * 920 && x> reshx^x*450 && y<reshy * 531 && y>reshy * 468) {
			setOpciones(3);
		} //atras
	}
	if (estado == AYUDA) {
		if (menu_help == H) {
			if (x > reshx * 890 || x<reshx * 50 || y>reshy * 690 || y < reshy * 153) {
				help = 0;
				
			} //sin nada
			else if (x < reshx * 855 && x>reshx * 460 && y<reshy * 220 && y>reshy * 153) {
				help = 1;
				
			} //torre
			else if (x < reshx * 824 && x>reshx * 482 && y<reshy * 280 && y>reshy * 225) {
				help = 2;
			
			} //peon
			else if (x < reshx * 890 && x>reshx * 420 && y<reshy * 350 && y>reshy * 294) {
				help = 3;
				
			} //caballo
			else if (x < reshx * 790 && x>reshx * 532 && y<reshy * 625 && y>reshy * 355) {
				help = 4;
				
			} //alfil
			else if (x < reshx * 790 && x>reshx * 532 && y<reshy * 496 && y>reshy * 433) {
				help = 5;
				
			} //rey
			else if (x < reshx * 840 && x> reshx * 460 && y<reshy * 580 && y>reshy * 505) {
				help = 6;
			
			} //reina
			else if (x < reshx * 300 && x> reshx * 50 && y<reshy * 690 && y>reshy * 628) {
				help = 7;
				
			} //atras
		}
	}
	if (estado == INSTRUCCIONES) {
		if (x > reshx * 1160 || x<reshx * 40 || y>reshy * 680 || y < reshy * 160) {
			
			movs = 0;
		} //sin nada
		else if (x < reshx * 920 && x>reshx * 382 && y<reshy * 250 && y>reshy * 160) {
			
			movs = 1;
		} //objetivo
		else if (x < reshx * 940 && x>reshx * 360 && y<reshy * 314 && y>reshy * 255) {
			
			movs = 2;

		} //enroque
		else if (x < reshx * 1030 && x>reshx * 270 && y<reshy * 410 && y>reshy * 330) {
			
			movs = 3;
		} //jaquemate
		else if (x < reshx * 1010 && x>reshx * 270 && y<reshy * 480 && y>reshy * 420) {
			
			movs = 4;
		} //coronacion
		else if (x < reshx * 1160 && x>reshx * 140 && y<reshy * 565 && y>reshy * 490) {
			
			movs = 5;
		} //captura al paso
		else if (x < reshx * 870 && x> reshx * 430 && y<reshy * 638 && y>reshy * 567) {
			
			movs = 6;
		} //tablas
		else if (x < reshx * 320 && x> reshx * 40 && y<reshy * 680 && y>reshy * 620) {
			
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
	reshx = x;
	reshy = y;
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
			if (x<reshx * 1150 && x> reshx * 150 && y< reshy * 452 && y>reshy * 393) {

				//JUEGO

			}
			else if (x< reshx * 947 && x>reshx * 339 && y < reshy * 518 && y>reshy * 464) {
				estado = OP;
				return;

			}
		}
	}
	if (estado == OP) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x < reshx * 925 && x> reshx * 440 && y<reshy * 310 && y>reshy * 242) {
				estado = AYUDA;
				return;
			}
			else if (x < reshx * 1230 && x> reshx * 152 && y<reshy * 419 && y>reshy * 352) {
				estado = INSTRUCCIONES;
			}

			else if (x < reshx * 920 && x> reshx ^ x * 450 && y<reshy * 531 && y>reshy * 468) {
				estado = INICIO;
				return;
			}
		}
	}

		if (estado == AYUDA) {
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (menu_help == H) {
					if (x > reshx * 890 || x<reshx * 50 || y>reshy * 690 || y < reshy * 153) {
						help = 0;
						return; //no hay ayuda
					}
					else if (x < reshx * 855 && x>reshx * 460 && y<reshy * 220 && y>reshy * 153) {
						menu_help = TEXTO;
						texto_ayuda = 0;
						return;
						//torre
					}
					else if (x < reshx * 824 && x>reshx * 482 && y<reshy * 280 && y>reshy * 225) {
						menu_help = TEXTO;
						texto_ayuda = 1;
						return;
					}//peon
					else if (x < reshx * 890 && x>reshx * 420 && y<reshy * 350 && y>reshy * 294) {
						menu_help = TEXTO;
						texto_ayuda = 2;
						return;
					}//caballo
					else if (x < reshx * 790 && x>reshx * 532 && y<reshy * 625 && y>reshy * 355) {
						menu_help = TEXTO;
						texto_ayuda = 3;
						return;
					}//alfil
					else if (x < reshx * 790 && x>reshx * 532 && y<reshy * 496 && y>reshy * 433) {
						menu_help = TEXTO;
						texto_ayuda = 4;
						return;
					}//rey
					else if (x < reshx * 840 && x> reshx * 460 && y<reshy * 580 && y>reshy * 505) {
						menu_help = TEXTO;
						texto_ayuda = 5;
						return;
					}//reina

					else if (x < reshx * 300 && x> reshx * 50 && y<reshy * 690 && y>reshy * 628) {
						estado = OP;
						return;
					}
				}
				if (menu_help == TEXTO) {
					if (x<reshx * 320 && x>reshx * 40 && y<reshy * 690 && y>reshy * 620 && (texto_ayuda == 0 || texto_ayuda == 1 || texto_ayuda == 2 || texto_ayuda == 3 || texto_ayuda == 4 || texto_ayuda == 5 || texto_ayuda == 6)) {
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
					if (x > reshx * 1160 || x<reshx * 40 || y>reshy * 680 || y < reshy * 160) {
						movs = 0;
						return; //no hay ayuda

					}
					else if (x < reshx * 920 && x>reshx * 382 && y<reshy * 250 && y>reshy * 160) {
						//texto_ayuda = 0;
						menu_inst = TEXTO_I;  //objetivo
						texto_instrucciones = 0;
					}
					else if (x < reshx * 940 && x>reshx * 360 && y<reshy * 314 && y>reshy * 255) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 1;
					} //enroque

					else if (x < reshx * 1030 && x>reshx * 270 && y<reshy * 410 && y>reshy * 330) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 2;
					} //jaquemate
					else if (x < reshx * 1010 && x>reshx * 270 && y<reshy * 480 && y>reshy * 420) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 3;
					} //coronacion...(ATRAS DCHA)
					else if (x < reshx * 1160 && x>reshx * 140 && y<reshy * 565 && y>reshy * 490) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 4;
					} //captura al paso
					else if (x < reshx * 870 && x> reshx * 430 && y<reshy * 638 && y>reshy * 567) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 5;
					} //tablas

					else if (x < reshx * 320 && x> reshx * 40 && y<reshy * 680 && y>reshy * 620) {
						estado = OP;
						return;
					}

				}
				if (menu_inst == TEXTO_I) {
					if (x<reshx * 320 && x>reshx * 40 && y<reshy * 680 && y>reshy * 620 && (texto_instrucciones == 0 || texto_instrucciones == 1 || texto_instrucciones == 2 || texto_instrucciones == 4 || texto_instrucciones == 5)) {
						menu_inst = INSTR;
						return;
					}
					else if (x<reshx * 1255 && x>reshx * 970 && y<reshy * 680 && y>reshy * 630 && texto_instrucciones == 3) {
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