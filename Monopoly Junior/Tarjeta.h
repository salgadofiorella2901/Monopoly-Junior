//Universidad Nacional De Costa Rica
/*  Proyecto #2 de Programaci�n 1
  *  Versi�n 1.0
  *  Fecha:
  * Autores/derechos: Andr�s Romero Hern�ndez
  *                   Andr�s Gutierrez Arc�a.
  */

/*
	*Clase base de objetos tipo tarjeta (Propiedades y suerte).
*/
#pragma once


class Tarjeta
{
protected:
	int renta;
	
public:
	Tarjeta();
	Tarjeta(int);
	~Tarjeta();
	void setRenta(int);
	int getRenta();
	virtual void toString(int, int)=0;
};