#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void mensaje();
void mensaje1();
void suma();

void suma()
	{
		cout<<"aqui va la suma"<<endl;
	}

void mensaje1()
	{
		cout<<"mi primer mensaje"<<endl;
		int numero=1;
		while(numero<=10)
		{
			cout<<"voy en:  "<<numero<<endl;
			numero=numero+1;	
		}
		cout<<"termine en while  "<<endl;
		numero=1;
		do
		{
			cout<<"voy en:   "<<numero<<endl;
			numero=numero+1;
		}
		while(numero<=10);
		numero=10;
		while(numero>=1)
		{
			cout<<"voy en:   "<<numero<<endl;
			numero=numero-1;
		}
	}
	
void mensaje()
{
	cout<<"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"<<endl;
}	
int main()
	{
		mensaje1();
		mensaje();
		suma();
		suma();
		suma();
		mensaje();
		mensaje1();
	}

