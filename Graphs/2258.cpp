/*
 =============================================================================
 Life is a bunch of unexpected events !
 
 Code by:Vivek
 Singh
 College: NIT,Patna
 Batch: 2K15
 Handles:viv_nitp(codechef) & Steady_Bunny(hackerrank,codeforces)
 243470CB
 =============================================================================
 */
#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define ull unsigned long long
#define ll long long
#define mod 1000000007
#define mod2 1000000009L
#define f(i,n) for( ll (i)= 0;(i)<(n);(i)++)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lp pair<ll,ll>
#define mp make_pair
#define mt make_tuple
#define M_H priority_queue<ll ,vector<ll >,greater<ll > >
#define red 1;
#define black 0;
#define rep(i,j,n) for( ll (i)= j;(i)<(n);(i)++)
#define maxc 5000000
#define F first
#define S second
#define NUM 314159
#define maxn 1000001
#define PI 3.1415926535
#define root2 1.41421356237
#define inf 1000000000
#define LOG_WALA_FACTOR 100
#define ACTUAL_SIZE 10000
bool vis[100001];
vector<ll> gr[1000001],v;
ll dfs(ll i,ll lev){
	vis[i]=1;
	ll ans=1;
	for(auto it: gr[i])
		if(!vis[it])
		ans=max(ans,dfs(it,lev+1)+1);
	return ans;
}
int main() 
{
	faster;
	ll n;
	cin>>n;
	ll x,ans=0;

	f(i,n){
			 cin>>x;
			 if(x!=-1)
			 gr[x].push_back(i+1);
			 else 
			 v.push_back(i+1);	
		}
	
	for(auto i: v)
		ans=max(ans,dfs(i,0));
		
	cout<<ans;
}

