#include<bits/stdc++.h>
#define hell 1000000007
#define for(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;
ll a[200004];
ll k[200004];
int main()
{
	ll n,q;
	cin>>n>>q;
	for(i,0,n)
    {
        ll t;
        cin>>t;
        if(i==0)
            a[i]=t;
        else
            a[i]=t+a[i-1];
    }
    for(i,0,q)
        cin>>k[i];
    ll sum=0;
    for(i,0,q)
    {
        sum+=k[i];
        ll z=lower_bound(a,a+n,sum)-a;
        //cout<<sum<<' '<<z<<endl;
        if(z>=n||z==(n-1)&&a[z]==sum)
        {
            sum=0;
            cout<<n<<endl;
        }
        else if(a[z]==sum)
            cout<<(n-z-1)<<endl;
        else
            cout<<n-z<<endl;
    }
	return 0;
}
