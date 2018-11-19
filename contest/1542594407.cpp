#include <bits/stdc++.h>
#ifdef TOPOLOGY
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
using namespace std;

string pass;
vector<string> bark;
int n;

int main() {
	cin >> pass >> n;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		bark.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			string tr = bark[i] + bark[j];
			for (int k = 0; k < 3; k++) {
				if (pass[0] == tr[k] && pass[1] == tr[k + 1]) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}