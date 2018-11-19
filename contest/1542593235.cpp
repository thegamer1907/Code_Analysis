#include "bits/stdc++.h"
#define fip ios_base :: sync_with_stdio(false);cin.tie(0)
using namespace std;
const int N = 2e5 + 1;

bool contains(string x , string y) {
	for(int i = 0; i <= 2; ++i) {
		string cur = "";
		cur += y[i];
		cur += y[i + 1];
		if(cur == x) {
			return 1;
		}
	}
	return 0;
}


int main() {
	fip;
	string tar;
	cin >> tar;
	int n;
	cin >> n;
	vector < string > v(n);
	for(int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			string res = v[i];
			res += v[j];
			if(contains(tar , res) ) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}

