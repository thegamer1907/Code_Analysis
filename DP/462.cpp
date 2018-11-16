#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define sz(a) (ll)((a).size())
#define tr(container,it) for(typeof(container.begin())it=container.begin();it!=container.end();it++)
#define MOD 1000000007

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

ll dp[500][500];

int main()
{
	ll n,m;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++) cin>>a[i];

	cin>>m; vector<ll> b(m);
	for(ll i=0;i<m;i++) cin>>b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	ll flg=0;

	for(ll i=0;i<m;i++)
	{
		ll tp=abs(b[i]-a[0]);
		if(tp<=1){flg=1;}
		if(flg){dp[0][i]=1;}
		else dp[0][i]=0;
	}

	flg=0;
	
	for(ll i=0;i<n;i++)
	{
		if(abs(a[i]-b[0])<=1) flg=1;
		if(flg) dp[i][0]=1;
		else dp[i][0]=0;
	}


	for(ll i=1;i<n;i++){
		for(ll j=1;j<m;j++)
		{
			if(abs(a[i]-b[j])<=1) dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
		}
	}
	
	
	cout<<dp[n-1][m-1]<<"\n";



	return 0;
}