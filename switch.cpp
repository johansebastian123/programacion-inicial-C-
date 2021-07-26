#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	string nombre;
	int opcion,opcion1,entrada,n1,n2,n3,a;
	cout<<"                          DIAS DE LA SEMANA  \n";
	cout<<"\n    ingrese el numero (1) para ingresar a los dias de la semana";
	cout<<"\n                ingrese el numero de la opcion a tratar \t";
	cin>>opcion;	
	switch(opcion)
	{
		a=n1+n2+n3;
		case 1: cout<<"\n                    ingresaste a dias de la semana\n";
		cout<<"              ingrese el numero (1) ingresar al lunes \n"; 
		cout<<"              ingrese el numero (2) ingresar al martes \n";
		cout<<"              ingrese el numero (3) ingresar al miercoles \n";
		cout<<"              ingrese el numero (4) ingresar al jueves \n";
		cout<<"              ingrese el numero (5) ingresar al viernes \n";
		cout<<"              ingrese el numero (6) ingresar al sabado \n";
		cout<<"              ingrese el numero (7) ingresar al domingo \n";
		cout<<"\n         digite del 1 al 7 para elegir el dia de la semana\t";			
		
	cin>>opcion1;
			switch (opcion1) 	
		{
			case 1: cout<<"\n         LUNES\n ";
			break;
			case 2: cout<<"\n         MARTES\n";
			break;
			case 3: cout<<"\n       MIERCOLES\n";
			break;
			case 4: cout<<"\n        JUEVES\n ";
			break;
			case 5: cout<<"\n        VIERNES\n";
			break;
			case 6: cout<<"\n         SABADO\n";
			break;
			case 7: cout<<"\n          DOMINGO\n ";
			break;
			default: cout<<"el numero de dia ingresado no esta en las opciones \n";
			break;
		}
			break;
			default: cout<<"en otro lado\n";
			break;	
		}
}

