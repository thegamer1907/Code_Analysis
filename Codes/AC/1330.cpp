#include<bits/stdc++.h>
using namespace std;

int n, m;
string stra;
map<string, int> mapa;

int a, b, common;
int main() {
	cin >> n >> m;
	int tn = n;
	while (tn--) {
		cin >> stra;
		mapa[stra]++;
	}
	a = n;
	tn = m;
	while (tn--) {
		cin >> stra;
		if (mapa.find(stra) == mapa.end()) {
			b++;
		} else {
			common++;
			a--;
		}
	}
	common %= 2;
	if (a + common > b) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
