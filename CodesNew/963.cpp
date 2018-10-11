#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	unordered_set<string> set;
	set.max_load_factor(0.25);
	set.reserve(n + m);
	for (int i = 0; i < n + m; i++) {
		string s;
		cin >> s;
		set.insert(s);
	}
	int k = n + m - set.size();
	cout << (n + k % 2 > m ? "YES" : "NO") << endl;
	return 0;
}
