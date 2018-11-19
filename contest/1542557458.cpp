#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5 + 5;
const int K = 20 + 5;
const ll inf64 = 1e18;

int a[N], L, R;
ll d[K][N], fo;
int b[N];

void add(int x) {
	if ( x == 0 )
		return;
	fo += b[x];
	b[x]++;
}
void sub(int x) {
	if ( x == 0 )
		return;
	b[x]--;
	fo -= b[x];
}
void moveL(int tl) {
	while(tl < L) add(a[--L]);
	while(tl > L) sub(a[L++]);
}
void moveR(int tr) {
	while(R < tr) add(a[++R]);
	while(R > tr) sub(a[R--]);
}

int main() {
	int n, k;
	scanf("%d%d",&n,&k);
	for(int i = 1; i <= n; ++i) {
		scanf("%d",&a[i]);
	}
	for(int i = 1; i < N; ++i) 
		d[0][i] = inf64;
	for(int lvl = 1; lvl <= k; ++lvl) {
		queue<tuple<int, int, int, int>> q;
		q.emplace(1, n, 0, n - 1);
		while(!q.empty()) {
			int s, e, l, r;
			tie(s, e, l, r) = q.front();
			q.pop();
			if ( s > e ) 
				continue;
			int m = s + e >> 1;
			d[lvl][m] = inf64;
			moveR(m);
			int p = -1;
			for(int i = l; i <= r && i < m; ++i) {
				moveL(i + 1);
				ll t = d[lvl - 1][i] + fo;
				if ( t < d[lvl][m] ) { 
					d[lvl][m] = t;
					p = i;
				}
			}
			assert(p != -1);
			q.emplace(s, m - 1, l, p);
			q.emplace(m + 1, e, p, r);
		}
	}
	cout << d[k][n] << endl;
	
	return 0;
}