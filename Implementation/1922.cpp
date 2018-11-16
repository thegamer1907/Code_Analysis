#include<iostream>
using namespace std;
int main()
{
    int i,n,k ;
    cin>>n ;
    int ar[3*n] ;
    for(i=0;i<(3*n);i++)
    {
        cin>>ar[i] ;
    }
    int sum=0 ;
    for(k=0;k<3*n;k=k+3)
    {
        sum = sum + ar[k];
    }
    int a=0 ;
    for(k=1;k<3*n;k=k+3)
    {
        a = a + ar[k];
    }
    int b=0 ;
    for(k=2;k<3*n;k=k+3)
    {
        b = b + ar[k];
    }
    if(sum==0&&a==0&&b==0)
    {cout<<"YES" ;}
    else
    cout<<"NO" ;
}