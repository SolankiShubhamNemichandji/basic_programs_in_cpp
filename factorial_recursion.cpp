#include<iostream>
using namespace std;


int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);

}
int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<num<<"! = "<<fact(num);

}
