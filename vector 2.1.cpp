#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;
const int maximoelemento = 6;
main()


{
	char mensaje[]= {'P,'R','O','G','R','A','M','A','C','I','O','N','','D','E','','S','O','F','T','W','A','R','E};
	int fila,columna,temporal,cantidad;
	int edades[20];
		cout<<"\por favor ingresa la cantidad de los elementos del vector \n\n";
		cin>>cantidad;
		//llenado del vector
		for(int i=0;i<cantidad;i++)
		{
			cout<<"\nvector numero "<<i<<" :";
			cin>>edades[i];
		}	
	//int edades[]={2,45,567,0,-1,3,12,20,12,78,-45};	
	for(fila=0;fila<columna;fila++)
		{
			for(columna=0;columna<=cantidad -1;columna++)
			{
				if(edades[columna]>edades[columna+1])
					{
						temporal=edades[columna];
						edades[columna]=edades[columna+1];
						edades[columna+1]=temporal;
					}
			}
		}
	cout<<"\nvector edades ordenado de forma ascendente \n\n";
	for(int i=0;i<cantidad;i++)
	{		
		cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
	}
	cout<<"\nvector edades ordenado de forma descendente \n\n";
	for(int i=cantidad-1;i>=0;i--)
	{
		cout<<"  \n";
	}
	for(int i=0;i>=23;i++)
	{
		sleep (80);
		cot<<mensaje[i]
		//cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
	}
	}





























	/*{
	int fila,columna,temporal,cantidad;
	int edades[20];
		cout<<"\por favor ingresa la cantidad de los elementos del vector \n\n";
		cin>>cantidad;
		//llenado del vector
		for(int i=0;i<cantidad;i++)
		{
			cout<<"\nvector numero "<<i<<" :";
			cin>>edades[i];
		}	
	//int edades[]={2,45,567,0,-1,3,12,20,12,78,-45};	
	for(fila=0;fila<columna;fila++)
		{
			for(columna=0;columna<=cantidad -1;columna++)
			{
				if(edades[columna]>edades[columna+1])
					{
						temporal=edades[columna];
						edades[columna]=edades[columna+1];
						edades[columna+1]=temporal;
					}
			}
		}
	cout<<"\nvector edades ordenado de forma ascendente \n\n";
	for(int i=0;i<cantidad;i++)
	{		
		cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
	}
	cout<<"\nvector edades ordenado de forma descendente \n\n";
	for(int i=cantidad-1;i>=0;i--)
	{
		cout<<"En el indice ["<<i<<"] tenemos "<<edades[i]<<" \n";
	}
	}*/
		//{
	//				cout<<"En el indice ["<<i<<"] tenenmos "<<edades[i]<<" \n";	
	//	}
	//	cout<<"el vector tiene "<<i;
		
	//	cout<<" \n"<<edades[8];	
	//}
	
	/*using namespace std;
const int maximoelemento = 6;
main()
	{
	int i;	
	int edades[]={2,45,567,0,-1,3,12,2,78,-45};	
	for(i=0;i<maximoelemento;i++)	
		{
					cout<<"En el indice ["<<i<<"] tenenmos "<<edades[i]<<" \n";	
		}
		cout<<"el vector tiene "<<i;
		
		cout<<" \n"<<edades[8];	
	}*/
	
	/*
using namespace std;
main()
	{
	string galpon[3];
	galpon[2]="pedro";
	galpon[0]="maria"; 	
	galpon[1]="elsa";
	//cout<<galpon[1];
	for(int i=0;i<9;i++)
		{
			if(i>2)
				{
					cout<<"El indice ["<<i<<"] no existe \n";			
				}
				else
				{
					cout<<"En el indice ["<<i<<"] tenenmos "<<galpon[i]<<" \n";	
				}
		}
	}*/
