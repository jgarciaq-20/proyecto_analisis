#include <iostream>
#include <conio.h>
#include <string>
#include<string.h>
#include <stdlib.h>
#include "producto.h"
#include "Almacenero.h"
#include "Almacen.h"
#include "proveedor.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string compar_Id(string a,string b)
{
    string tipo="0";
    int i=0,j=0,n=0;
    fstream fe;
    fe.open("id_card.txt",ios::in);
        if (fe.is_open())
        {
            string usu;
            string DNI;
            string tipe;
            while(!fe.eof())
            {
                fe>>usu>>DNI>>tipe;
                if(!fe.eof())
                {
                    if(usu==a&&DNI==b)
                    {
                        tipo=tipe;
                    }
                }
            }
        }
   return tipo;
}
int main()
{		
	int b=1,l=1;
	string us,con,dato="0";
	almacenero a("Tania","71215344");
	Almacen p;
	while(b==1)
	{
		cout<<"\nusuario:";cin>>us;
		cout<<"\ncontrasena:";cin>>con;
		if( compar_Id(us,con)!="0")
		{
			b=0;
			dato=compar_Id(us,con);
		}
		else
		{
			string f;
			cout<<"\nsi deseas salir pon 0:";cin>>f;
			if(f=="0")
			{
				b=0;
			}
		}
	}
	if(dato!="0")
	{
		if(dato=="almacenero")
		{
			while(l==1)
			{
				int s;
				system("cls");
				cout<<"\n-------Almacenero-----";
				cout<<"\n---------MENU---------";
				cout<<"\n1.Actualizar Stock:";
				cout<<"\n2.Agregar producto:";
				cout<<"\n3.Salir:";cin>>s;
				switch(s)
				{
					case 1:
						a.visualizar(p);
						a.actualizar(p);
						break;
					case 2:
						a.crearP(p);
						break;
					case 3:
						l=0;
						break;
				}
			}
		}
	}
	
}	

