#include <iostream>
#include <conio.h>

using namespace std;
main()
{
string nombre,contrasena,rcontrasena;
cout<<endl<<"inicio de sesion "<<endl;
cout<<endl<<"igrese el nombre de ususario "<<endl;
cin>>nombre;
cout<<endl<<"igrese su contrasena "<<endl;
cin>>contrasena;
cout<<endl<<"repita su contrasena "<<endl;
cin>>rcontrasena;
if((nombre=="victor")&&(contrasena=="profe")&&(rcontrasena=="profe"))
{
	cout<<endl<<"usuario y contraseña correctas "<<endl;
	if(nombre!="victor")
		{
	
			cout<<endl<<"te equivocaste pues el nombre no es "<<nombre<<endl;
		}
		else{
			cout<<endl<<"el nombre es correcto"<<nombre<<endl;
			}
		if(contrasena!="profe")
		{
			cout<<endl<<"te equivocaste pues la contrasena no es "<<contrasena<<endl;
		
		}
		else
		{
			cout<<endl<<"la contrasena es correcto"<<contrasena<<endl;				
		}
			rcontrasena = contrasena;
		if(rcontrasena!="profe")
		{
			cout<<endl<<"te equivocaste pues la verificacion de contrasena no es "<<rcontrasena<<endl;
		}
		else
		{
		cout<<endl<<"te equivocaste de nombre o contrasena"<<endl;
		}
	}
	getch();

}

