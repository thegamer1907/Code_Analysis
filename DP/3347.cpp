#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
#define FOR(i, N) for (int i = 0; i < N; ++i)
#define FORN(i, j, N) for (int i = j; i < N; ++i)
#define MAXN 1000009
#define INF 1e12
#define EPS 1e-9
#define PMOD(a) (a % INF + INF) % INF
#define push_back pb
#define MOD 1000000007

int N;
string s1, s2;
int z[MAXN];

void zfunction (string s, int* z) {
	int n = s.size();
	fill(z, z+n, 0);
	for (int i=1, l=0, r=0; i<n; ++i) {
		if (i <= r)
			z[i] = min(r-i+1, z[i-l]);
		while (i+z[i] < n && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i+z[i]-1 > r)
			l = i,  r = i+z[i]-1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin>>s;
	N = s.size();
	zfunction(s, z);
	int ans = 0, lb = 0, lc = 0;
	
	FORN(i, 1, N){
		lb = max(lb, min(N - i - 1, z[i]));
	}
	FORN(i, 1, N){
		if (i + z[i] == N){
			lc = z[i];
			if (lb >= lc) ans = max(ans, lc);
		}
	}
	if (ans) cout<<s.substr(0, ans)<<'\n';
	else cout<<"Just a legend";
}