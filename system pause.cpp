#include <iostream>
using namespace std;
void menu();void Guardar();void Eliminar();void Consultar();void Buscar();void Modificar();void Salir();
main()
{
	menu();
	system("PAUSE");
}

void menu()
{
	cout<<"\n \t\t\t\t tmanejo de archivos en c++\n"<<endl;
	cout<<"\t\t\t\t 1.Guardar "<<endl;
	cout<<"\t\t\t\t 2.Eliminar"<<endl;
	cout<<"\t\t\t\t 3.Consultar registros"<<endl;
	cout<<"\t\t\t\t 4.Buscar un registro"<<endl;
	cout<<"\t\t\t\t 5.Modificar"<<endl;
	cout<<"\t\t\t\t 6.Salir"<<endl;
	cout<<"\n \t\t\t\t Seleccione una de las opciones"<<endl;
	int opcion;
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
void Guradar()
{
	cout<<"la opcion que digito fue Guardar";
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
