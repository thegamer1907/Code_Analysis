#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const int MAX = 1e7 + 5;
vector<int> primes;
bool prime[MAX];

void sieve() {
	memset(prime, true, sizeof prime);
	primes.push_back(2);
	ll i = 3;
	for(; i * i < MAX; i += 2) {
		if(prime[i]) {
			primes.push_back(i);
			for(ll j = i * i; j < MAX; j += 2 * i) {
				prime[j] = false;
			}
		}
	}

	for(; i < MAX; i += 2) {
		if(prime[i]) {
			primes.push_back(i);
		}
	}
}

int app[MAX];
int n, arr[MAX];
ll total[MAX];

int main() {
	sieve();
	
	scanf("%d", &n);
	fori(i, 1, n + 1) {
		scanf("%d", arr + i);
		app[arr[i]]++;
	}

	for(auto &each : primes) {
		for(int j = each; j < MAX; j += each) {
			total[each] += app[j];		
		}
	}
	
	fori(i, 1, MAX) {
		total[i] += total[i - 1];
	}

	int m;
	scanf("%d", &m);
	fori(i, 0, m) {
		int l, r;
		scanf("%d %d", &l, &r);
		if(l >= MAX) {
			puts("0");
		}
		else {
			r = min(r, MAX - 1);
			printf("%lld\n", total[r] - total[l - 1]);
		}
	}

	return 0;
}

