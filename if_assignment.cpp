
// 03 assignment solution 
// https://elzero.org/cpp-assignments-lesson-30-to-35/

#include <iostream>
using namespace std;

int main(){
	
	int num ;
	cout <<"Enter Number ";
	cin >>num;
	
    if( num >= 150 || num < 0 ){
		cout <<"Number Should be between 0 and 150";
	} else if( num < 10){
		cout << "00" <<num;
	} else if(  num > 10 && num <100){
		cout << "0"<<num;
	} else if( num >= 100){
		cout <<num;
	}
	return 0;
}
