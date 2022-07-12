#include<iostream>
using namespace std;

int main()
{
    int num,t1=0,t2=1,t3;
    cout<<"enter number of terms: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<t1<<" ";
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }

}
