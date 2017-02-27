//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  *  Autores/derechos: Andr�s Romero Hern�ndez
  *                    Andr�s Gutierrez Arc�a.
  */

#pragma once
#include "NodoMazo.h"
#include "Tarjeta.h"
#include "TarjetaSuerte.h"

class MazoSuerte
{
private:
	NodoMazo *inicio;
	NodoMazo * actual; 

public:
	MazoSuerte();
	void insertar(TarjetaSuerte*); //Inserta un elemento en la cima de la pila.
	TarjetaSuerte* sacar(); //Recupera, devuelve y elimina el �ltimo elemento en la cima de la pila.
	void devolver(TarjetaSuerte*); //Regresa el elemento tomado de la pila al final de esta.
    void toString();
	~MazoSuerte();
};