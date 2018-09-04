#include <bits/stdc++.h>

#define FI first
#define SE second

typedef long long ll;
typedef std::pair<ll,ll> pairll;

static inline void setio(void);

int main(void) {
	setio();

	ll n; std::cin >> n;
	std::vector<ll> freq(10000001);
	for (ll i = 0, tmp; i < n; ++i) {
		std::cin >> tmp;
		freq[tmp]++;
	}

	std::vector<char> sieve(freq.size(), true);
	std::vector<pairll> primes(1, {-1,0});

	for (ll i = 2; i < sieve.size(); ++i) {
		if (!sieve[i]) continue;
		primes.push_back({i, freq[i]});
		ll cnt = 0;
		for (ll j = i+i; j < sieve.size(); j += i) {
			sieve[j] = false;
			cnt += freq[j];
		}
		primes.back().SE += cnt;
		if (primes.size() > 1)
			primes.back().SE += primes[primes.size()-2].SE;
	}

	auto cmp = [](const pairll& a, const pairll& b){return a.FI < b.FI;};

	ll m; std::cin >> m;
	for (ll l, r; m--; ) {
		std::cin >> l >> r;

		auto lit = std::lower_bound(primes.begin(), primes.end(), std::make_pair(l, -1), cmp);
		auto rit = std::lower_bound(primes.begin(), primes.end(), std::make_pair(r, -1), cmp);

		if (rit != primes.end() && rit->FI > r)
			rit = std::prev(rit);
		if (lit != primes.end() && lit->FI >= l)
			lit = std::prev(lit);

		if (lit == primes.end()) {
			std::cout << "0\n";
		} else if (rit == primes.end()) {
			std::cout << (primes.back().SE - lit->SE) << "\n";
		} else {
			std::cout << (rit->SE - lit->SE) << "\n";
		}
	}

	return 0;
}

static inline void setio(void) {
	std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
	std::cout.precision(10); std::cout << std::fixed;
}
