#include "proveedor.h"
proveedor::proveedor()
{
}
proveedor::proveedor(char *_nombre_completo, char *_telefono, char *_nombre_de_la_empresa,char *_categoria)
{
	strcpy(nombre_completo,_nombre_completo);
	strcpy(telefono,_telefono);
	strcpy(nombre_de_la_empresa,_nombre_de_la_empresa);
	strcpy(categoria,_categoria);
}
void proveedor::ingresar_proveedores()
{
	fflush(stdin);
	cout<<"ingresar el nombre completo: ";
	cin.getline(nombre_completo,40);
	cout<<endl<<"ingresar el telefono: ";
	cin.getline(telefono,14);
	cout<<"ingresar el nombre de la empresa del proveedor: ";
	cin>>nombre_de_la_empresa;
	cout<<"ingresar la categoria del proveedor: ";
	cin>>categoria;
}
void proveedor::mostrar_proveedores()
{
	cout<<endl<<"nombre completo: "<<nombre_completo;
	cout<<endl<<"ingresar el telefono: "<<telefono;
	cout<<endl<<"nombre de la empresa del proveedor: "<<nombre_de_la_empresa;
	cout<<endl<<"ingresar la categoria del proveedor: "<<categoria;
}
string proveedor::get_nombre_de_la_empresa()
{
	return nombre_de_la_empresa;
}

	











