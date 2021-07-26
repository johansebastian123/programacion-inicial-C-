#include <iostream>
#include <conio.h>

using namespace std;
main()
{
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
}
