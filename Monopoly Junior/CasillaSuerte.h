//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  *  Autores/derechos: Andr�s Romero Hern�ndez
  *                    Andr�s Gutierrez Arc�a.
  */

/*
	*Casillas para tarjetas del tipo suerte.
*/

#pragma once
#include"Librerias.h"
#include"Casilla.h"
#include"TarjetaSuerte.h"

class CasillaSuerte:public Casilla
{
private:
	//TarjetaSuerte *ts;

public:
	CasillaSuerte(/*TarjetaSuerte **/);
	~CasillaSuerte();
	//string muestraMensaje(); //Muestra el mensaje de la carta de la suerte tomada de la pila.
	void toString(int,int);
};