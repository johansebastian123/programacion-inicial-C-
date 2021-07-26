#include <iostream>
using namespace std;
main ()
{
	char nombre;
	int t,r,a,e,s,d,v1=2200,v2=2000,v3=1200;
	
		cout<<"      EMPRESA COMERCIALIZADORA PONCHA\n";
		cout<<"ingrese el nombre del cliente: ";
		cin>>nombre;
		cout<<"\ningrese el tipo de cliente: ";
		cin>>t;
		cout<<"\ningrese la cantidad comprada de escobas: ";
		cin>>e;
		cout<<"\ningrese la cantidad comprada de recogedoras: ";
		cin>>r;
		cout<<"\ningrese la cantidad comprada de aromatizantes: ";
		cin>>a;
		switch(t)
		{
			s=v1+v2+v3;
			d=s*0.05;
			case 1: cout<<"   CLIENTE DE CATEGORIA 1\n";
			cout<<"cliente: "<<nombre;
			cout<<"subtotal a pagar: $"<<s;
			cout<<"descuento: $"<<d;
			cout<<"total a pagar: $"<<s+d;
			break;
		}
}
