#include <bits/stdc++.h>

#define ll long long
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define vi vector<int>
#define vl vector<long long>
#define sz size()
#define x first
#define y second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ld long double

using namespace std;

int n;
string pas;
string a[200];

int main() {
	cin >> pas;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for(int i = 1; i <= n; i++) {
		if(a[i] == pas) {
			cout << "YES\n";
			return 0;
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			string to = a[i] + a[j];
			to = to.substr(1, 2);
			
			if(to == pas) {
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO\n";
	return 0;
}