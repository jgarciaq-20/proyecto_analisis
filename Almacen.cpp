#include "Almacen.h"
	void Almacen::visualizarProductos(){
		
		if(ListaProductos.size()>=0){		
			for(int i=0;i<ListaProductos.size();i++){
			ListaProductos[i] -> mostrar_datos();
			}		
		}
		else{
			cout<<"Aun no hay Productos registrados"<<endl;
		}

	}
	Almacen::Almacen()
	{		
	}
	void Almacen::eliminar_Producto(string _nombre)
	{
		int c=0;
		if(ListaProductos.size()<0)
		{
			cout<<"No hay PRODUCTO";
		}
		else 
		{
			for(int i=0;i<ListaProductos.size();i++)
			{
				if(ListaProductos[i]->getnombre()==_nombre)
				{
					if(i==ListaProductos.size()-1)
					{
						ListaProductos.pop_back();
					}
					else
					{
						swap(ListaProductos[i],ListaProductos[i+1]);
					}
				}
				
			}	
		}
	}

	void Almacen::agregar_Producto(){
		producto *a=new producto;
		a->ingre_datos();
		ListaProductos.push_back(a);
	}
	void Almacen::buscar_Producto(string nombre)
	{
		int i=0,c=0;
		
		if(ListaProductos.size()<=0)
		{
			cout<<"No hay PRODUCTO";
		}
		else
		{
			while (i!=ListaProductos.size()-1)
			{
				if(ListaProductos[i]->getnombre()==nombre)
				{
					cout<<"\nProducto encontrado ";
					c=1;
					break;
				}
				else
				{
					i++;
				}
			}	
		}
		
		if(c==1)
		{
			int cantidad;
			cout<<"ingrese el stock:";cin>>cantidad;
			ListaProductos[i]->setstock(cantidad);
		}
		else
		{
			string s;
			cout<<"\ndeseas Agregar producto: [s] o[n]: ";
			cin>>s;
			if(s=="s")
			{
				cout<<"\nSe va agregar un nuevo producto";
				string nombre;
				float cost_unt;
				int stock;
				string categoria;
				float precio_venta;
				cout<<"\nIngrese nombre: ";
				cin>>nombre;
				cout<<"\nIngrese costo unitario: ";
				cin>>cost_unt;
				cout<<"\nIngrese el stock: ";
				cin>>stock;
				cout<<"\nIngrese la catogaria: ";cin>>categoria;
				cout<<"\nIngrese precio d/venta: ";cin>>precio_venta;
				producto *a=new producto(nombre,cost_unt,stock,categoria,precio_venta);
				ListaProductos.push_back(a);
			}
			
		}
		
	}
		void Almacen::visualizar_proveedor(){
		
		if(ListaProveedor.size()>0){
		cout<<endl<<"cantidad de proveedores: "<<ListaProveedor.size();
		
			for(int i=0;i<ListaProveedor.size();i++){
				ListaProveedor[i] -> mostrar_proveedores();
				cout<<endl;
			}		
		}
		else{
			cout<<"Aun no hay Productos registrados"<<endl;
		}

	}

void Almacen::agregar_proveedores()
{
		proveedor *b=new proveedor;
		b->ingresar_proveedores();
		ListaProveedor.push_back(b);
}
	
void Almacen::busqueda_nombre_empresa(string t)
	{

		proveedor k;
		Almacen a;
		vector<proveedor*>::iterator pr = ListaProveedor.begin();
		
		int i=0, bandera = 1;
		if(ListaProveedor.size()==0)
		{
			cout<<endl<<endl<<"No hay proveedores";
		}
		
		while( pr != ListaProveedor.end()){
			
			if( ListaProveedor[i]-> get_nombre_de_la_empresa() == t)
			{
					cout<<"Se encontro proveedor"<<endl;
					ListaProveedor[i] -> mostrar_proveedores();
					bandera = 1;
				break;
			} 
			
			
			bandera = 0;
			i++;
			pr++;
		}
		if (bandera == 0){
			cout<<endl<<endl<<"Proveedor no encontrado"<<endl;	
		}
	}
