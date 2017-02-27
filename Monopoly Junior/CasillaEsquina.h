//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  *  Autores/derechos: Andr�s Romero Hern�ndez
  *                    Andr�s Gutierrez Arc�a.
  */

#pragma once
#include "Librerias.h"
#include "Casilla.h"

class CasillaEsquina:public Casilla
{
	protected:
		string titulo;
	public:
		CasillaEsquina();
		CasillaEsquina(string);
		~CasillaEsquina();
		void setTitulo(string);
		string getTitulo();
	    void toString(int,int);
};