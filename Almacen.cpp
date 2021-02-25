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

	void Almacen::agregar_Producto(producto *product){
		ListaProductos.push_back(product);
	}
	void Almacen::buscar_Producto(string nombre)
	{
		int i=0,c=0;
		producto *a;
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
			cout<<"\nSe va agregar un nuevo producto";
			a->ingre_datos();
			ListaProductos.push_back(a);
		}
		
	}
