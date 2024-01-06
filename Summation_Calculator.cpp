///This aims to calculate the Summation of a number using a simple function
#include <iostream>
using namespace std;

int sumnumbers(int num);

int main()
{
    int n,sum;
    cout<<"Enter a number to find the Summation:";
    cin>>n;
    sum =sumnumbers(n);
    cout <<"Summation of Numbers is = " << sum;
}

int sumnumbers(int num)
{
    if( num >0)
    {
        return num + sumnumbers(num - 1);
    }
    else
    {
        return 0;
    }
}
