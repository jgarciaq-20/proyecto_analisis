#include <iostream>
#include <conio.h>
#include "producto.h"
#include "Almacenero.h"
#include "almacen.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 
{
	
	proveedor p[2];
	Almacen a;
	int j = 0;
	do{
		p[j].ingresar_proveedores();
		a.agregar_proveedores(&p[j]);
		j++;	
	}while(j<2);
//	a.visualizar_proveedor();
	
	string e;
	system("cls");
	cout<<endl<<endl<<"ingrese el nombre de la empresa del proveedor: ";cin>>e;
	a.busqueda_nombre_empresa(e);
	cout<<endl;
}
