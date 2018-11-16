#include<iostream>
using namespace std;

int main()
{
    int n,t,i,j,k;
    cin>>n>>t;
    char arr[n+1];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=t;j>0;j--)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]=='B'&&arr[i+1]=='G')
            {
                arr[i]='G';
                arr[i+1]='B';
                i++;
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}