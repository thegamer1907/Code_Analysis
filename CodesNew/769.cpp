#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAXN 1010

const int mod = 1e9 + 7;
const ll INF = 1e18;


string a[MAXN], b[MAXN];
set<string> s1, s2;

int main()
{
 	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i], s1.insert(a[i]);
	for (int i = 1; i <= m; ++i)
		cin >> b[i], s2.insert(b[i]);
	
	int k = 0;
	for (int i = 1; i <= n; ++i)
		if (s2.count(a[i])) ++k;
	
	n -= k, m -= k;
	if (k & 1) puts(n >= m? "YES":"NO");
	else puts(n > m? "YES":"NO");
	
	
	return 0;
}