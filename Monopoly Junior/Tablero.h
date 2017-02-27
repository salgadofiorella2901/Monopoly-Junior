//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  * Autores/derechos: Andr�s Romero Hern�ndez
  *                   Andr�s Gutierrez Arc�a.
  */
#pragma once
#include"Librerias.h"
#include"Casilla.h"
#include"CasillaSuerte.h"
#include"CasillaSolar.h"
#include"CasillaTren.h"
#include"CasillaImpuesto.h"
#include"CasillaTren.h"
#include"CasillaServicio.h"
#include"CasillaEsquina.h"

class Tablero
{
  private:
  Casilla **t;
  int cant;
  int tam;
  //Jugador *j;
  
  public:
  Tablero(int);//int tama�o
  ~Tablero();
  
  void setTam(int);
  int getTam();
  void setCan(int);
  int getCan();  
  void setCasilla(Casilla*);
  Casilla* getCasilla(int);
  int getPosJugador1();//Recorre el tablero y devuelve la posicion del jugador 1
  int getPosJugador2();//Recorre el tablero y devuelve la posicion del jugador 2
  void colocaFicha(int, int);
  void quitaFicha(int, int);
  void insertarCasilla(Casilla*);
  void insertarCasilla(Casilla*, int);
  void gotoxy(int,int);
  void toString();
  
};