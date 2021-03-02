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
		void actualizar(Almacen &p);
		void visualizar(Almacen &P);
		void crearP(Almacen &p);
};

#endif
