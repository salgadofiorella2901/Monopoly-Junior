//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  * Autores/derechos: Andr�s Romero Hern�ndez
  *                   Andr�s Gutierrez Arc�a.
  */

#pragma once
#include "Librerias.h"
#include "Tarjeta.h"
#include "VectorTarjetasPropiedad.h"


const int tam=34;

class Jugador
{
private:

    string nombre;
	int id;
  	int capital;
    int casas;
    int hoteles;
	VectorTarjetasPropiedad *v;

  public:
  	
  	Jugador();
  	Jugador(string, int, int, int, int);
  	~Jugador();
	void setNombre(string);
	void setId(int);
  	void setCapital(int);
	string getNombre();
	int getId();
  	int getCapital();
	int getCantidadVector();
	void insertarTarjeta(TarjetaPropiedad *);
	TarjetaPropiedad* getTarjeta(int);
	void gotoxy(int,int);
	bool tengoLaPropiedad(int);//recibe una posicion de casilla, busca si tiene tarjeta de esa casilla
	void eliminarTarjeta(int);
	int cuantosTrenes();
    void toString();
};