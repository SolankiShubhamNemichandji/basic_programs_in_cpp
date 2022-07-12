#include<iostream>
using namespace std;

int gcd(int a, int b)
    {
        if(a==0)
        {
            return b;
        }
        return gcd(b%a,a);
    }
int main()
{
    int n1,n2;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    cout<<"gcd of "<<n1<<" and "<<n2<<" = "<<gcd(n1,n2);
}
