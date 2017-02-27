//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  *  Autores/derechos: Andr�s Romero Hern�ndez
  *                    Andr�s Gutierrez Arc�a.
  */

#pragma once
#include "Librerias.h"
#include "TarjetaSuerte.h"

class NodoMazo
{
private:
	TarjetaSuerte * t;
	NodoMazo * sig;
public:
   NodoMazo(TarjetaSuerte *, NodoMazo*);
   ~NodoMazo();
   void setTarjeta(TarjetaSuerte*);
   TarjetaSuerte *getTarjeta();
   void setSig(NodoMazo*);
   NodoMazo* getSig();
   void toStringNodo();
};