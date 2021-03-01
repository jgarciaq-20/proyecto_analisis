#include <iostream>
#include <conio.h>
#include "producto.h"
#include "Almacenero.h"
#include "almacen.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
	int j = 0;
	int r;
	string e;
		Almacen a;
	proveedor p[100];
	


		
	do{
		cout<<"\tGestionar Proveedores";
	cout<<endl<<"---------------------------------";
	cout<<endl<<"1.Agregar Proveedor";
	cout<<endl<<"2.Buscar Proveedores";
	cout<<endl<<"3.Mostrar Proveedores";
	cout<<endl<<endl<<"Su opcion es: ";cin>>r;

	switch(r)
	{
		
		case 1:
			cout<<endl;
			p[j].ingresar_proveedores();
			a.agregar_proveedores(&p[j]);
			j++;	
		break;
		
		case 2:
			cout<<endl<<endl<<"ingrese el nombre de la empresa del proveedor a encontrar: ";cin>>e;
			a.busqueda_nombre_empresa(e);
		break;	
		
		case 3:
			cout<<endl<<"\tVisualizando Proveedores"<<endl;
		
			a.visualizar_proveedor();
			
		break;
	}
	
	
	cout<<endl<<"\tDesea seguir en el sistema? (SI=1/NO=0): ";cin>>r;
	cout<<endl<<endl;
		}while(r==1);
	
	
	return 0;
}	

