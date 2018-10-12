#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define pt pair<ll,ll>
#define vc vector

#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define x first
#define y second

#define mp make_pair
#define pb push_back

#define sz(a) int((a).size())
#define all(a) (a).begin(),(a).end()


using namespace std;
ll gcd(ll a,ll b)
{
	if(a>b) swap(a,b);
	if(a == 0) return b;
	return gcd(b%a,a);
}
bool compare(ll a, ll b)
{
	return a>b;
}
bool compare_str(string s1,string s2)
{
	return sz(s1)<sz(s2);
}
void dfs(vc<vc<ll>>&graph,vc<bool> &visited,ll v)
{
	visited[v] =true;
	for(ll i:graph[v])
	{
		if(!visited[i])
		{
			dfs(graph,visited,i);
		}
	}
}
int main()
{
	boost;
	ll n;
	cin>>n;
	vc<ll> arr(n);
	ll mini = INT_MAX;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		mini = min(mini,arr[i]);
	}
	for(ll i =0;i<n;i++)
	{
		arr[i]-=mini;
	}
	ll index = mini%n;
	ll sum = 0;
	ll count = 0;
	for(ll i = index;i<n; i=(i+1)%n)
	{
		if(arr[i]-sum<=0)
		{
			cout<<(i+1)<<endl;
			return 0;
		}
		sum++;
	}
	return 0;
}