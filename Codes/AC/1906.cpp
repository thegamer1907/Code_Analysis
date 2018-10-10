//MY code
#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,k,tot=0,p,q,a[200005];
	map<ll,ll> l,r;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    r[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
	    r[a[i]]--;
        p=0;
        q=0;
	    if(a[i]%k==0)
	    {
	        p=l[a[i]/k];
	    }
	    q=r[a[i]*k];
	    tot+=p*q;
	    l[a[i]]++;
	}
	cout<<tot<<"\n";
	return 0;
}
