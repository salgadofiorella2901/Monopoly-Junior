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

class CasillaTren:public CasillaPropiedad
{
	public:
		CasillaTren(string, bool, int);
		~CasillaTren();	
		void toString(int,int);
};