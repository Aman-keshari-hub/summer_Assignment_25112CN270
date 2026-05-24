#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number ";
    cin>>n;
    if(n<0)
        cout<<"Enter valid number";
    else if(n==1 || n==0)
        cout<<"The factorial of number is "<<fact;
    else
        {
            for(int i=2;i<n+1;i++)
                fact*=i;
            cout<<"The factorial of number is "<<fact;
        }
}