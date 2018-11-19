#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
#define MOD 1000000007
#define MAX 20000002


void solve()
{
  ll n,k;
  cin>>n>>k;
  vector<string> v;
  for(ll i=0;i<n;i++)
  {
  	string s="";
  	for(ll j=0;j<k;j++)
  	{
  		char c;
  		cin>>c;
  		s = s+c;
  	}
  	for(ll j=k;j<4;j++) s = s+'0';
  	v.push_back(s);
  }
  if(n==1)
  {
  	for(ll i=0;i<k;i++)
  	{
  		if(v[0][i]=='1')
  		{
  			cout<<"NO\n";
  			return;
  		}
  	}
  	cout<<"YES\n";
  	return;
  }
  bool dp[2][2][2][2] = {0};
  dp[v[0][0]-'0'][v[0][1]-'0'][v[0][2]-'0'][v[0][3]-'0']=1;
  for(ll i=1;i<n;i++)
  {
  	ll x[4][2];
  	for(ll j=0;j<4;j++)
  	{
  		if(v[i][j]=='0')
  		{
  			x[j][0]=0;
  			x[j][1]=1;
  		}
  		else x[j][0] = x[j][1]= 0;
  	}
  	for(ll j=0;j<16;j++)
  	{
  		ll y[4];
  		ll num = j;
  		for(ll k=0;k<4;k++)
  		{
  			y[k] = num%2;
  			num/=2;
  		}
  		if(dp[x[0][y[0]]][x[1][y[1]]][x[2][y[2]]][x[3][y[3]]])
  		{
  			cout<<"YES\n";
  			return;
  		}
  	}
  	dp[v[i][0]-'0'][v[i][1]-'0'][v[i][2]-'0'][v[i][3]-'0'] = 1;
  }
  cout<<"NO\n";
}

int main()
{
  ll t=1;
  for(ll i=1;i<=t;i++) solve();
} 
