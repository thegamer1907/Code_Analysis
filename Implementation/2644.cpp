#include <bits/stdc++.h>

#define FI first
#define SE second

typedef long long ll;
typedef std::pair<ll,ll> pairll;

const static ll INF = 0x3f3f3f3f3f3f3f3f;

static inline void setio(void);

int main(void) {
	setio();

	ll a, b, c; std::cin >> a >> b >> c;

	ll ans = 0;
	ans = std::max(ans, a + b + c);
	ans = std::max(ans, a * (b+c));
	ans = std::max(ans, (a+b) * c);
	ans = std::max(ans, a + b * c);
	ans = std::max(ans, a * b + c);
	ans = std::max(ans, a * b * c);

	std::cout << ans << "\n";

	// std::cerr << static_cast<double>(clock())/CLOCKS_PER_SEC << "\n";

	return 0;
}

static inline void setio(void) {
	std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
	std::cout.precision(10); std::cout << std::fixed;
}
