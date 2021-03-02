#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
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
		producto();
		void setprecio_venta(float _precio_venta){	precio_venta = _precio_venta;	}
		void setnombre(string _nombre){	nombre = _nombre;	}
		void setstock(int _stock){	stock += _stock;	}
		void setcategoria(string _categoria){	categoria = _categoria;	}
		string getnombre()	{  return nombre;  }		
		float getcost_unt()	{  return cost_unt; }
		int getstock()	{  return stock;  }
		string getcategoria()	{  return categoria;  }
		float getprecio_venta()	{  return precio_venta;  }
		producto(string,float,int,string,float);
		void ingre_datos();
		void mostrar_datos();
};
#endif
