#include <iostream>
using namespace std;
main ()
	{
		int n,r,d;
			cout<<"digite un numero de (1 a 99)\t";
			cin>>n;
			while ((n<1) || (n>99))
			{
				system("cln");
				cout<<"digite un numero de (1 a 99)\t";
				cin>>n;
			}
			r=n%10;
			d=n/10;
			cout<<"el numero "<<n<<" en romano es: ";
			switch (d)
			{
				case 0: cout<<"";
				break;
				case 1: cout<<" X";
				break;
				case 2: cout<<" XX";
				break;
				case 3: cout<<" XXX";
				break;
				case 4: cout<<" XL";
				break;
				case 5: cout<<" L";
				break;
				case 6: cout<<" LX";
				break;
				case 7: cout<<" LXX";
				break;
				case 8: cout<<" LXX";
				break;
				case 9: cout<<" XC";
				break;																												
			}
			switch(r)
			{
				case 0: cout<<"";
				break;
				case 1: cout<<"I ";
				break;
				case 2: cout<<"II ";
				break;
				case 3: cout<<"III ";
				break;
				case 4: cout<<"IV ";
				break;
				case 5: cout<<"V ";
				break;
				case 6: cout<<"VI ";
				break;
				case 7: cout<<"VII ";
				break;
				case 8: cout<<"VIII ";
				break;
				case 9: cout<<"IX ";
				break;
			}	
	}
