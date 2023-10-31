//This tasks aims to split a number into 3 digits like ( 513 )  into 5 and 1 and 3

#include <iostream>
using namespace std;
int main(){
	int num;
	cout <<" Enter a Number between 100 and 999 ==> ";
	cin >> num;
	if( num <100 || num >999){
		cout <<"Please Number Should be between 100 and 999";
		}
	else if(num%10 >= 0)
	{
		cout<<"\nFirst digit is " <<num % 10;

		if(num/10 %10 >= 0)
		{
			cout<<"\nSecond digit is " <<num/10 %10;
		}
	 	if(num/100 %10 >= 0)
		{
			cout<<"\nThird digit is " <<num/100 %10;
		}	
	}
	return 0;
}

//513
