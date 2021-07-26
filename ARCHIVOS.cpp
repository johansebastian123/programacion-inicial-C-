#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using namespace std;
void menu();void Guardar();void Eliminar();void Consultar();void Buscar();void Modificar();void Salir();
char nombre[30],grupo[10];
int semestre,edad,auxclave,clave;
main()
{
	menu();
//	system("PAUSE");
}

void menu()
{
	int opcion;	
	do
	{
		cout<<"\n \t\t\t\t manejo de archivos en c++\n"<<endl;
		cout<<"\t\t\t\t 1.Guardar "<<endl;
		cout<<"\t\t\t\t 2.Eliminar"<<endl;
		cout<<"\t\t\t\t 3.Consultar registros"<<endl;
		cout<<"\t\t\t\t 4.Buscar un registro"<<endl;
		cout<<"\t\t\t\t 5.Modificar"<<endl;
		cout<<"\t\t\t\t 6.Salir"<<endl;
		cout<<"\n \t\t\t\t Seleccione una de las opciones"<<endl;
		cin>>opcion;
		switch(opcion)
			{
				case 1: Guardar(); break;
				case 2: Eliminar(); break;
				case 3: Consultar(); break;
				case 4: Buscar(); break;
				case 5: Modificar(); break;
				case 6: Salir(); break;
				default: cout<<"la opcion que elgiste no hace parte del menu"; break;
			}
	}
	while(opcion!=6);
}
void Guardar()
{
	ofstream escritura; ifstream consulta; bool repetido=false;
	escritura.open("aprendiz.txt" , ios::out|ios::app); consulta.open("aprendiz.txt" , ios::in);
	if(escritura.is_open() && consulta.is_open())
	{
		cout<<"ingrese la clave del aprendiz: ";
		cin>>auxclave;
		consulta>>clave;
		while(!consulta.eof())
		{
			consulta>>nombre>>semestre>>grupo>>edad;
			if(clave==auxclave)
				{
					cout<<"ya existe el registro con esa clave"<<endl;
					repetido=true;
					break;
				}
			consulta>>clave;
		if(repetido==false)
			{
				cout<<"ingrese el nombre del aprendiz"; cin>>nombre;
				cout<<"ingrese el semestre del aprendiz"; cin>>semestre;
				cout<<"ingrese el grupo del aprendiz"; cin>>grupo;
				cout<<"ingrese el edad del aprendiz"; cin>>edad;
				escritura<<auxclave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
				cout<<"Registro agregado con exito!"<<endl;
			}	
			
		}		

	}
	else
		{
			cout<<"error, el registro no se pudo abrir o no ha sido creado"<<endl;
		}
	escritura.close();consulta.close();	
}
void Eliminar()
{
	cout<<"la opcion que digito fue Eliminar";
}
void Consultar()
{
	cout<<"la opcion que digito fue Consultar";
}
void Buscar()
{
	cout<<"la opcion que digito fue Buscar";
}
void Modificar()
{
	cout<<"la opcion que digito fue Modificar";
}
void Salir()
{
	cout<<"la opcion que digito fue Salir";
}
