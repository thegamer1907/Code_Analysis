#define _CRT_SECURE_NO_WaRNINGS
#include<bits/stdc++.h>
using namespace std;
const double PI = acos(-1.0);
const double EPS = (1e-9);
typedef long long ll;
#define flush fflush(stdout), cout.flush()
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define clr(v,idx) memset(v,idx,sizeof(v))
#define rep(i,n) for(int(i)=0;(i)<(int)(n);(i)++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define endl '\n'
//const ll dx[] = {1,-1,0,0,1,-1,1,-1};
//const ll dy[] = {0,0,1,-1,1,-1,-1,1};
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}

ll dp[2002][22];
int n,m;
vll v,cum;

ll rnd(ll  x){
	return ((x+5)/10)*10;
}

int main(int argc, char const *argv[])
{
	file();
	
	int n;cin>>n;
	
	vi v(n),pos(n);
	
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i],pos[i]=v[i];
		
		if(i)pos[i]+=pos[i-1];
	}
	
	int ans=0;
	
	for (int i = 0; i < n; ++i)
	{
		
		for (int j = i; j < n; ++j)
		{
			int x=0;
			
			x+=(i?pos[i-1]:0)+pos[n-1]-pos[j]+j-i+1-(pos[j]-(i?pos[i-1]:0));
			
			ans=max(ans,x);
		}
	}
	cout<<ans;
}