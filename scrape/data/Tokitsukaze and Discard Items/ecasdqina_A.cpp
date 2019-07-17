#include <bits/stdc++.h>
using namespace std::literals::string_literals;
using i64 = long long;
using std::cout;
using std::endl;
using std::cin;

template<typename T>
std::vector<T> make_v(size_t a){return std::vector<T>(a);}

template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
  return std::vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}

int main() {
	i64 n, m, k; scanf("%lld%lld%lld", &n, &m, &k);
	std::vector<i64> a(m);
	for(int i = 0; i < m; i++) {
		scanf("%lld", &a[i]);
		a[i]--;
	}
	sort(begin(a), end(a));
	
	int cur = 0, ans = 0;
	while(cur < a.size()) {
		i64 sub = cur, block = (a[cur] - cur) / k;
		while(cur < a.size() and (a[cur] - sub) / k == block) cur++;
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}