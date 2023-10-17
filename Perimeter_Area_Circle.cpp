#include <iostream>
using namespace std;

int main()
{	

	double pi = 3.1415926535897932384626433832795;
	int radius;
	cout <<"Enter The Radius Of The circle \n";
	cin >> radius;
	cout <<"Radius is " << radius;
	cout <<"\nThe Perimeter Of The circle is " << 2*pi*radius ;
	cout <<"\nThe Area Of The circle is " << pi * radius * radius ;
	
	return 0;
}


