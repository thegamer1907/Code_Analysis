#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	
	cin >> n >> m;
	
	multiset <int> a;
	
	int el;
	
	for (int i = 0; i < n; i++) {
		cin >> el;
		a.insert(el);
	}
	
	int _max = *a.rbegin() + m;
	
	while (m) {
		int q = *a.begin();
		a.erase(a.begin());
		a.insert(q + 1);
		m--;
	}
	
	cout << *a.rbegin() << ' ' << _max;
	
	return 0;
}
