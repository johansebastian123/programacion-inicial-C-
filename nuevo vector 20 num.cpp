#include <iostream>
#include <windows.h>
using namespace std;
main()
	{
	int fila,columna, temporal,cantidad=20;
	int edades[20];
		cout<<"\nPor favor ingresa 20 numeros "<<" \n";
		for(int i= 0;i<cantidad;i++)
		{
			cout<<"\n numero"<<i<<" :";
			cin>>edades[i];
		}	
		for(fila=0;fila<cantidad;fila++)
		{
			for(columna=0;columna<cantidad -1;columna++)
				{
					if(edades[columna]>edades[columna+1])
						{
							temporal=edades[columna];
							edades[columna]=edades[columna+1];
							edades[columna+1]=temporal;
						}
				}
		}
		
	cout<<"\n20 numeros aleatorios"<<" \n";
	for(int i=0;i<cantidad;i++)
		{
			cout<<"\nel mayor es: "<<fila;
			cout<<"\nel menor es: "<<cantidad-fila+1;	
		}	
	}
