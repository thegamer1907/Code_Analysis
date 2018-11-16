#include <bits/stdc++.h>
 
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define lol        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
#define SIZE        1000005
#define debug(x)        cerr << #x << " = " << x << endl;

using namespace std;

void MOD(ll &x)
{
	if (x >= lol) x -= lol;
	if (x < 0) x += lol;
}


void solve()
{
	int t, k;
	cin>>t>>k;
	ll ans[100005] = {0};
	ll dp[100005] = {0};
	ans[0] = dp[0] = 1;
	rep(i,1,k)
	{
	    dp[i] = 1;
	    MOD(ans[i] = ans[i-1] + dp[i]);
	}
	
	rep(i,k,100001)
	{
	    MOD(dp[i] = dp[i-1] + dp[i-k]);
	    MOD(ans[i] = ans[i-1] + dp[i]);
	}
	
	
	
	while(t--)
	{
	    int l, r;
	    cin>>l>>r;
	    ll haha;
	    MOD(haha = ans[r]-ans[l-1]);
	    cout<<haha<<endl;
	}
	
	
	
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}