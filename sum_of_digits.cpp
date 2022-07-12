#include<iostream>
using namespace std;

int main()
{
    int num,sum=0,rem=0,n=0;
    cout<<"enter a number: ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n/=10;
    }
    cout<<"sum of all the digits of "<<num<<" is "<<sum;
}
