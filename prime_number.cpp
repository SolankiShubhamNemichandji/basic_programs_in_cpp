#include<iostream>
using namespace std;

int main()
{
    int num,divisor;
    cout<<"enter a number: ";
    cin>>num;
    bool isprime=true;
    if(num<1)
    {
        cout<<"number needs to be greater than one\n";
    }
    else if(num==1)
    {
        cout<<"1 is neither prime nor composite\n";
    }
    else
    {
        for(divisor=2;divisor<=(num/2);divisor++)
        {
            if(num%divisor==0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        {
            cout<<num<<" is prime number.";
        }
        else
        {
            cout<<num<<" is not prime number.";
        }
    }
}
