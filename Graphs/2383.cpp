#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

typedef map<ll,ll> M;
#define MEM(a, b) memset(a, (b), sizeof(a)) //fill value
#define FI(i, j, k, in) for (int i=j ; i<k ; i+=in) //from j till k increment by in FOR INT
#define fl(i, j, k, in) for (long long int i=j ; i<k ; i+=in) //from j till k increment by in FOR LL
#define fll(i, j, k) for (long long int i=j ; i<k ; i+=1) //from j till k increment by in FOR LL
#define FULL(i, j, k, in) for (unsigned long long int i=j ; i<k ; i+=in) //from j till k increment by in FOR ULL
#define pb(x) push_back(x)
ll inf=pow(10,14);
vector<ll> adj[2005];
ll dfs(ll curr,ll prev=-1)
{
    ll depth=0;
    fll(i,0,adj[curr].size())
    {
        ll val=adj[curr][i];
        if(val!=prev)
        {
            depth=max(depth,dfs(val,curr));
        }
    }
    return depth+1;
}
int main() {
	
	// your code here
	ll n;
	cin>>n;
	vector<ll> root;
	fll(i,1,n+1)
	{
	    ll x;
	    cin>>x;
	    if(x==-1)
	    {
	        root.pb(i);
	        continue;
	    }
	    adj[x].pb(i);
	    adj[i].pb(x);
	}
	ll res=0;
	fll(i,0,root.size())
	res=max(res,dfs(root[i]));
	cout<<res<<endl;
	

	
	
	
	
	
	
	return 0;
}