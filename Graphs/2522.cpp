/********************************************************
 *    #####   #    #    ##     ####    #   #    ##      *
 *    #    #  #    #   #  #   #    #    # #    #  #     *
 *    #####   ######  #    #  #          #    #    #    *
 *    #    #  #    #  ######  #  ###     #    ######    *
 *    #    #  #    #  #    #  #    #     #    #    #    *
 *    #####   #    #  #    #   ####      #    #    #    *
 ********************************************************/

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  10005

ll int vis[N]={0},col[N];
vi a[N];

ll int dfs(ll node,ll int c)
{
	vis[node]=1;
	ll int cnt=(c!=col[node]);
	for(auto i:a[node])
	if(!vis[i])
	cnt+=dfs(i,col[node]);
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll int n;
		cin>>n;
		for(ll int i=2;i<=n;i++)
		{
			ll int tmp;
			cin>>tmp;
			a[i].pb(tmp);
			a[tmp].pb(i);
		}
		for(ll int i=1;i<=n;i++)
		{
			cin>>col[i];
		}
		cout<<dfs(1,0);
	}
	return 0;
}