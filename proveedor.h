#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;

class proveedor{
	private:
		char nombre_completo[40];
		char telefono[12];
		char nombre_de_la_empresa[30];
		char categoria[15];
	public:
		proveedor();
		proveedor(char *,char *,char *,char *);
		void ingresar_proveedores();
		void mostrar_proveedores();
		string get_nombre_de_la_empresa();
}; 

#endif

