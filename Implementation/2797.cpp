#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	
	string str; cin >> str;
	int up = 0, low = 0;
	
	for (char e : str) {
		if (isupper(e)) {
			up++;
		} else {
			low++;
		}
	}
	for (char e : str) {
		if (up > low) {
			cout << (char)toupper(e);
		} else {
			cout << (char)tolower(e);
		}
	}
}
