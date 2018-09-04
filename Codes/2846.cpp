#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
const int N = 1e6 + 6;
const ll A = 911382323;
const ll base = 972663749;

int n;
ll p[N], h[N];

int main() {
	string s; cin >> s;
	n = s.size();

	//Calculating powers of A
	p[0] = 1;
	for(int i = 1; i <= n; ++i) p[i] = (p[i - 1] * A) % base;

	//Calculating hash of string s
	h[1] = s[0];
	for(int i = 1; i < n; ++i) h[i + 1] = (h[i] * A + s[i]) % base;

	//Vector for storing the length of all borders
	vector<int> vec;
	for(int len = n - 1; len >= 1; len--) {
		ll h1 = (h[n] - h[n - len] * p[len]) % base;
		if(h1 < 0) h1 += base;
		ll h2 = h[len];
		if(h1 == h2) vec.emplace_back(len); 
	}

	for(int len: vec) {
		for(int i = len + 1; i < n; ++i) {
			ll z = (h[i] - h[i - len] * p[len]) % base;
			if(z < 0) z += base;
			if(z == h[len]) return cout << s.substr(0, len) << endl, 0;
		}
	}
	cout << "Just a legend\n";
}