#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int n , m , k , cnt = 0 , tmp_del = 0;
	cin >> n >> m >> k;
	set <int> s;
	for(int i = 0; i < m;i++) {
		int now;
		cin >> now;
		s.insert(now);
	}
	while(s.size() != 0) {
		cnt++;
		int now_page = (*s.begin() - tmp_del - 1) / k;
		now_page++;
		auto it = upper_bound(s.begin() , s.end() , k * now_page + tmp_del);
		int for_what = *it;
		while(*s.begin() < for_what && s.size() != 0) {
			s.erase(s.begin());
			tmp_del++;
		}
	}
	cout << cnt;
}