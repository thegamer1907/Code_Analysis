#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define eps 1e-9
#define maxp 10000000
#define mod 1000000007
#define sin(s) scanf("%lld",&s);
#define sout(s) printf("%lld\n",s);
#define in(s) cin>>s
#define in2(a,b) cin>>a>>b
#define out(s) cout<<s
#define outs(s,a) cout<<s<<a
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define gear_change ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define nfl(i,n) for(i=0;i<n;i++)
#define sfl(i,s,e) for(i=s;i<e;i++)
#define ufl(i,n) for(i=n-1;i>=0;i--)
void solve()
{
	ll n,t,i;
	in2(n,t);
	string ord;
	in(ord);
	while(t--)
	{
		nfl(i,n-1)
		{
			if(ord[i]=='B'&&ord[i+1]=='G')
			{
				swap(ord[i],ord[i+1]);
				i++;
			}
		}
	}
	cout<<ord<<'\n';
}
int main()
{
	gear_change;
	ll test=1;
	//in(test);
	while(test--)
	{
		solve();
	}
}
