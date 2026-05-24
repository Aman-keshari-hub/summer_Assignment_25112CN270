//Write a program to Reverse a number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,reverse=0,count=0,copy;
    cout<<"Enter number ";
    cin>>n;
    copy=n;
    if(n<0)
        cout<<"Enter positive integers only";
    while(n)
    {
        count++;
        n/=10;
    }    
    while(copy>=1)
    {
        reverse=reverse+(copy%10)*pow(10,count-1);
        copy/=10;
        count--;
    }  
    cout<<reverse;  


}