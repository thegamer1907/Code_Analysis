#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    char arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int j=0;j<t;j++)
    {
        for(int i=0;i<n;i++)
    {
        if(arr[i]=='B'&&arr[i+1]=='G')
        {
            arr[i]='G';
            arr[i+1]='B';
            i++;
        }
    }
       }
       for(int i=0;i<n;i++)
       cout<<arr[i];
}