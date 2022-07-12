#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"enter a number: ";
    cin>>num;
    if(num<0)
    {
        cout<<"factorial not possible\n";
    }
    else if(num==0 || num==1)
    {
        cout<<num<<"! = 1\n";
    }
    else
    {
        for(int i=num;i>=2;i--)
        {
            fact=fact*i;
        }
        cout<<num<<"! = "<<fact;
    }

}
