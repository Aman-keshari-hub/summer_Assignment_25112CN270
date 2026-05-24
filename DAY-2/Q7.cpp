//Write a program to Find product of digits. 
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    double product;
    cout<<"Enter number ";
    cin>>n;
    if(n<0)
        cout<<"Enter integer inputs only";
    while(n>1)
    {
        product=(n%10)*product;
        n/=10;
        count++;
    }

    cout<<"The product of digits in number is "<<product<<endl;
    cout<<"The no digits in number is "<<count;
}