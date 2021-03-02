#include "administradora.h"
administradora::administradora(string _Nombre, string _DNI){
	Nombre = _Nombre;
	DNI = _DNI;
}

void administradora::mostrardatos(){
	cout<<Nombre<<endl;
	cout<<DNI<<endl;
}

void administradora::Gestionar_compras(Almacen &compras){
	string name;
	cout<<"Ingrese nombre del producto: ";cin>>name;       //ENLISTAR PRODUCTO
	compras.enlistarproducto(name);
}

void administradora::Reporte_mensual(Almacen &report){
	report.reporte_inventario();
}

void administradora::Gestionar_precios(Almacen &precio){
	string name;
	cout<<"\nIngrese el nombre del producto: ";cin>>name;         //MODIFICAR PRECIO
	precio.modificar_precio(name);
}
