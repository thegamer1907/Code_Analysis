#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-9;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int MAXN = 1e7 +1 ;
const int limP = 664579 + 5;
bitset <MAXN> is_composite;
bitset <MAXN> isprime;
int P = 0;
int prime[limP];

void sieve (const int n = MAXN) {
	for (int i = 2; i < n; ++i) {
        isprime[i] = !is_composite[i];
		if (!is_composite[i]) prime[P++] = i;
		for (int j = 0; j < P && i * prime[j] < n; ++j) {
			is_composite[i * prime[j]] = true;
			if (i % prime[j] == 0) break;
		}
	}
}

int reps[MAXN + 5];
ll acums[limP + 5];

ll query(int n) {
    int pos = upper_bound(prime, prime+P, n) - prime -1;
    if(pos < 0) return 0 ;
    return acums[pos];
}


int main() {
    sieve();
    int N ;
    scanf("%d", &N);
    for(int i=0, a; i<N; i++) {
        scanf("%d", &a);
        reps[a] ++;
    }

    for(int i=0, p; i<P; i++) {
        p = prime[i];
        ll &w = acums[i];
        if(i)
            w += acums[i-1];
        for(int j=p; j<MAXN; j += p)
            w += reps[j];
    }

    int Q ;
    scanf("%d", &Q);
    for(int i=0, l, r; i<Q; i++) {
        scanf("%d%d", &l, &r);
        printf("%lld\n", query(r) - query(l-1));
    }
}
