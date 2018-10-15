#include<bits/stdc++.h>
#define speed ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define test() ll t; cin>>t; while(t--)
#define mod 1000000007
#define nax 1000005
#define inf 100000000000000000LL
#define pb push_back
#define mp make_pair
#define in insert
#define ff first
#define ss second
#define pll pair<long long int,long long int>
#define pii pair<int,int>
#define vll vector<long long int>
#define vii vector<int>
#define sii set<int>
#define vb vector<bool>
#define sll set<long long int>
#define mii map<int,int>
#define mll map<long long int,long long int>
#define mis map<int,string>
#define all(n) n.begin(),n.end()
#define tr(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define lpi(i,a,b) for(ll i=a;i<b;i++)
#define lpir(i,a,b) for(int i=a;i>=b;i--)
#define lpl(i,a,b) for(ll i=a;i<b;++i)
#define lplr(i,a,b) for(ll i=a;i>=b;--i)
#define lpv(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
using namespace std;
typedef long double ld ;
typedef long long int ll;
int main()
{
	ll n,i,m,d,r,ma=0;
	cin>>n>>m;
	ll a[n];
	lpi(i,0,n)
	{
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	d=ma+m;
	lpi(i,0,n)
	{
		if(!m)
		{
			cout<<ma<<" "<<d;
			return 0;
		}
		r=min(m,-a[i]+ma);
		m-=r;
		a[i]+=r;
	}
	r=ceil((m*1.0)/n);
	cout<<ma+r<<" "<<d;
	return 0;
}