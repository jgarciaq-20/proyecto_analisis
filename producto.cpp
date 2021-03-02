#include "producto.h"
producto::producto()
{
		precio_venta = 0;	
}
void producto::ingre_datos()
{
	fflush(stdin);
	cout<<"\nIngrese nombre: ";
	cin>>nombre;
	cout<<"\nIngrese costo unitario: ";
	cin>>cost_unt;
	cout<<"\nIngrese el stock: ";
	cin>>stock;
	cout<<"\nIngrese la catogaria: ";cin>>categoria;
	cout<<"\nIngrese precio d/venta: ";cin>>precio_venta;
//	cout<<"\nIngrese el estada: ";cin>>estado;
}
producto::producto(string _nombre,float _cost_un,int _stock,string _categoria,float _precio_venta)
{
	nombre=_nombre;
	cost_unt=_cost_un;
	stock=_stock;
	categoria=_categoria;
	precio_venta=_precio_venta;
}
void producto::mostrar_datos()
{
	cout<<"Nombre: "<<nombre;
	cout<<endl<<"Costo Unitario: "<<cost_unt;
	cout<<endl<<"Stock: "<<stock;
	cout<<endl<<"Categoria: "<<categoria;
	cout<<endl<<"Precio d/venta: "<<precio_venta<<endl<<endl;
//	cout<<endl<<estado;
}
