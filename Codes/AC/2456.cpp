#include <bits/stdc++.h>
#define long long long 
#define input() (*istream_iterator<int>(cin))
#define P pair<int, int>
#define x first
#define y second
#define mem(x) memset(x, 0, sizeof x)
using namespace std;

void red() {
#ifdef INPUT
	freopen("r", "r", stdin);
#endif
	cin.sync_with_stdio(false);
}

const int MAXN = 1e7;
int A[MAXN+5];
int B[MAXN+5];
bool sieve[MAXN+5];

int main() {
	red();
	int n;
	scanf("%d", &n);
	int on = n;
	while(n--) {
		int now;
		scanf("%d", &now);
		A[now]++;
	}	
	for(int i = 2; i <= MAXN; ++i) {
		if(sieve[i]) continue;
		for(int j = i; j <= MAXN; j += i) {
			sieve[j] = true;
			B[i] += A[j];
		}
	}
	for(int i = 1; i <= MAXN; ++i) B[i] += B[i-1];
	int m;
	scanf("%d", &m);
	while(m--) {
		int a, b;
		scanf("%d%d", &a, &b);
		if(a > MAXN) a = MAXN;
		if(b > MAXN) b = MAXN;
		assert(printf("%d\n", B[b] - B[a-1]));
 	}
}