#include <iostream>
using namespace std;
main ()
{
	string continua;
	int opcion,l,l1,l2=0,m,m1,m2=0,w,w1,w2=0,j,j1,j2=0,v,v1,v2=0,s,s1,s2=0,d=6000,d1=8000,d2=0,pre=5500,e=6800,t;
	cout<<"      PAGO SEGUN HORAS DE TRABAJO\n";
	while(continua=="y")
	{
		cout<<"\ningrese la opcion segun el dia que trabajo";
		cout<<"\npara el dia lunes ingrese (1) ";
		cout<<"\npara el dia martes ingrese (2) ";
		cout<<"\npara el dia miercoles ingrese (3) ";
		cout<<"\npara el dia jueves ingrese (4) ";
		cout<<"\npara el dia viernes ingrese (5) ";
		cout<<"\npara el dia sabado ingrese (6) ";
		cout<<"\npara el dia domingos ingrese (7) ";
		cin>>opcion;
		switch(opcion)
		{
			case 1: cout<<"\n   LUNES \n";
			cout<<"\nhoras totales trabajadas ";
			cin>>l;
			cout<<"\nhoras extras trabajadas ";
			cin>>l1;
			l2=(l*pre)+(l1*e);
			break;
			case 2: cout<<"\n   Martes \n";
			cout<<"\nhoras totales trabajadas ";
			cin>>m;
			cout<<"\nhoras extras trabajadas ";
			cin>>m1;
			m2=(m*pre)+(m1*e);
			break;
			case 3: cout<<"\n   Miercoles \n";
			cout<<"\nhoras totales trabajadas ";
			cin>>w;
			cout<<"\nhoras extras trabajadas ";
			cin>>w1;
			w2=(w*pre)+(w1*e);
			break;
			case 4: cout<<"\n   JUEVES\n";
			cout<<"\nhoras totales trabajadas ";
			cin>>j;
			cout<<"\nhoras extras trabajadas ";
			cin>>j1;
			j2=(j*pre)+(j1*e);
			break;
			case 5: cout<<"\n   VIERNES\n";
			cout<<"\nhoras totales trabajadas ";
			cin>>v;
			cout<<"\nhoras extras trabajadas ";
			cin>>v1;
			v2=(v*pre)+(v1*e);
			break;
			case 6: cout<<"\n   SABADO\n";
			cout<<"\nhoras totales trabajadas ";
			cin>>s;
			cout<<"\nhoras extras trabajadas ";
			cin>>s1;
			s2=(s*pre)+(s1*e);
			break;
			case 7: cout<<"\n   DOMINGO\n";
			cout<<"\nhoras totales trabajadas ";
			cin>>d;
			cout<<"\nhoras extras trabajadas ";
			cin>>d1;
			d2=(d*pre)+(d1*e);
			break;
		}
		cout<<"\ndesea volver al menu? digite 'y' sino cualquier otra tecla ";
		cin>>continua;
	}
	cout<<"el pago total por dias trabajados es: ";
	t=l2+m2+w2+j2+v2+s2+d2;
	cout<<"$"<<t;
}
