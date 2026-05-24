// Write a program to Find sum of digits of a 
// number. 
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,count=0;
    cout<<"Enter number ";
    cin>>n;
    if(n<0)
        cout<<"Enter integer inputs only";
    while(n>1)
    {
        sum=(n%10)+sum;
        n/=10;
        count++;
    }

    cout<<"The sum of digits in number is "<<sum<<endl;
    cout<<"The no digits in number is "<<count;
}  
