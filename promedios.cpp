#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	string nombre;
	int opcion,opcion1,entrada,n1,n2,n3,a,b;
	do 
	{
	system("cls");
	cout<<"                  PROMEDIOS DE UN ESTUDIANTE  \n";
	cout<<"ingrese el nombre del estudiante\t";
	cin>>nombre;
	cout<<"\ningrese la primera nota del estudiante\t";
	cin>>n1;
	cout<<"\ningrese la segunda nota del estudiante\t";
	cin>>n2;
	cout<<"\ningrese tercer nota del estudiante\t";
	cin>>n3;			
	cout<<"\n            ingrese el numero (1) para ingresar a las opciones el menu\n";
	cout<<"                ingrese el numero de la opcion a tratar \t";
	cin>>opcion;	
	switch(opcion)
	{
		case 1: cout<<"\n                    ingresaste al menu de promedios\n";
		cout<<"              ingrese el numero (1) para ver el promedio de las notas \n";
		cout<<"           ingrese el numero (2) para ver si aprueba o reprueba segun promedio\n"
		cout<<"  ingrese el numero (3) para ver si aprueba o reprueba el estudiante"<<nombre<<"segun promedio\n"; 
		cout<<"\n             digite del 1 al 3 para elegir la opcion a tratar el promedio \n";			
		
	cin>>opcion1;
			switch (opcion1) 	
		{
			case 1: cout<<"\n             PROMEDIO DE LAS NOTAS\n ";
			a=n1+n2+n3;	
			b=a/3		
			cout<<"el promedio de las notas es: "<<b;
			break;
			case 2: cout<<"APRUEBA O REPRUEBA SEGUN PROMEDIO\n";
			if(b<60)
			{
				cout<<"el estudiante reprobo con un promedio de "<<b<<\n";
			}
			else
			{
				cout
			}
			break;
			case 3: cout<<"APRUEBA O REPRUEBA EL ESTUDIANTE"<<nombre<<"SEGUN PROMEDIO\n";
			cout<<"cuantos anos tiene usted\n";
			
			break;
			default: cout<<"el numero de dia ingresado no esta en las opciones \n";
			break;
		}
			break;
			default: cout<<"en otro lado\n";
			break;	
		}
		cout<<"\ndeseas continuar ingresa 1\n";
	cin>>entrada;
	}while(entrada==1);
