#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using namespace std;
void menu();void guardar();void eliminar();void consultar();void buscar();void modificar();void salir();
char nombre[30],grupo[10];
int semestre,edad,auxclave,clave;
bool encontrado;
main()
{
	menu();//	system("PAUSE");
}
void menu()
{
	int opcion;
	do
	{
		cout<<"\n \t\t\t\t\t Manejo de archivos en c++ \n"<<endl;
		cout<<"\t\t\t\t\t 1.Guardar"<<endl;
		cout<<"\t\t\t\t\t 2.Eliminar"<<endl;
		cout<<"\t\t\t\t\t 3.Consultar Registros"<<endl;
		cout<<"\t\t\t\t\t 4.Buscar Registros"<<endl;
		cout<<"\t\t\t\t\t 5.Modificar"<<endl;
		cout<<"\t\t\t\t\t 6.Salir"<<endl;
		cout<<"\n \t\t\t\t\t Seleccione una de las Opciones"<<endl;
		cin>>opcion;
		switch(opcion)
			{
				case 1: guardar();	break;
				case 2: eliminar();	break;
				case 3: consultar();break;
				case 4: buscar();	break;
				case 5: modificar();break;
				case 6: salir();	break;
				default: cout<<"La Opcion que Elegiste no hace parte del Menu";	break;
			}
	}
	while(opcion!=6);
}

void guardar()
{
	ofstream escritura; ifstream consulta;bool repetido=false;
	escritura.open("aprendiz.txt", ios::out|ios::app);	consulta.open("aprendiz.txt", ios::in);
	if(escritura.is_open() && consulta.is_open())
		{
			cout<<"ingresa la clave del aprendiz:";
			cin>>auxclave;
			consulta>>clave;
			while(!consulta.eof())
				{
					consulta>>nombre>>semestre>>grupo>>edad;
					if(clave==auxclave)
						{
					 		cout<<"Ya existe el registro con esa clave"<<endl;
							repetido=true;
							break;
						}
					consulta>>clave;
				}
				if(repetido==false)
					{
						cout<<"Ingresa el Nombre del Aprendiz";	cin>>nombre;
						cout<<"Ingresa el Semestre del Aprendiz";cin>>semestre;
						cout<<"Ingresa el Grupo del Aprendiz";	cin>>grupo;
						cout<<"Ingresa la Edad del Aprendiz";	cin>>edad;
						escritura<<auxclave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
						cout<<"Registro agregado con exito!"<<endl;
					}
		}
		else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido creado"<<endl;
		}
	escritura.close();consulta.close();
	}
void eliminar()
{
	cout<<"La Opcion que Elegiste Fue eliminar";
	encontrado=false;
	auxclave=0;
	ofstream aux; ifstream leer;
	aux.open("aprendiz.txt", ios::out|ios::app);	leer.open("aprendiz.txt", ios::in);
	if(aux.is_open() && leer.is_open())
	{
		cout<<"ingresa la clave del aprendiz que deseas eliminar"<<endl;
		cin>>auxclave;
		leer>>clave;
		while(leer.eof())
		{
				leer>>nombre>>semestre>>grupo>>edad;
				if(auxclave==clave)
				{
					encontrado=true;
					cout<<"Registro Eliminado"<<endl;
				}
			else
				{
						aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
				}	
			leer>>clave;	
		}
		
	}
	else
	{
		cout<<"Error, el registro no se pudo abrir o no ha sido creado"<<endl;
	}
	if(encontrado==false)
	{
		cout<<"Error, Revisa tu clave pues esa no esta dentro de mi archivo"<<auxclave<<endl;
	}
	aux.close();leer.close();
	remove("aprendiz.txt");
	rename("auxiliar.txt","aprendiz.txt");
}
void consultar()
{
	cout<<"La Opcion que Elegiste Fue consultar";
	ifstream leer; leer.open("aprendiz.txt" , ios::out|ios::in);
	if(leer.is_open())
		{
			cout<<"            Registros del archivo aprendiz.txt"<<endl;
			cout<<"            **********************************"<<endl;
			leer>>clave;
			while(!leer.eof())
			{
				leer>>nombre>>semestre>>grupo>>edad;
				cout<<"                Clave: "<<clave<<endl;
				cout<<"                Nombre: "<<nombre<<endl;
				cout<<"                Semestre: "<<semestre<<endl;
				cout<<"                Grupo: "<<grupo<<endl;
				cout<<"                Edad: "<<edad<<endl;
				leer>>clave;
				cout<<"            **********************************"<<endl;
			}
		}
		else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido creado"<<endl;
		}
	leer.close();	
}
void buscar()
{
	cout<<"La Opcion que Elegiste Fue buscar";
}
void modificar()
{
	cout<<"La Opcion que Elegiste Fue modificar";
}
void salir()
{
	cout<<"La Opcion que Elegiste Fue salir";
}
