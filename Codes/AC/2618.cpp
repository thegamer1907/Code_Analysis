#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<cstring>
#include<ctime>
#include<bitset>
#include<functional>
#include<cmath>
#include<stack>
#define ll long long int
#define ull unsigned long long int
#define set0(ar) memset(ar, 0, sizeof(ar))
using namespace std;

const int MAXN = 1e7 + 100;
int ar[MAXN], c[MAXN];
ll sum[MAXN];
bool comp[MAXN];
vector<int> primes;

int main() {
#pragma warning(disable : 4996)
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#define __builtin_popcount __popcnt
#endif
	int n, m;
	scanf("%d", &n);

	for (ll i = 2; i < MAXN; i++) {
		if (!comp[i]) {
			for (ll j = i * i; j < MAXN; j += i) {
				comp[j] = 1;
			}
		}
	}

	for (int i = 2; i < MAXN / i; i++) {
		if (!comp[i])
			primes.push_back(i);
	}

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		c[a]++;
	}

	for (int i = 0; i < MAXN; i++) {
		if (c[i] == 0)
			continue;
		int a = i;
		for (int j = 0; primes[j] <= a / primes[j] && comp[a]; j++) {
			if (a % primes[j] == 0) {
				ar[primes[j]] += c[i];
				while (a % primes[j] == 0)
					a /= primes[j];
			}
		}
		if (!comp[a])
			ar[a] +=c[i];
	}

	for (int i = 0; i < MAXN; i++) {
		sum[i] = sum[i - 1] + ar[i];
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int l, r;
		scanf("%d%d", &l, &r);
		r = min(r, (int)1e7);
		l = min(r, l);
		printf("%lld\n", sum[r] - sum[l - 1]);
	}


	return 0;
}