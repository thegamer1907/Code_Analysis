#include <bits/stdc++.h>

using namespace std;

const int N = 1000007; //10e6

#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define all(x) (x).begin(), (x).end()

ll cnt[10000057];
bool prime[10000057];
vector <int> primes;

void SieveOfEratosthenes(int n) {

	for (int i = 2; i < 10000009; i++) {
		prime[i] = true;
	}
 
    for (int p=2; p*p<=n; p++) {
        if (prime[p]) {
            for (int i=p*2; i<=n; i += p) {
                prime[i] = false;
            }
        }
    }
 
    for (int p=2; p<=n; p++) {
       if (prime[p]) primes.pb(p);
    }
}

void primeFactors(int n) {
    bool flag = false;
    while (n % 2 == 0) {
        if (!flag) {
        	cnt[2]++;
        	flag = true;
        }
        n /= 2;
    }
 
    for (int i = 3; i <= sqrt(n); i += 2) {
	    flag = false;
        while (n % i == 0) {
            if (!flag) {
            	cnt[i]++;
            	flag = true;
            }
            n /= i;
        }
        if (n == 1) break;
    }

    if (n > 2) cnt[n]++;
}

void primeFactors2(int n) {
    bool flag = false;
 
 	int sqr = sqrt(n);
    for (int i = 0; i < primes.size() && primes[i] <= sqr; i++) {
	    flag = false;
        while (n % primes[i] == 0) {
            if (!flag) {
            	cnt[primes[i]]++;
            	flag = true;
            }
            n /= primes[i];
        }
        if (n == 1) break;
    }

    if (n > 1) cnt[n]++;
}

int main() {
	int n;

	SieveOfEratosthenes(10000003);

	scanf("%d", &n);

	int x;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		primeFactors2(x);
		// printf("%d %d\n", x, cnt[2]);
	}

	for (ll i = 3; i < 10000005; i++) {
		cnt[i] += cnt[i-1];
	}

	int m;

	scanf("%d", &m);

	int l, r;
	for (ll i = 0; i < m; i++) {
		scanf("%d %d", &l, &r); 
		
		if (r > 10000003) r = 10000003;
		if (l > 10000003) l = 10000003;

		printf("%lld\n", cnt[r] - cnt[l-1]);
	}

	return 0;
}