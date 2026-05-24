//Write a program to Check whether a number
//palindrome. 
#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    int arr[20];
    cin>>n;
    while(n>0)
    {
        arr[i]=n%10;
        n/=10;
        i++;
    }
    int j=0,k=i-1;
    while(j<k)
    {
        if(arr[j]==arr[k])
            {
                j++;
                k--;
            }
        else
        {
            cout<<"Not palindrome";
            return 0; 
        }   
    }
    cout<<"Palindrome";
    return 0;
}