#include <iostream>
#include <conio.h>
#include "producto.h"
#include "Almacenero.h"
#include "Almacen.h"
#include "proveedor.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
{
	Almacen a;
	almacenero b("Xavier","71215344");
	proveedor c("gaseosa","lito","efe","psps");
	a.agregar_proveedores();
	a.visualizar_proveedor();
}	

