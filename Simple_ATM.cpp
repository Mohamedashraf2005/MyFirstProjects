//very Simple ATM You Can Deposit, Withdraw, View Your Balance
#include <iostream>
using namespace std;
int main()
{
		int pass,switcher;
		string name;
		double money;
		double balance = 2500;
		char runner;
		cout<<"====ASHRAF'S ATM====\n";
		cout <<"====================\n";
		cout<<"Enter your 4 digit password\n";
		cin >> pass;
	
	if( pass>=1000 && pass<=9999)
	{
		 do{
	    cout<<"======Welcome======\n";	
		cout <<"====================\n";
		cout<<"1-Deposit\n";
		cout<<"2-Withdraw\n";
		cout<<"3-ViewBalance\n";
		cout<<"4-Exit\n";
		cout <<"====================\n";
		cin >> switcher;
			
	switch(switcher)
	       {
	       	
		case 1 :  //deposit
			cout <<"Enter the amount you want to deposit ";
			cin >> money;
			if(money > 100000){
				cout<<"Sorry, you can't deposit more than 100k $ in ATM, Please Visit Our nearest Bank";
			}else{
				balance = money + balance;
			cout <<"The transaction was completed successfully, your current balance is " <<balance<<"$";
			}
			break;
		case 2 : //withdraw
			cout <<"Enter the amount you want to withdraw ";
			cin >> money;
			if(money > balance){
				cout << "Sorry, you don't have enough balance to withdraw";
			}else{
				balance = balance - money;
			cout <<"The transaction was completed successfully, your current balance is " <<balance<<"$";	
			}
			break;
		case 3 : //view balance
			cout <<" your current balance is" << balance<<"$";
			break;
		
		case 4 :
			cout <<"Thanks for using our ATM";
			break;
			
		default:
			cout << "Wrong Number";
			break;
		       }
		       
				cout<< "\n"<< "run again??(y/n)";
				cin >> runner;
				}
				while (runner =='Y' || runner=='y');
	}else{
		cout <<"Please Password Must Be 4 digits.";
	}
	return 0;
}
