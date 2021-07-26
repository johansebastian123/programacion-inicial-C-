#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int opcion;
	{
	cout<<"                    ADMINISTRACION DE EDIFICIO LA SOLA  \n";
	cout<<"            para activar la energia de uno de los pisos digita \n";
	cout<<"            ingrese el numero (1) para ingresa al numero uno \n";
	cout<<"            ingrese el numero (2) para ingresa al numero dos \n";
	cout<<"            ingrese el numero (3) para ingresa al numero tres \n";
	cout<<"            ingrese el numero (4) para ingresa al numero cuatro \n";
	cout<<"            ingrese el numero (5) para ingresa al numero cinco \n";
	cout<<"            ingrese el numero (6) para ingresa al numero seis \n";;
	cout<<"            ingrese el numero (7) para ingresa al numero siete \n";
	cout<<"            ingrese el numero (8) para ingresa al numero ocho \n";
	cout<<"            ingrese el numero (9) para ingresa al numero nueve \n";;
	cout<<"            ingrese el numero (10) para ingresa al numero diez \n";
	cout<<"                  ingrese el numero de la opcion a tratar ";
		cin>>opcion;
		switch(opcion)
			{
				case 1: cout<<opcion<<" = UNO \n";
				break;
				case 2: cout<<opcion<<" = DOS \n";
				break;
				case 3: cout<<opcion<<" = TRES \n";
				break;
				case 4: cout<<opcion<<" = CUATRO \n";
				break;
				case 5: cout<<opcion<<" = CINCO \n";
				break;
				case 6: cout<<opcion<<" = SEIS \n";
				break;			
				case 7: cout<<opcion<<" = SIETE \n";
				break;
				case 8: cout<<opcion<<" = OCHO \n";
				break;
				case 9: cout<<opcion<<" = NUEVE \n";
				break;
				case 10: cout<<opcion<<" = DIEZ \n";
				break;
				default: cout<<"el numero ingresado no se encuentra entre las opciones";
			}

	}
}
