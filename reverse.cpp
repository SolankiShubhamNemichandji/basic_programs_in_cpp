#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,rem=0,n;
    cout<<"enter a number: ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<"reverse of "<<num<<" is "<<rev;
}
