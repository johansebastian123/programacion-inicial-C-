#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
	{
		int opcion,numero=1,temporal=0;
		char entrada='s',entrada2='S', caracter;
		double numero1,numero2,resta,resultado,raiz,potencia,suma,suma2,resta1,resta2,multi1,multi2,division,div1,div2,potencia1,potencia2,raiz1;
		do
		{
				system("cls");
				cout<<"                                   		INGRESO A EDIFICIO EL TAUR \n";
				cout<<"                         		ingrese el numero  (1) para ingresar al caso uno \n";
				cout<<"                         		ingrese el numero (2) para ingresar al caso dos \n";
				cout<<"                        		ingrese el numero (4) para ingresar al caso cuatro \n";
				cout<<"                        		ingrese el numero (5) para ingresar al caso cinco \n";
				cout<<"                        		ingrese el numero (8) para ingresar al caso ocho \n";
				cout<<"                        		ingrese el numero (7) para ingresar al caso ocho \n";
				cout<<"                        		ingrese el numero (10) para ingresar al caso diez \n\n";
				cout<<"                           		ingrese el numero de opcion a tratar:   ";
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
							cout<<"					                  		estoy en siete \n\n";
							cout<<"                                   		INGRESO A piso 7 \n";
							cout<<"                         		ingrese el numero  (4) para ingresar al local uno \n";
							cout<<"                         		ingrese el numero (1) para ingresar al local dos \n";
							cout<<"                        		ingrese el numero (3) para ingresar al local cuatro \n";
							cout<<"                        		ingrese el numero (11) para ingresar al local cinco \n";
							cout<<"                        		ingrese el numero (2) para ingresar al local ocho \n";
							cout<<"                        		ingrese el numero (12) para ingresar al local doce \n\n";
							cout<<"                           		ingrese una de las opciones del menu a tratar:   ";
							cin>>opcion;
							switch(opcion)
								{
									case 4:
										cout<<"					estoy en cuatro interno \n\n";
										break;
									case 1:
										cout<<"					estoy en uno interno \n\n";
										break;
									case 3:
										cout<<"					estoy en TRES interno \n\n";
										break;
									case 11:
										do
										{
											cout<<"					Estoy en once interno \n\n";
											cout<<"                        		INGRESO A OPERACIONES MATEMATICAS BASICAS \n";
											cout<<"                         		Para ingresar a la suma digite s,S � + \n";
											cout<<"                         		Para ingresar a la resta digite R,r � - \n";
											cout<<"                        		Para ingresar a la miltiplicacion digite M,m � * \n"; 
											cout<<"                        		Para ingresar a la division digite d,D � / \n"; 
											cout<<"                        		Para ingresar a la raiz cuadrada digite Q,q � % \n"; 
											cout<<"                        		Para ingresar a la potencia digite P,p � $ \n\n"; 
											cout<<"                           		ingrese una de las opciones del menu a tratar:   ";
											cin>>caracter;
										
											switch(caracter)
												{
													case 's':
													case 'S':
													case '+':
														cout<<"					Estoy en la suma \n\n";
														cout<<"        ingrese el primer valor a sumar \t";
														cin>>suma;
														cout<<"        ingrese el segundo valor a sumar \t";
														cin>>suma2;
		cout<<"                                         El resultado de sumar: "<<suma<<" mas "<<suma2<<" es: "<<suma+suma2<<endl;
														break;
													case 'r':
													case 'R':
													case '-':
														cout<<"					Estoy en la resta \n\n";
														cout<<"          ingrese el primer valor a restar \t";
														cin>>resta1;
														cout<<"          ingrese el segundo valor a restar \t";
														cin>>resta2;
														resta=resta1-resta2;
														cout<<"		El resultado de la resta es: "<<resta;
														break;
													case 'M':
													case 'm':
													case '*':
														cout<<"					Estoy en la multiplicacion \n\n";
														cout<<"         ingrese el primer valor a mutiplicar \t";
														cin>>multi1;
														cout<<"         ingrese el segundo valor a mutiplicar \t";
														cin>>multi2;													
														resultado=multi1*multi2;
		cout<<"					        El resultado de multiplicar "<<multi1<<" por "<<multi2<<" es: "<<resultado<<endl;
														break;
													case 'D':
													case 'd':
													case '/':
														cout<<"					Estoy en la division \n\n";
														cout<<"         ingrese el primer valor a dividir \t";	
														cin>>div1;
														cout<<"         ingrese el primer valor a dividir \t";
														cin>>div2;																											
														division=div1/div2;
														cout<<"					El resultado de la division es: "<<division<<endl;
														break;
													case 'Q':
													case 'q':
													case '%':
														cout<<"					Estoy en la raiz cuadrada \n\n";
														cout<<"         ingrese el valor que al desea sacar raiz \t";
														cin>>raiz1;														
														raiz=sqrt(raiz1);
														if(raiz1!=0)
														{
													
										cout<<"					El resultado de la raiz Cuadrada de "<<raiz1<<"  es: "<<raiz<<endl;
														}
													else
														{
										cout<<" ingrese otro valor diferente a 0";
														}
														break;	
														
													case 'P':
													case 'p':
													case '$':
														cout<<"					Estoy en la potencia \n\n";
														cout<<"              ingrese el primer valor a elevar \t  ";
														cin>>potencia1;												
														cout<<"              ingrese el valor elevado \t ";	
														
														cin>>potencia2;														
														
														potencia=pow(potencia1,potencia2);
														while(potencia2==0)
														if(potencia2!=0)														
														{
													cout<<"					El resultado de la potencia de: "<<potencia1<<"  a la "<<potencia2<<"  es: "<<potencia<<endl;
														}
													else
														{
													cout<<"            ingrese un valor diferente a 0 \t";		
													cin>>potencia2;
														}			
													break;	
													default:
														cout<<"					LA OPCION SELECCIONADA NO PERTENECE A LAS OPCIONES DEL MENU \n\n";
														break;
											 }
											cout<<"                                       Desea continuar en las operaciones? Digite S � s ";
											cin>>entrada2;
										}
										while((entrada2 =='s')||(entrada2 =='S'));	
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
					cout<<"				Desea continuar en el MENU PRINCIPAL? ingrese el caracter s o S ";
					cin>>entrada;
		}
		while((entrada =='s')||(entrada =='S'));		
			//	entrada=entrada+1;	
				//cout<<"			   oprime una tecla para continuar     ";
				//getch();
			//	temporal=temporal+1;
			//	cout<<"			   usted ha pasado "<<temporal<<" vez (ces)\n";
			//	system("pause");
			
				//cout<<"			   usted paso "<<temporal<<" veces\n";
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
