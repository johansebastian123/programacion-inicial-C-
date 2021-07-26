#include <iostream>
using namespace std;
main()
{
	int b,g,s,opcion;
	double v,a,h,c,r=2700,d=1800,t=3500,v1,v2,v3,x,t1,t2,z,y,o,p;
	cout<<"cuantas brochas de cerda desea comprar\t";
	cin>>b;
	cout<<"cuantos rodillos desea comprar\t";
	cin>>g;
	cout<<"cuantos selladores desea comprar\t";
	cin>>s;		
	a=r*b;
	c=d*g;
	h=t*s;
	v1=a*0.20;
	v2=c*0.15;
	t1=a-v1;
	t2=c-v2;
	v3=t*s;
	x=t1*0.7;
	h=t2*0.7;
	z=v3*0.7,
	y=t1-x;
	o=t2-h;
	p=v3-z;
	cout<<"desea pagar a credito? ingrese (1)\n";
	cout<<"desea pagar de contado? ingrese (2)\n";
	cin>>opcion;
	switch(opcion)
	{
		case 1: cout<<"\nel valor de las brochas de cerda es $"<<t1; 
		cout<<"\nel valor de los rodillos es $"<<t2;
		cout<<"\nel valor de los rodillos es $"<<v3;
		cout<<"\nel valor a pagar es de $"<<t1+t2+v3;
		break;
		case 2: cout<<"\nel valor a pagar es de $"<<y+o+p<<" pesos";
		break;
		default: cout<<"\nel numero digitado no se encuentra entre las opciones";
	}
	
}

