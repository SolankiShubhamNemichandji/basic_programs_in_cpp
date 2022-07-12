#include<iostream>
using namespace std;

int main()
{
    int n1,n2,maxi=0;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    maxi=(n1>n2)?n1:n2;
    do{
        if(maxi%n1==0 && maxi%n2==0)
        {
            cout<<"lcm="<<maxi;
            break;
        }

        else{
            maxi++;
        }
    }while(true);
}
