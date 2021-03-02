#ifndef ALMACENERO_H
#define ALMACENERO_H
#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
#include"Almacen.h"
using namespace std;
class almacenero
{
	private:
		string DNI;
		string Nombre;
	public:
		almacenero();
		almacenero(string,string);
		void mostrar();
		void actualizar(Almacen &);
		void visualizar(Almacen &);
		void reporte_inventario(){
};

#endif
