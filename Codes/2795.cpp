#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

string s;
int z[N],mx;

int main() {
	ios_base::sync_with_stdio(false);	cin.tie(0);
	cin >> s;
	int l = 0, r = 0;
	for (int i = 1;i < s.size();++i) {
		if (i > r || z[i - l] >= r - i + 1) {
			r = max(r + 1, i), l = i;
			while(r < s.size() && s[r] == s[r - l]) ++r;
			z[i] = r - l, --r;
		}
		else z[i] = z[i - l];
	}
	mx = 0;
	for (int i = 1;i < s.size();++i) {
		if (i + z[i] == s.size() && z[i] <= mx) return cout << s.substr(0,z[i]) << endl,0;
		mx = max(mx, z[i]);
	}
	cout << "Just a legend" << endl;
}