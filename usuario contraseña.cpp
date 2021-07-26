#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	string nombre,contrasena,rcontrasena;
	cout<<endl<<"inicio de sesion"<<endl;
	cout<<endl<<"ingrese el nombre de usuario "<<endl;
	cin>>nombre;
	cout<<endl<<"ingrese su contraseña "<<endl;
	cin>>contrasena;
	cout<<endl<<"repita su contraseña "<<endl;
	cin>>rcontrasena;
	if((nombre=="victor")&&(contrasena=="profe")&&(rcontrasena=="profe"))
		{
			cout<<endl<<"usuario y contraseña correctos "<<endl;
		}
	else
		{
		if(nombre!="victor")
			{
				cout<<endl<<"te equivocaste pues el nombre no es:  "<<nombre<<endl;
			}
		else
			{
				cout<<endl<<"nombre correcto"<<nombre<<endl;
			}
		if(contrasena!="profe")
			{
				cout<<endl<<"te equivocaste la contrasena:  "<<contrasena<<endl;
			}
		else
			{
				cout<<endl<<"contrasena correcto"<<rcontrasena<<endl;
							rcontrasena = contrasena;
			}
		if(rcontrasena!="profe")
			{
				cout<<endl<<"te equivocaste en la verificacion "<<rcontrasena<<endl;
			}
		else
			{
				cout<<endl<<"verificacion correcta "<<rcontrasena<<endl;
			}
		}
	getch();	
}
