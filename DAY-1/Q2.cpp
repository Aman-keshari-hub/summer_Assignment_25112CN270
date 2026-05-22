#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter n ";
    cin>>n;
    cout<<"Enter the number till you want to print the table ";
    cin>>m;
    for(int i=1;i<m+1;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}