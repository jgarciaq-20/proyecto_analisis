#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class producto{
	private:
			string nombre;
			float cost_unt;
			int stock;
			string categoria;
			float precio_venta;
		//	char estado;
	public:
		producto(){	precio_venta = 0;	}
		void setprecio_venta(float _precio_venta){	precio_venta = _precio_venta;	}
//		void setnombre(string _nombre){	nombre = _nombre;	}
		void setstock(int _stock){	stock += _stock;	}
//		void setcategoria(string _categoria){	categoria = _categoria;	}
		
		string getnombre()	{  return nombre;  }		
		float getcost_unt()	{  return cost_unt; }
		int getstock()	{  return stock;  }
		string getcategoria()	{  return categoria;  }
		float getprecio_venta()	{  return precio_venta;  }
		producto(string,float,int,string,float);
		void ingre_datos();
		void mostrar_datos();
};

void producto::ingre_datos()
{
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"Ingrese costo unitario: ";
	cin>>cost_unt;
	cout<<"Ingrese el stock: ";
	cin>>stock;
	cout<<"Ingrese la catogaria: ";cin>>categoria;
	cout<<"Ingrese precio d/venta: ";cin>>precio_venta;
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
