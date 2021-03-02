#ifndef ALMACEN_H
#define ALMACEN_H
#include <iostream>
#include <string>
#include <vector>
#include "producto.h"
#include "proveedor.h"
using namespace std;
class Almacen{
	private:
		vector<producto*> ListaProductos;
	//	vector<Factura*> ListaFacturas;
		vector<proveedor*> ListaProveedor;
	public:
		Almacen();
		void visualizarProductos();
		void agregar_Producto();
		void buscar_Producto(string);
		void modificar_precio(string);
		void eliminar_Producto(string);
		void visualizar_proveedor();
		void agregar_proveedores();
		void actualizarProveedor();
		void buscarProveedor(string);
		void busqueda_nombre_empresa(string);
};

#endif
