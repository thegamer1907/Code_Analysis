#include<iostream>
using namespace std;
int main()
{
    char a ;
    int n,t,i,k ;
    cin>>n>>t ;
    char ar[n+1] ;
    for(i=0;i<n;i++)
    {
        cin>>ar[i] ;
    }
    for(k=0;k<t;k++)
    {
        for(i=0;i<n;i=i+2)
        {
        if(ar[i]=='B'&&ar[i+1]=='G')
        {
            a = ar[i] ;
            ar[i]=ar[i+1] ;
            ar[i+1]=a ;
        }
        else
        {i=i-1 ;}
        }
    }
    for(i=0;i<n;i++)
    {
    cout<<ar[i] ;
    }
}