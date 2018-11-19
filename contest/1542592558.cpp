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



int main()
{
    std::ios::sync_with_stdio(false);
		string s;
		cin>>s;
		ll int n;
		cin>>n;
	
		int f=0;int se=0;
		for(ll int i=0;i<n;i++)
		{
			string a;
			cin>>a;
			if(a==s){f=1,se=1;}
			if(a[1]==s[0])f=1;
			if(a[0]==s[1])se=1;

		}
		if(f&&se)cout<<"YES";
		else cout<<"NO";

    return 0;
}
