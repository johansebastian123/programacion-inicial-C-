#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
	
	{
	int n,x,numero,nueva;	
		//for(n=1;n<11;n++)
		cout<<"ingrese el numero (cantidad) hasta donde deseas ver el mensaje lloviendo "<<endl;
		cin>>nueva;
		for(n=1;n<=nueva;n=n+1)
		{
			cout<<"   esta lloviendo en entrada: "<<n<<endl;
				for(x=1;x<=nueva;x++)
					{
						//cout<<" ***lloviendo**** "<<x<<endl;
						if(x>2)
						{
							break;
						}	
						cout<<" ***lloviendo**** "<<x<<endl;
					}
				cout<<"   quede en lloviendo: "<<x<<endl;						
		}
		cout<<" quede en entrada "<<n<<endl;
		cout<<endl;
		/*cout<<" ingresa el numero desde donde desea iniciar la numeracion "<<endl;
		cin>>numero;
		for(n=numero;n>=1;n--)
		{
		
		cout<<"    esta lloviendo en: "<<n<<endl;
		}
			cout<<"qude en: "<<n<<endl;
/*		
cout<<endl;*/
		for(n=10;n<=nueva;n=n-1)
		{
			cout<<"   esta lloviendo en: "<<n<<endl;	
		}
		cout<<"   quede en: "<<n<<endl;		
	}
