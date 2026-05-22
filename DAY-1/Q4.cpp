#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter number ";
    cin>>n;
    for(int i=1;i<=INT_MAX/10;i++)
    {
        if(n>1)
        {
            n=n/10;
            count++;
        }
        else
            break;
    }
    cout<<"The number of digits in number is "<<count;
}