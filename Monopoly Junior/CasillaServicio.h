//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  *  Autores/derechos: Andr�s Romero Hern�ndez
  *                    Andr�s Gutierrez Arc�a.
  */

#pragma once
#include "Librerias.h"
#include "CasillaPropiedad.h"
#include "Casilla.h"

class CasillaServicio:public CasillaPropiedad
{
	private:
		string tipo;
	public:
		CasillaServicio();
		CasillaServicio(string, string, bool, int);
		~CasillaServicio();
		void setTipo(string);
		string getTipo();
		void toString(int,int);
};