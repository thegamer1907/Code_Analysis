/*input
5
-1
1
2
1
-1

*/
/*
  ####   #    #    ##    #####    ####           #    #
 #       #    #   #  #   #    #  #    #          #    #
  ####   ######  #    #  #    #  #    #          #    #
      #  #    #  ######  #    #  #    #          # ## #
 #    #  #    #  #    #  #    #  #    #          ##  ##
  ####   #    #  #    #  #####    ####  #######  #    #

*/
#include<bits/stdc++.h>
#define lld          long long int
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<lld,lld>
#define msi         map<string,lld>
#define mis         map<lld, string>
#define mpi         map<pair<lld ,lld >,lld >
#define pii         pair<lld,lld>
#define vi          vector<lld>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (lld)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cerr << #x << " is " << x << endl;
using namespace std;
#define N  2005
vi v[N];
lld a[N];
bool vis[N];
lld pare[N];
inline void init()
{
	for(lld i=0;i<N;i++)
	{
		pare[i]=i;
		vis[i]=false;
	}
}
inline lld par(lld x)
{
	while(pare[x]!=x)
	{
		x=pare[x];
	}
	return x;
}
inline lld dfs(lld x)
{
	lld t=0;
	vis[x]=true;
	for(auto it: v[x])
	{
		if(!vis[it])
		{
			t=max(dfs(it),t);
		}
	}
	return (t+1);
}
inline void solve()
{
	init();
	lld n;
	cin>>n;
	set <lld> ss;
	for(lld i=0;i<n;i++)
	{
		lld x;
		cin>>x;
		if(x!=-1)
		{
			v[i+1].pb(x);
			v[x].pb(i+1);
			lld p=par(i+1);
			lld s=par(x);
			pare[p]=s;
		}
		else
		{
			ss.insert(i+1);
		}
	}
	lld group=0;
	for(lld i=1;i<=n;i++)
	{
		if(!vis[i] && ss.find(i)!=ss.end())
		{
			lld p=dfs(i);
			group=max(group,p);
		}
	}
	cout<<group<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tests=1;
	while(tests--)
	{
		solve();
	}
}