#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() 
{ 

    ll i,j,k,l,n,s,c=0;
    cin>>n>>s;
    ll a[n+3];
    for(i=0;i<n;i++)
    	{cin>>a[i];c+=a[i];}
    k=s;

    sort(a,a+n);
    if(a[n-1]*n-c>=s)
    	cout<<a[n-1]<<" ";
    else
    {
    	s-=(n*a[n-1]-c);j=s/n;
    	cout<<a[n-1]+j+(s%n?1:0)<<" ";
    }

    cout<<a[n-1]+k;

    return 0; 
}
