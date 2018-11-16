#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define mp make_pair

const int N = 107, inf = 0x3f3f3f3f;

using namespace std;
typedef long long ll;

int v[N];
int memo[N][N];
int n, b;

int solve(int p, int b) {
	int & st = memo[p][b];
	if(p == n) return 0;
	
	if(st == -1) {
		st = 0;
		
		int tot = 0;
		for(int i = p; i < n; ++i) {
			if(v[i]%2) tot++;
			else tot--;
			
			if(i < n-1 and tot == 0 and b >= abs(v[i+1] - v[i])) st = max(st, 1 + solve(i+1, b - abs(v[i+1] - v[i]))); 
		} 
		
		if(tot != 0 and st == 0) st = -inf;
	}
	return st;
}

int main() {
	ios::sync_with_stdio(false);
	memset(memo, -1, sizeof memo);
	
	cin >> n >> b;
	
	for(int i = 0; i < n; ++i) cin >> v[i];
	cout << solve(0, b) << endl;
}
