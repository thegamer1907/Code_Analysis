

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef long double LD;
typedef vector<int> vi;
typedef vector<long long> vl;

const int MOD = 1000000007;
const int N = 100005;
const int M = 1000005;

#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pi(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define pspace printf(" ")
#define pline printf("\n")
#define _for(i,a,n) for(int i=a; i<n; i++)
#define _rfor(i,a,n) for(int i=n-1; i>=a; i--)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()

vector<int> a[N];
bool vis[N];

void dfs(int x) {
	vis[x]=true;
	for(int i=0; i<a[x].size(); i++) {
		if(!vis[a[x][i]]) {
			dfs(a[x][i]);
		}
	}
}


int main() {
	int n,t;
	cin>>n>>t;
	for(int i=1; i<n; i++) {
		int x;
		cin>>x;
		a[i].push_back(x+i);
	}
	dfs(1);
	if(vis[t]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}


