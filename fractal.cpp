#include<iostream>
#include "complex_numbers.h"
using namespace std;

int main()
{
	
	int r;
	int e = 0;
	double x, y;
	double z = 1;
	double c = 0;
	double d = 0;
	complex a;
	cout<<"Please enter the number of iterations:\n";
	cin >> r;
	cout<<"Please enter a starting point:\n";
	cin >> x >> y;
	a.render(r, x, y, 1);
	while(1)
	{
		cout<<"\nRender complete.\n\n" <<"Currently centred on: ";
		if(y < 0)
		{
			cout << x << y << "i	";
		}
		else
		{
			cout << x << "+" << y << "i		";
		}
		cout<<"Current zoom level: "<< z;
		cout<<"\n\nType 1 to change the zoom level, 2 to pan view, and ctrl+c to exit:\n";
		cin >> e;
		if(e == 1)
		{
			cout<<"Please enter a zoom level:\n";
			cin >> z;
			a.render(r, x, y, z);
		}
		else if(e == 2)
		{
			cout<<"Please enter pan amount:\n";
			cin >> c >> d;
			x+=c;
			y+=d;
			a.render(r, x, y, z);
		}
	}
}
