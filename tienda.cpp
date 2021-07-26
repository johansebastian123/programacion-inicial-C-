#include <iostream>
using namespace std;
main()
{
	int opcion,opcion1;
	string a;
	double i=0.16;
	{
		cout<<"        ARTICULO A COMPRAR\n\n";
		cout<<"       ingrese (0) para jabon\n";
		cout<<"       ingrese (1) para el shampoo\n";
		cout<<"       ingrese (2) para crema dental\n";
		cout<<"       ingrese (3) para maquina de afeitar\n";
		cout<<"       ingrese la opcion del articulo a comprar\t";
		
		cin>>opcion;
		switch(opcion)
		{
			case 0: cout<<"\n        bienvenido a jabon\n";
			cout<<"       elija una de las siguientes opciones de jabon a comprar\n";
			cout<<"       ingrese (1) para el jabon en barra\n";
			cout<<"       ingrese (2) para el jabon liquido\n";
			cout<<"       ingrese (3) para el jabon en polvo\n";
		
			cin>>opcion1;
			switch(opcion1)
			{
				case 1: cout<<"\n    usted eligio el jabon en barra\n";
				cout<<"    el jabon en bara cuesta $3000 pesos\n";
				cout<<"    el iva del jabon en barra es: $"<<3000*i<<" pesos\n";
				cout<<"    el valor total del producto mas el iva es: $"<<3000*i+3000<<" pesos";
				break;
				case 2: cout<<"\n    usted eligio el jabon liquido\n";
				cout<<"    el jabon liquido cuesta $4200 pesos\n";
				cout<<"    el iva del jabon liquido es: $"<<4200*i<<" pesos\n";
				cout<<"    el valor total del producto mas el iva es: $"<<4200*i+4200<<" pesos";
				break;
				case 3: cout<<"\n    usted eligio el jabon en polvo\n";
				cout<<"    el jabon en polvo cuesta $3400 pesos\n";
				cout<<"    el iva del jabon liquido es: $"<<3400*i<<" pesos\n";
				cout<<"    el valor total del producto mas el iva es: $"<<3400*i+3400<<" pesos";
				break;
			}
			break;
			case 1: cout<<"\n       bienvenido a shampoo\n";
			cout<<"       elija una de las siguientes opciones de shampoo a comprar\n";
			cout<<"       ingrese (1) para el shampoo en tarro\n";
			cout<<"       ingrese (2) para el shampoo en sobre\n";
		
			cin>>opcion1;
			switch(opcion1)
			{
				case 1: cout<<"\n    usted eligio shampoo en tarro\n";
				cout<<"   el shampoo en tarro cuesta $2700 pesos";
				cout<<"    el iva del shampoo en tarro es: $"<<2700*i<<" pesos\n";
				cout<<"    el valor total del producto mas el iva es: $"<<2700*i+2700<<" pesos";
				break;
				case 2: cout<<"\n    usted eligio el shampoo en sobre\n";
				cout<<"    el jabon liquido cuesta $600 pesos\n";
				cout<<"\n    el iva del jabon liquido es: $"<<600*i<<" pesos\n";
				cout<<"\n    el valor total del producto mas el iva es: $"<<600*i+600<<" pesos";
				break;			
			}
			break;
		}
	}
}
