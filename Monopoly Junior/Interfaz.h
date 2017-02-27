//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  * Autores/derechos: Andr�s Romero Hern�ndez
  *                   Andr�s Gutierrez Arc�a.
  */

#pragma once
#include"Librerias.h"
#include "Jugador.h"
#include "Tablero.h"

/*
	*Clase encargada de llevar la interfaz a la aplicaci�n.
*/

class Interfaz{

public:
	Interfaz();
	~Interfaz();
	void gotoxy(int,int);// Funcion de sistema para establecer la posicion de pantalla a usar
	void colorear(int);// Funcion para colorear en pantalla.
	void titulo();//Imprime titulo del juego
	void indicaciones();
	void monopolyWorldEditionLogo();
	void musica();
	void menuGeneneral();//Muestra el menu general
	char msjAvanzar();
	void msjCarcel();
	char msjMulta();
	void msjBancaRota();
	void msjGo();
	void limpiarPantalla();
	void interfazDado(int, int, int);
	char comprarPropiedad(int, Jugador*,Tablero*);
	void compraSatisfactoria();
	void yaTienePropiedad();
	void monopolio(int);
	int opcionConstruir(string v[]);
	char opcionesJugador();
	void errorValidacion();
	char terminarJuego();

};