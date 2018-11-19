#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define fr(i,j,ar) for(ll int k=i;k<=j;k++) cin>>ar[k];
#define pii pair<ll int,ll int>
#define MAXN 1000000000001234000

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> OST;

template<class T> T gcd(T a,T b){return (b==0)?a:gcd(b,a%b);}
ll powe(ll a,ll p,ll m=mod)
{ll res=1;while(p>0){if(p&1)res=(res*a)%m;a=(a*a)%m;p>>=1;}
return res;}

ll int h,m,s,t1,t2;

int main()
{
    std::ios::sync_with_stdio(false);
		cin>>h>>m>>s>>t1>>t2;
		double h1,m1,s1;
		s1=s;
		m1=m+(double)s/60;
		h1=h+m1/60;
		if(h1>12)h1-=12;
		if(m1>60)m1-=60;
		ll int count=0;
		m1/=5;
		s1/=5;
		// cout<<h1<<'\n'<<m1<<'\n'<<s1;
		double a,b;
		t1=(double)t1;
		t2=(double)t2;
		a=min((double)t1,(double)t2);
		b=max((double)t1,(double)t2);
		if(h1>a&&h1<b)count++;
		if(m1>a&&m1<b)count++;
		if(s1>a&&s1<b)count++;
		if(h1==t1||h1==t2||m1==t1||m1==t2||s1==t1||s1==t2)
		{
			cout<<"NO";
			return 0;
		}
		if(count==0||count==3) cout<<"YES";
		else cout<<"NO";


    return 0;
}
