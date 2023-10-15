#include <iostream>
using namespace std;

int main()
{	
	char x; 
	cout << "Enter The Capital Character  \n";	
	cin >> x;
	cout << "The Small Character is ==> " << char(x + 32); 
	
	//32 is the diffrence between the capital and small letter in ASCII table (google it)  	
	
	return 0;
}


