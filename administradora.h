#ifndef ADMINISTRADORA_H
#define ADMINISTRADORA_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Almacen.h"
using namespace std;
class administradora
{
	private:
		string Nombre;
		string DNI;
	public:
		administradora (string,string);
		void Gestionar_compras(Almacen &);
		void Reporte_mensual(Almacen &);
		void Gestionar_precios(Almacen &);
		void mostrardatos();
		string getNombre() { return Nombre;}
		string getDNI() { return DNI;}	
};

#endif
