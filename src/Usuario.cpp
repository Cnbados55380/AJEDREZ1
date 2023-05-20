#include "Usuario.h"
#include <iostream>
#include "freeglut.h"
Usuario::Usuario() {

	//INICIALIZAR VARIABLES
	estado = INICIO;
	menu_inicio = I;
	opt = O;
	eleccion = M;
	col = C;
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
		if (x > shapx * 1030 || x< shapx * 280 || y> shapy * 500 || y < shapy * 240) {
			setMenuInicio(0);
		} //sin nada

		else if (x<shapx * 1030 && x> shapx * 280 && y< shapy * 372 && y>shapy * 240) {
			setMenuInicio(1);
		} //modo de juego
		else if (x< shapx * 890 && x>shapx * 400 && y < shapy * 500 && y>shapy * 372) {
			setMenuInicio(2);
		}//opciones
	}
	if (estado == MODOJUEGO) {
		if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
			setTipoJuego(3);
		}//atras
		else if (x > shapx * 1100 || x<shapx * 200 || y>shapy * 433 || y < shapy * 210) {

			setTipoJuego(0);
		}//nada
		else if (x > shapx * 200 && x<shapx * 1100 && y>shapy * 210 && y < shapy * 318) {

			setTipoJuego(1);
		}//jugvsjug
		else if (x > shapx * 275 && x<shapx * 1010 && y>shapy * 318 && y < shapy * 433) {

			setTipoJuego(2);
		} //jugvsia

	}
	if (estado == OP) {
		if (x > shapx * 1230 || x<shapx * 152 || y>shapy * 584 || y < shapy * 98) {
			setOpciones(0);
		} //sin nada

		if (x < shapx * 1000 && x> shapx * 304 && y<shapy * 230 && y>shapy * 98) {
			setOpciones(1);
		} //ayuda
		else if (x < shapx * 1230 && x> shapx * 152 && y<shapy * 460 && y>shapy * 230) {
			setOpciones(2);
		} //instrucciones
		else if (x < shapx * 875 && x> shapx * 450 && y<shapy * 630 && y>shapy * 465) {
			setOpciones(3);
		} //atras

	}

	if (estado == BLANCONEGRO_JUG) {
		if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
			setColor(3);
		}//atras
		else if (x > shapx * 1110 || x<shapx * 120 || y>shapy * 450 || y < shapy * 310) {

			setColor(0);
		}//nada
		else if (x > shapx * 120 && x<shapx * 575 && y>shapy * 310 && y < shapy * 450) {

			setColor(1);
		}//BLANCO
		else if (x > shapx * 700 && x<shapx * 1110 && y>shapy * 310 && y < shapy * 450) {

			setColor(2);
		} //NEGRO
	}
	if (estado == BLANCONEGRO_IA) {
		if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
			setColor(3);
		}//atras
		else if (x > shapx * 1110 || x<shapx * 120 || y>shapy * 450 || y < shapy * 310) {

			setColor(0);
		}//nada
		else if (x > shapx * 120 && x<shapx * 575 && y>shapy * 310 && y < shapy * 450) {

			setColor(1);
		}//BLANCO
		else if (x > shapx * 700 && x<shapx * 1110 && y>shapy * 310 && y < shapy * 450) {

			setColor(2);
		} //NEGRO
	}

	
	if (estado == AYUDA) {
		if (menu_help == H) {
			if (x < shapx * 300 && x> shapx * 0 && y<shapy * 710 && y>shapy * 640) {
				help = 7;
			}//atras
			else if (x > shapx * 778 || x<shapx * 462 || y>shapy * 626 || y < shapy * 173) {
				help = 0;

			} //sin nada
			else if (x < shapx * 760 && x>shapx * 492 && y<shapy * 275 && y>shapy * 173) {
				help = 1;

			} //torre
			else if (x < shapx * 731 && x>shapx * 506 && y<shapy * 360 && y>shapy * 275) {
				help = 2;

			} //peon
			else if (x < shapx * 778 && x>shapx * 462 && y<shapy * 450 && y>shapy * 360) {
				help = 3;


			} //caballo
			else if (x < shapx * 712 && x>shapx * 538 && y<shapy * 553 && y>shapy * 450) {
				help = 4;

			} //alfil
			else if (x < shapx * 715 && x>shapx * 532 && y<shapy * 620 && y>shapy * 553) {
				help = 5;

			} //rey
			else if (x < shapx * 747 && x> shapx * 490 && y<shapy * 730 && y>shapy * 620) {
				help = 6;

			} //reina
		}
	}
	if (estado == INSTRUCCIONES) {
		if (menu_inst == INSTR) {
	
			if (x > shapx * 1160 || x<shapx * 140 || y>shapy * 710 || y < shapy * 160) {

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
			else if (x < shapx * 870 && x> shapx * 430 && y<shapy * 645 && y>shapy * 567) {

				movs = 6;
			} //tablas
			else if (x < shapx * 781 && x> shapx * 520 && y<shapy * 750 && y>shapy * 645) {

				movs = 7;
			} //atras
		}
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

void Usuario::setTipoJuego(int x) {
	if (x == 0) eleccion = M;
	if (x == 1) eleccion = JUGADOR;
	if (x == 2) eleccion = IA;
	if (x == 3) eleccion = a_modojuego;
}

void Usuario::setColor(int x) {
	if (x == 0) col = C;
	if (x == 1) col = BLANCO;
	if (x == 2) col = NEGRO;
	if (x == 3) col = a_color;
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
			if (x<shapx * 1030 && x> shapx * 280 && y< shapy * 372 && y>shapy * 240) {

				estado = MODOJUEGO;
				return;
			}
			else if (x< shapx * 890 && x>shapx * 400 && y < shapy * 550 && y>shapy * 372) {
				estado = OP;

			}
		}
	}

	if (estado == MODOJUEGO) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x > shapx * 200 && x<shapx * 1100 && y>shapy * 210 && y < shapy * 318) {
				estado = BLANCONEGRO_JUG;
				return;
			}
			else if (x > shapx * 275 && x<shapx * 1010 && y>shapy * 318 && y < shapy * 433) {
				estado = BLANCONEGRO_IA;
				return;
			}
			else if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
				estado = INICIO;
				return;
			}

		}
	}

	if (estado == BLANCONEGRO_JUG) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x > shapx * 120 && x<shapx * 575 && y>shapy * 310 && y < shapy * 450) {
				estado = JVJ_blanco;
				return;
			}//blanco
			else if (x > shapx * 700 && x<shapx * 1110 && y>shapy * 310 && y < shapy * 450) {
				estado = JVJ_negro;
				return;
			}//negro
			else if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
				estado = MODOJUEGO;
				return;
			}
		}
	}

	if (estado == BLANCONEGRO_IA) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x > shapx * 120 && x<shapx * 575 && y>shapy * 310 && y < shapy * 450) {
				estado = JVJ_blanco;
				return;
			}//blanco
			else if (x > shapx * 700 && x<shapx * 1110 && y>shapy * 310 && y < shapy * 450) {
				estado = JVJ_negro;
				return;
			}//negro
			else if (x > shapx * 10 && x<shapx * 210 && y>shapy * 610 && y < shapy * 750) {
				estado = MODOJUEGO;
				return;
			}
		}
	}
	

	
	if (estado == OP) {
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if (x < shapx * 1000 && x> shapx * 304 && y<shapy * 230 && y>shapy * 98) {

				estado = AYUDA;
				return;
				//menu_help = H;
				
			}
			else if (x < shapx * 1230 && x> shapx * 152 && y<shapy * 460 && y>shapy * 230) {

				estado = INSTRUCCIONES;
				return;
				//menu_inst = INSTR;
			}
			else if (x < shapx * 875 && x> shapx * 450 && y<shapy * 630 && y>shapy * 465) {

				estado = INICIO;
				return;
			}
		}
	}
	
		if (estado == AYUDA) {
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			{
				if (menu_help == H) {

					if (x < shapx * 300 && x> shapx * 0 && y<shapy * 710 && y>shapy * 640) {
						estado = OP;
						return;
					}
					if (x > shapx * 778 || x<shapx * 462 || y>shapy * 730 || y < shapy * 173) {
						help = 0;
						return; //no hay ayuda
					}
					else if (x < shapx * 760 && x>shapx * 492 && y<shapy * 275 && y>shapy * 173) {
						menu_help = TEXTO;
						texto_ayuda = 0;
						return; //torre
					}
					else if (x < shapx * 731 && x>shapx * 506 && y<shapy * 360 && y>shapy * 275) {
						menu_help = TEXTO;
						texto_ayuda = 1;
						return;
					}//peon
					else if (x < shapx * 778 && x>shapx * 462 && y<shapy * 450 && y>shapy * 360) {
						menu_help = TEXTO;
						texto_ayuda = 2;
						return; //caballo
					}
					else if (x < shapx * 712 && x>shapx * 538 && y<shapy * 553 && y>shapy * 450) {
						menu_help = TEXTO;
						texto_ayuda = 3;
						return; //alfil
					}
					else if (x < shapx * 715 && x>shapx * 532 && y<shapy * 620 && y>shapy * 553) {
						menu_help = TEXTO;
						texto_ayuda = 4;
						return;
					}//rey
					else if (x < shapx * 747 && x> shapx * 490 && y<shapy * 730 && y>shapy * 620) {
						menu_help = TEXTO;
						texto_ayuda = 5;
						return;
					}//reina
				}			
				if (menu_help == TEXTO) {
					if (x<shapx * 300 && x>shapx * 0 && y<shapy * 740 && y>shapy * 650 && (texto_ayuda == 0 || texto_ayuda == 1 || texto_ayuda == 2 || texto_ayuda == 3 || texto_ayuda == 4 || texto_ayuda == 5 || texto_ayuda == 6)) {
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
					
					if (x > shapx * 1160 || x<shapx * 140 || y>shapy * 710 || y < shapy * 160) {
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
					} //cor
					else if (x < shapx * 1160 && x>shapx * 140 && y<shapy * 565 && y>shapy * 490) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 4;
					} //captura al paso
					else if (x < shapx * 870 && x> shapx * 430 && y<shapy * 645 && y>shapy * 567) {
						menu_inst = TEXTO_I;
						texto_instrucciones = 5;
					} //tablas
					else if (x < shapx * 781 && x> shapx * 520 && y<shapy * 750 && y>shapy * 645) {
						estado = OP;
						return;
					}

				}
				if (menu_inst == TEXTO_I) {
					if (x<shapx * 230 && x>shapx * 50 && y<shapy * 760 && y>shapy * 650 && (texto_instrucciones == 0 || texto_instrucciones == 1 || texto_instrucciones == 2 || texto_instrucciones == 3 || texto_instrucciones == 4 || texto_instrucciones == 5)) {
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
				menuModoJuego.draw();
				//ETSIDI::Sprite menuOpciones{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_Opciones.png" ,0,0,2,2 };
			case MODODEJUEGO:
				menuOpciones.draw();
				//ETSIDI::Sprite menuModoJuego{ "C:/Users/aleja/OneDrive/Escritorio/C UNIVERSIDAD/tema4inicial_VS19x64/image/menu/M_ModoJuego.png" ,0,0,2,2 };

			}
		}

		if (estado == MODOJUEGO) {
			switch (eleccion) {
			case M:
				ModoJuego.draw();
			case JUGADOR:
				M_Jugador.draw();
			case IA:
				M_IA.draw();
			case a_modojuego:
				ModoJuego.draw();
			}
		}

		if (estado == BLANCONEGRO_JUG || estado==BLANCONEGRO_IA) {
			switch (col) {
			case C:
				JugJug.draw();
			case BLANCO:
				M_JugBlanco.draw();
			case NEGRO:
				M_JugNegro.draw();
			case a_color:
				JugJug.draw();
			}
		}
		if (estado == JVJ_blanco || estado == JVJ_negro) {
			tablero.piezasTablero();
			tablero.dibuja();
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