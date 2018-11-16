#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define mk make_pair
#define f(i,n) for(i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define sqr(x) (x*x)
#define speed() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ct_set(n) __builtin_popcount(n) // count no of set bits
using namespace std;

vector<int> v[30005],v1;
bool visited[30005];
void dfs(int i)
{
	if(visited[i])
	return;
	visited[i]=true;
	v1.pb(i);
	for(ll j=0;j<v[i].size();j++)
	{
		dfs(v[i][j]);
	}
}
int main()
{
	speed()
    
		ll n,k;
		cin>>n>>k;
		ll a[n],i,j;
		vector<ll> :: iterator it;
		
		for(i=1;i<=n-1;i++)
		cin>>a[i];
		
		mem(visited,false);
		
		for(i=1;i<=n-1;i++)
		{
			v[i].pb(i+a[i]);
		}
		
		dfs(1);
		
		if(find(v1.begin(),v1.end(),k)!=v1.end())
		cout<<"YES\n";
		else
		cout<<"NO\n";
	

	return 0;
}