#include<bits/stdc++.h>
#define ll long long
#define ss string
#define pb push_back
#define rev(i,n) for(ll i=0;i<n;i++)
#define rev1(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(),v.end()
#define S second
#define F first
#define tci(v,i) for(map<ll,ll>::iterator i=v.begin();i!=v.end();i++)
#define MOD 10000001
#define TIMESTAMP cerr<<(((double)clock())/CLOCKS_PER_SEC)
#define  rep(i,start,lim) for(ll (i)=(start);i<(lim);i++)
using namespace std;
map<ll,ll> mm,ans;
ll A[MOD],B[MOD],C[MOD];
	
int32_t main()
{
    sync;
    ll n,m,x;cin>>n;rev(i,n){cin>>x;C[x]++;}
    for(ll i=2;i<10000000;i++)
	{
		if(A[i]==0){
		for(ll j=i;j<=10000000;j+=i)
		{
			A[j]=1;
			B[i]+=C[j];
		}
	}
	}
		for(ll i=1;i<10000000;i++)
    {
    	B[i]+=B[i-1];
    }

    cin>>m;
    while(m--)
    {
    	ll l,r;cin>>l>>r;
    	if(l>=10000000 )l=9999999;
    	if(r>=10000000 )r=9999998;
    	cout<<B[r]-B[l-1]<<endl;
    }

}
