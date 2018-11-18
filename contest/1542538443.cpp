#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("in","r",stdin);
	// freopen("out", "w", stdout);
	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h *= 5;
	m += s/60;
	h += m/12;
	t1 *= 5;
	t2 *= 5;
	double arr[] = {h, m, s, t1, t2};
	sort(arr, arr + 5);
	int i1 = distance(arr, find(arr, arr + 5, t1));
	int i2 = distance(arr, find(arr, arr + 5, t2));
	if(i1 > i2) {
		swap(i1, i2);
	}
	if(i1 + 1 == i2 || (i2 + 1) % 5 == i1) cout << "YES\n";
	else cout << "NO\n";
}