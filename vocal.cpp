#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int v;
	string a,e,i,o,u;
	cout<<"ingrese una vocal\t";
	cin>>v;
	switch(v)
	{
		case a: cout<<v<<" \nes una vocal";
		break;
		case e: cout<<v<<" \nes una vocal"; 
		break;
		case i: cout<<v<<" \nes una vocal";
		break;
		case o: cout<<v<<" \nes una vocal";
		break;
		case u: cout<<v<<" \nes una vocal";
		break;
		default: cout<<v<<" \nno es una vocal";		
	}
}
