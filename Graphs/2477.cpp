/***** TheAnshul *****/

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vii         vector<pair<ll int, ll int>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  100005

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll n,x;
		cin>>n;
		vi a[n+1];
		rep(i,2,n+1)
		{
			cin>>x;
			a[x].pb(i);
			a[i].pb(x);
		}
		vi v(n+1,0);
		vi col(n+1);
		
		rep(i,1,n+1)
		cin>>col[i];
		col[0]=hell;
		queue<pii> q;
		ll ans=0;
		pii par;
		bool vis[n+1]={0};
		q.push({1,0});
		vis[1]=1;
		while(!(q.empty()))
		{
			par=q.front();
			q.pop();
			if(v[par.S]!=col[par.F])
			{
				v[par.F]=col[par.F];
				ans++;		
			}
			v[par.F]=col[par.F];
			for(auto i : a[par.F])
			{
				if(!vis[i])
				{
					vis[i]=1;
					q.push({i,par.F});
				}
			}
		}
		cout<<ans;
	}
	return 0;
}