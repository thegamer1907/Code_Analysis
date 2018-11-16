#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll m=1000000007;
int main() 
{
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i;
    cin>>n>>k;
    ll a[n],c=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        c++;
    }
    cout<<c;
	return 0;
    
    
    
}