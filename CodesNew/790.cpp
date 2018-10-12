#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n,m; cin >> n >> m;
	set<string> words;
	for (int i = 0; i < n; ++i) {
		string in; cin >> in;
		words.insert(in);
	}
	
	for (int i = 0; i < m; ++i) {
		string in; cin >> in;
		words.insert(in);
	}
	
	int combined = (n + m) - words.size();
	if (combined % 2) m--;
	if (n > m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}