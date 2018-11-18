#include <bits/stdc++.h>
#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
const int MOD = 1e9 + 7;
int main() {
	std :: ios_base :: sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string pwd;
	cin >> pwd;
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; ++i)
		cin >> s[i];
	for(int i = 0; i < n; ++i) {
		if(s[i] == pwd) {
			cout << "YES" << endl;
			return 0;
		}
		if(pwd[1] == s[i][0]) {
			for(int j = 0; j < n; ++j)  {
				if(s[j][1] == pwd[0])  {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
		if(pwd[0] == s[i][1]) {
			for(int j = 0; j < n; ++j) {
				if(s[j][0] == pwd[1]) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
}
