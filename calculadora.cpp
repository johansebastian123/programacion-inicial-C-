#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
	{
		int opcion;
		{
				cout<<"                                DIAS DE LA SEMANA \n";
				cout<<"            		ingrese el numero  (1) para ingresar al lunes \n";
				cout<<"            		ingrese el numero (2) para ingresar al martes \n";
				cout<<"           		ingrese el numero (3) para ingresar al miercoles \n";
				cout<<"           		ingrese el numero (4) para ingresar al jueves \n";
				cout<<"         		ingrese el numero (5) para ingresar al viernes \n";
				cout<<"           		ingrese el numero (6) para ingresar al sabado \n";
				cout<<"                         ingrese el numero (7) para ingresar al domingo \n\n";
				cout<<"                		ingrese el numero de opcion a tratar:   ";
		}
				cin>>opcion;
				switch(opcion)
					{
						case 1: cout<<"					lunes \n\n";
								break;
						case 2: cout<<"					martes \n\n";
						break;
						case 3: cout<<"					miercoles \n\n";
						break;
						case 4: cout<<"					jueves \n\n";
								break;
						case 5: 
							cout<<"					   viernes \n\n";
						break;
						case 8: cout<<"				   sabado \n\n";
						break;
						case 10: cout<<"			   domingo \n\n";
						break;
						default: cout<<"		el numero digitado no esta en el menu de opciones\n\n";
						break;
					}
	}
/*
#include <iostream>
#include <conio.h>
using namespace std;
main()
	{
		int opcion, numero=1,entrada;
		do
		{
			system("cls");
			cout<<"                                   INGRESO A EDIFICIO EL TAUR \n";
			cout<<"                         ingrese el numero  (1) para ingresar al caso uno \n";
			cout<<"                         ingrese el numero (2) para ingresar al caso dos \n";
			cout<<"                        ingrese el numero (4) para ingresar al caso cuatro \n";
			cout<<"                        ingrese el numero (5) para ingresar al caso cinco \n";
			cout<<"                        ingrese el numero (8) para ingresar al caso ocho \n";
			cout<<"                        ingrese el numero (10) para ingresar al caso diez \n\n";
			cout<<"                           ingrese el numero de opcion a tratar:   ";
			cin>>opcion;
			switch(opcion)
				{
					case 1: cout<<"					estoy en uno \n\n";
					break;
					case 2: cout<<"					estoy en dos \n\n";
					break;
					case 4: cout<<"					estoy en cuatro \n\n";
					break;
					case 5: cout<<"					estoy en cinco \n\n";
					break;
					case 8: cout<<"					estoy en ocho \n\n";
					break;
					case 10: cout<<"				estoy en diez \n\n";
					break;
					default: cout<<"					estoy en otro lado\n\n";
					break;
				}
			cout<<"                                 Deseas continuar? ingresa 1\n\n            	                              ";
			cin>>entrada;
		}while(entrada==1);
	}
*/
/*
					do
						{	
							cout<<"voy en:  "<<numero<<endl;
							numero=numero+1;	
						}
					while(numero<=10);	
					cout<<"termine el do  "<<endl;
					numero=1;
					while(numero<=10)
						{
							cout<<"voy en:  "<<numero<<endl;
							numero=numero+1;
						}
						cout<<"el numero da:  "<<opcion*numero<<"\n";					
cout<<"la multiplicacion da:  "<<opcion*numero;
*/
