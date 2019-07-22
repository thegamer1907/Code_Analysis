#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first.first
#define S first.second
using namespace std;

const ll N=1000006, M=10004, INF=1e18, MOD=1e9+7;
long long n, m, k, t, u, ans, a[N];
vector <pair<pair<int, int>, int> > v[N];
string s[4];

int main() { ios_base::sync_with_stdio(false);
	cin>>n>>m>>k; t=k;
	for (int i=1; i<=m; i++)
		cin>>a[i];
	for (int i=1; i<=m; ){
		while(a[i]>k && i<=m)k+=t;
		
		while(a[i]<=k && i<=m)u++, i++; 
		ans++;
		k+=u;
		u=0;
		
	}
	cout<<ans;
	
	return 0;
}