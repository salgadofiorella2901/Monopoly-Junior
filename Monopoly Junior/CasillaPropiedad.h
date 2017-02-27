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

class CasillaPropiedad:  public Casilla //virtual: para que las clases derivadas puedan usar metodos de la clase 'abuela'
{
	protected:
		string titulo;
		bool duenno;
		int monto;//Monto mostrado en el tablero, y precio base a pagar por su compra.
		bool hipotecada;
	public:
		CasillaPropiedad();
		CasillaPropiedad(string, bool, int,char);
		~CasillaPropiedad();
		void setTitulo(string );
		string getTitulo();
		void setDuenno(bool);
		bool getDuenno();
		void setMonto(int);
		int getMonto();
		void setHipoteca(bool);
		bool getHipoteca();
};