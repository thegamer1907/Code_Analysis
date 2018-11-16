#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vp;
typedef vector<pair<ll, ll>> vpl;
typedef vector<ll> vl;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr); 
	cerr.tie(nullptr);	

	int n, t;
	cin >> n >> t;

	vi a(n - 1);
	for (auto& i : a)
		cin >> i;

	int c = 1;
	while(c < n){
		c = c + a[c - 1];
		if (c == t)
			return cout << "YES\n", 0;
	}

	cout << "NO\n";
}