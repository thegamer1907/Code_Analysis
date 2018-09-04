#include <bits/stdc++.h>

typedef long long ll;

std::vector<ll> recipe(3);
std::vector<ll> already_has(3);
std::vector<ll> prices(3);
ll funds;

static ll go(const ll& goal) {
	ll tmp = funds;
	for (ll i = 0; i < recipe.size(); ++i) {
		tmp -= prices[i] * std::max(0LL, (recipe[i] * goal - already_has[i]));
	}
	return tmp;
}

int main(void) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s;
	std::cin >> s;

	for (auto& e : already_has)
		std::cin >> e;

	for (auto& e : prices)
		std::cin >> e;

	std::cin >> funds;

	for (const auto& c : s)
		recipe[c == 'B' ? 0 : c == 'S' ? 1 : 2]++;



	ll lo = 0;
	ll hi = 1'000'000'000'001LL;

	while (lo + 5 < hi) {
		ll mid = lo + (hi-lo>>1);
		ll ret = go(mid);

		if (ret < 0)
			hi = mid;
		else if (ret > 0)
			lo = mid;
		else
			break;
	}

	for (;;) {
		if (go(lo+1) >= 0)
			++lo;
		else
			break;
	}

	std::cout << lo << "\n";

	return 0;
}
