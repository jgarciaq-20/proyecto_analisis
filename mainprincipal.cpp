#include <iostream>
#include <conio.h>
#include "producto.h"
#include "Almacenero.h"
#include "Almacen.h"
#include "proveedor.h"
#include "administradora.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	cout<<"holamundo";
	Almacen a;
	almacenero b("Xavier","71215344");
	proveedor c;
	producto d;	
	b.mostrar();
}	

