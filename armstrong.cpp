#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,rem=0,sum=0,n;
    cout<<"enter a number: ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n/=10;
    }
    if(sum==num)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
}
