#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
	{
		int opcion,numero=1,temporal=0,gato;
		char entrada='s',entrada2='s',caracter;
		double numero1,numero2,raiz,potencia;
		do
		{
			
				system("cls");
				cout<<"                                   INGRESO A EDIFICIO EL TAUR \n";
				cout<<"                        ingrese el numero  (1) para ingresar al caso uno \n";
				cout<<"                        ingrese el numero (2) para ingresar al caso dos \n";
				cout<<"                        ingrese el numero (4) para ingresar al caso cuatro \n";
				cout<<"                        ingrese el numero (5) para ingresar al caso cinco \n";
				cout<<"                        ingrese el numero (8) para ingresar al caso ocho \n";
				cout<<"                        ingrese el numero (10) para ingresar al caso diez \n";
				cout<<"                        ingrese al numero (7)  para ingresar al caso siete \n\n";
				cout<<"                            ingrese el numero de opcion a tratar:   ";
				cin>>opcion;
				switch(opcion)
					{
						case 1: cout<<"					estoy en uno \n\n";
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
						break;
						case 2: cout<<"					estoy en dos \n\n";
						break;
						case 4: cout<<"					estoy en cuatro \n\n";
						break;
						case 5: cout<<"					estoy en cinco \n\n";
								while(numero<=10)
								{
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;
								}
								
								cout<<"termine el while  "<<endl;
								numero=1;
								do
								{	
									cout<<"voy en:  "<<numero<<endl;
									numero=numero+1;	
								}
								while(numero<=10);	
								cout<<"el numero da:  "<<opcion*numero<<"\n";
						break;
						case 7: 
							cout<<"					                  estoy en siete \n\n";
							cout<<"                                    INGRESO A PISO 7\n";
							cout<<"                         digite (1) para ingresar al caso once \n";
							cout<<"                         digite (4) para ingresar al caso once \n";
							cout<<"                         digite (3) para ingresar al caso once \n";
							cout<<"                         digite (11) para ingresar al caso once \n";
							cout<<"                         digite (2) para ingresar al caso once \n";
							cout<<"                         digite (12) para ingresar al caso once \n";
							cout<<"                           ingrese una de las opciones del menu a tratar:   ";
							cin>>opcion;
							switch(opcion)
								{
									case  1:	
										cout<<"					estoy en uno interno \n\n";
										break;
									case  4:	
										cout<<"					estoy en cuatro interno \n\n";
										break;
									case  3:	
										cout<<"					estoy en tres interno \n\n";
										break;
									case  11:
										do
										{
										cout<<"					estoy en once interno  \n\n";
											cout<<"                           INGRESO A OPERCAIONES MATEMATICAS\n";
											cout<<"                         para ingresar a la suma digite  s,S ó + \n";
											cout<<"                         para ingresar a la resta digite  r,R ó - \n";
											cout<<"                         para ingresar a la multiplicacion digite  m,M ó * \n";
											cout<<"                         para ingresar a la division digite  d,D ó / \n";
											cout<<"                         para ingresar a la raiz cuadrada digite  q,Q ó % \n";
											cout<<"                         para ingresar a la potencia digite  p,P ó $ \n";
											cout<<"                       ingrese una de las opciones del menu a tratar:\t   ";
											cin>>caracter;
											
											cout<<"                            ingrese el primer numero\t";
											cin>>numero1;
											
											cout<<"                             ingrese el segundo numero\t";
											cin>>numero2;											
											{
											
											
											switch(caracter)
												{
													case 's':
													case 'S':
													case '+':	
														cout<<"					estoy en la suma \n\n";
														cout<<"                                 el resultado de sumar "<<numero1<<" mas "<<numero2<<" es "<<numero1+numero2<<endl;
														break;
													case 'r':
													case 'R':
													case '-':	
														cout<<"					estoy en la resta \n\n";
														cout<<"                                 el resultado de resta "<<numero1<<" menos "<<numero2<<" es "<<numero1-numero2<<endl;
														break;
													case 'm':
													case 'M':
													case '*':	
														cout<<"					estoy en la multiplicacion \n\n";
														cout<<"                                 el resultado de multiplicar "<<numero1<<" mas "<<numero2<<" es "<<numero1*numero2<<endl;
														break;
													case 'd':
													case 'D':
													case '/':	
														cout<<"					estoy en once division \n\n";
														cout<<"                                 el resultado de dividir "<<numero1<<" dividido "<<numero2<<" es "<<numero1/numero2<<endl;
														break;
													case 'q':
													case 'Q':
													case '%':	
														cout<<"					estoy en la raiz cuadrada de "<<numero1;
														raiz=sqrt(numero1);
														cout<<"   el resultado de la raiz cuadrada de "<<numero1<<"  es "<<raiz<<endl;
														break;
													case 'p':
													case 'P':
													case '$':	
														cout<<"					estoy en la potencia \n\n";
														potencia=pow(numero1,numero2);
														cout<<"                  el resultado de la potencia de"<<numero1<<" a la "<<numero2<<" es: "<<potencia<<endl;
														break;	
													default:
														cout<<"					OPCION EQUIVOCADA\n\n";
														break;
												}
											cout<<"desea continuar en las operaciones? digite s o S \n";
											cin>>entrada2;								
										}
										while((entrada2 == 's') || (entrada2 == 'S'))
										break;
									case 2:
										cout<<"					estoy en dos interno \n\n";
										break;
									case 12:
										cout<<"					estoy en doce interno \n\n";
										break;	
									default:
										cout<<"					OPCION EQUIVOCADA\n\n";
										break;
								}
						break;
						case 8: cout<<"					estoy en ocho \n\n";
						break;
						case 10: cout<<"				estoy en diez \n\n";
						break;
						default: cout<<"					estoy en otro lado\n\n";
						break;
					}
					cout<<"					Desea continuar en el menu principal? ingrese el caracter s o S\n\n";
					cin>>entrada;
	}
					while((entrada =='s')||(entrada =='S'));
}
		
			//	entrada=entrada+1;	
				//cout<<"			   oprime una tecla para continuar     ";
				//getch();
				
			//	temporal=temporal+1;
			//	cout<<"			   usted ha pasado "<<temporal<<" vez (ces)\n";
			//	system("pause");
		
				//cout<<"			   usted paso "<<temporal<<" veces\n";
	
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
