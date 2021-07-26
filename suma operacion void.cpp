#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

char control;
char continuar;
void mensaje();
void mensaje1();
void suma();
void resta();
void multiplicacion();
void division();	

void suma()
	{
		int s1,s2;
		cout<<"aca va la suma"<<endl;
		cout<<"ingrese el primer valor a sumar \t"<<endl;
		cin>>s1;
		cout<<"ingrese el segundo valor a sumar \t"<<endl;
		cin>>s2;
		s1=s1+s2;
		cout<<"el valor de la suma es: "<<s1<<endl; 
	}
void resta()
	{
		int r1,r2;
		cout<<"aca va la resta"<<endl;
		cout<<"ingrese el primer valor a restar \t"<<endl;
		cin>>r1;
		cout<<"ingrese el segundo valor a restar \t"<<endl;
		cin>>r2;
		r1=r1-r2;
		cout<<"el valor de la resta es: "<<r1<<endl;	
	}	
void multiplicacion()
	{
		int m1,m2;
		cout<<"aca va la multiplicacion"<<endl;	
		cout<<"ingrese el primer valor a multiplicar \t"<<endl;
		cin>>m1;
		cout<<"ingrese el segundo valor a multiplicar \t"<<endl;
		cin>>m2;
		m1=m1*m2;
		cout<<"el valor de la multiplicacion es: "<<m1<<endl;
	}	
void division()
	{
		double d1,d2;
		cout<<"aca va la division"<<endl;	
		cout<<"ingrese el primer valor a dividir \t"<<endl;
		cin>>d1;
		cout<<"ingrese el segundo valor a dividir \t"<<endl;
		cin>>d2;
		d1=d1/d2;
		cout<<"el valor de la division es: "<<d1<<endl;	
	}	

void mensaje1()
	{
		cout<<"mi primer mensaje"<<endl;
	/*	int numero=1;
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
		numero=10;
		while(numero>=1)
		{
			cout<<"voy en:  "<<numero<<endl;
			numero=numero-1;
		}
	}

void mensaje()
	{
		cout<<"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"<<endl;
	*/}
int main()
	{
		char caracter;
		do
	{
		int numero;
		cout<<"desea visualizar el mensaje1? ingrese el numero 1 "<<endl;
		cin>>numero;
		if(numero==1)
		{
			mensaje1();
		}
		else
		{
		cout<<"no entraste a mensaje1"<<endl;
		}
		do
		{
		
		cout<<"menu principal"<<endl;
		cout<<"para ingresar a mensaje1 digite m"<<endl;
		cout<<"para ingresar a suma digite s"<<endl;
		cout<<"para ingresar a resta digite r "<<endl;
		cout<<"para ingresar a multiplicacion digite x"<<endl;
		cout<<"para ingresar a division digite d"<<endl;
		cin>>caracter;
		switch(caracter)
		
		{
	case 'm': mensaje1();
		break;		
	case 's':	suma();
		break;
	case 'r':	resta();
		break;	
	case 'x':	multiplicacion();
		break;
	case 'd':	division();
		break;
	default:cout<<"no estoy dentro de las opciones "<<endl;	
		}
		cout<<"desea continuar en el menu? ingrese la tecla s "<<endl;
		cin>>control;
		}
	while(control=='s');
		cout<<"desea continuar desde el inicio? ingrese la tecla s "<<endl;
		cin>>continuar;	
	}
	while(continuar=='s');	
	//	mensaje1();
	//	mensaje();
	//	mensaje();
	//	mensaje1();
	//	suma();
		
	}
