#include "Almacenero.h"
almacenero::almacenero()
{
	string tipo;
    int i=0,j=0,n=0;
    fstream fe;
    fe.open("id_card.txt",ios::in);
        if (fe.is_open())
        {
            string _usu;
            string _DNI;
            string tipe;
            while(!fe.eof())
            {
                fe>>_usu>>_DNI>>tipe;
                if(!fe.eof())
                {
                    if(tipe=="Almacenero")
                    {
                        DNI=_DNI;
                        Nombre=_usu;
                    }
                }
            }
        }
	fe.close();
}
almacenero::almacenero(string a,string b)
{
	Nombre=a;
	DNI=b;
}
void almacenero::mostrar()
{
	cout<<"\nNombre:"<<Nombre;
	cout<<"\nDNI:"<<DNI;
}
void almacenero::visualizar(Almacen &P)
{
	P.visualizarProductos();
}
void almacenero::actualizar(Almacen &p)
{
	string Nombre;
	cout<<"\nNombre:";cin>>Nombre;
	p.buscar_Producto(Nombre);
}
