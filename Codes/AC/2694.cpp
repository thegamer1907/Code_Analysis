#include <iostream>
#include <vector>

using namespace std;

vector<int> z_func(string s) {
	int n = s.size();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; i++) {
		if (i <= r)
			z[i] = min(r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			z[i]++;
		if (i + z[i] - 1 > r) {
			l = i;
			r = i + z[i] - 1;
		}
	}
	return z;
}

vector<vector<int> > v;

int main() {
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	vector<int> zFunc = z_func(s), pref(s.size() + 1, 0);
	vector<vector<int> > v(s.size());
	for (int i = 0; i < s.size(); i++)
		v[zFunc[i]].push_back(i);
	for (int i = s.size() - 1; i; i--)
		pref[i] = pref[i + 1] + v[i].size();
	for (int i = s.size() - 1; i; i--) {
		if (!v[i].size()) continue;
		if (v[i].back() + i == s.size() && pref[i] - 1) {
			cout << s.substr(v[i].back(), i);
			exit(0);
		}
	}
		
	cout << "Just a legend";
	
	return 0;
}