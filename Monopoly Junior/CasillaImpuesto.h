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

class CasillaImpuesto:public Casilla
{
	protected:
		string titulo;
		int monto;
	public:
		CasillaImpuesto();
		CasillaImpuesto(string, int);
		~CasillaImpuesto();
		void setTitulo(string);
		string getTitulo();
		void setMonto(int);
		int getMonto();
		void toString(int,int);
};