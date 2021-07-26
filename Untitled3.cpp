#include <iostream>
#include <conio.h>

using namespace std;
main()
{
	/*
int semestre;
cout<<endl<<"ingrese el numero a consultar "<<endl;
cin>>semestre;

if((semestre==1)||(semestre==2)||(semestre==3)||(semestre==4)||(semestre==5)||(semestre==6))
	{
		cout<<endl<<"estamos en el primer semestre del año "<<endl;	
	}
else
	{
	if((semestre==7)||(semestre==8)||(semestre==9)||(semestre==10)||(semestre==11)||(semestre==12))
			{	
			cout<<endl<<"estamos en el segundo semestre del año "<<endl;	
			}
			else
			{
			cout<<endl<<"el numero digitado no pertenece a ninguno de los dos primeros semestres del año  "<<endl;	
			}
		}
}
*/
if(edad>17)
	{
		cout<<endl<<"ingrese a cine para adultos "<<endl;	
	}
else
	{
	if(edad<=17)
		{		
		if(edad<5)
			{	
			cout<<endl<<"ingrese a cine para niños "<<endl;	
			}
			else
			{
			cout<<endl<<"ingrese a cine para jovenes "<<endl;	
			}
		}
	}
}


					
	
	
int n1,r,s,n2;	
float m,d,n3,n4;
cout<<endl<<"OPERACIONES BASICAS"<<endl;
cout<<endl<<"ingrese los numeros para evaluar suma y resta"<<endl;

cout<<endl<<"ingrese el primer numero"<<endl;
cin>>n1;
cout<<endl<<"ingerse el segundo numero"<<endl;
cin>>n2;
cout<<endl<<"ingrese los numeros para evaluar multiplicacion y division"<<endl;
cout<<endl<<"ingrese el primer numero"<<endl;
cin>>n3;
cout<<endl<<"ingerse el segundo numero"<<endl;
cin>>n4;
s=n1+n2;
r=n1-n2;
m=n1*n2;
d=n1/n2;
cout<<"la suma de "<<n1<<" mas "<<n2<<" es: "<<s;
cout<<"\nla resta de "<<n1<<" menos "<<n2<<" es: "<<r;
cout<<"\nla multiplicacion de "<<n3<<" por "<<n4<<" es: "<<m;
cout<<"\nla division de "<<n3<<" dividido "<<n4<<" es: "<<d;
getch();
*/

