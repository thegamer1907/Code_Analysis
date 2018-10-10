#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
#define mapcl map<char,ll>
#define mapll map<ll,ll>
#define cmp complex<double>
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define inf LLONG_MAX
void fast(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef long long ll;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n+1][m+1],b[n+1][m+1];
	ll i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i>0 && j>0)
			cin>>a[i][j];
			b[i][j]=0;
			if(j==0)
			b[i][j]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i==1)
			{
				b[i][j]=1;
				continue;
			}
			if(a[i][j]>=a[i-1][j])
			b[i][j]=b[i-1][j]+1;
			else
			b[i][j]=1;
			b[i][0]=max(b[i][0],b[i][j]);
		}
	}
	ll k;
	cin>>k;
	while(k--)
	{
		ll x,y;
		cin>>x>>y;
		ll num=y-x+1;
		if(b[y][0]>=num)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
