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
#define tci(v,i) for(auto i=v.begin();i!=v.end();i++)
#define MOD 1000000007
#define  rep(i,start,lim) for(ll (i)=(start);i<(lim);i++)
using namespace std;
ll 	d[5];
map<ss,ll> m;
int32_t main()
{
    sync;
    ll n,k,x;cin>>n>>k;
    rev(i,n)
    {
    	ss b;
    	rev(j,k){ cin>>x;b+=48+x;}
    	m[b]++;
    }
    tci(m,i)
    {
    	tci(m,j)
    	{
    		ss b,c;ll p=0;
    		b=i->F;c=j->F;
    		rev(l,b.length())
    		{
    			if(b[l]=='1' && c[l]=='1' )p++;
    		}
    	   if(p==0)
    	   {
    	   	cout<<"YES";return 0;
    	   }
    	}
    }
    cout<<"NO";


}
