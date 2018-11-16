#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define mp make_pair
#define bs binary_search
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(n) ((int) (n).size())
using namespace std;
typedef long long ll;       
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b,a%b); } 
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }          
int n,t;
int visited[100000];
vector < int >g[100000];

void dfs(int i){
	visited[i] = 1;
 	for (auto x:g[i]) {
		if (!visited[x]) {
			dfs(x);
		}
	}
}
int main(){FIN;
	cin >> n >> t;
	int a[n];
	fore(i,0,n-1){
		cin>>a[i];
		g[i+1].pb(a[i]+i+1);	
	}
	dfs(1);
	if(!visited[t])cout<<"NO";
	else cout << "YES";
	return 0;
	
}
