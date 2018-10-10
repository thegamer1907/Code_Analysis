#include <bits/stdc++.h>

using namespace std;

#define REP(i, n)                 for(int i(0); i <  (n); ++i)
#define rep(i, a, b)              for(int i(a); i <= (b); ++i)
#define dec(i, a, b)              for(int i(a); i >= (b); --i)
#define for_edge(i, x)            for(int i = H[x]; i; i = X[i])


string s;
int a[1010], b[1010];
int n, m, cnt;
map <string, int> mp;

int main(){
#ifndef ONLINE_JUDGE
	freopen("test.txt", "r", stdin);
	freopen("test.out", "w", stdout);
#endif

	scanf("%d%d", &n, &m);
	cnt = 0;
	rep(i, 1, n){
		cin >> s;
		if (!mp[s]) mp[s] = ++cnt, a[i] = cnt;
		else a[i] = mp[s];
	}

	rep(i, 1, m){
		cin >> s;
		if (!mp[s]) mp[s] = ++cnt, b[i] = cnt;
		else b[i] = mp[s];
	}

	puts(n > m - (n + m - cnt) % 2 ? "YES" : "NO");
	return 0;

}



