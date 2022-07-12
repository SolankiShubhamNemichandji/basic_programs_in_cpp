#include<iostream>
using namespace std;

int main()
{
    int num,divisor;
    cout<<"enter a natural number: ";
    cin>>num;
    for(divisor=1;divisor<=num;divisor++)
    {
        if(num%divisor==0)
        {
            cout<<divisor<<" ";
        }
    }
}
