#include <bits/stdc++.h>
using namespace std;

const int MN = 2e5 + 10;

int del[MN];
string s, p;

bool verifica(int k) {
	for(int i = 0, j = 0; i < s.size(); ++i) {
		if(del[i] >= k and s[i] == p[j]) j++;
		if(j == p.size()) return true;
	}
	return false;
}

int busca() {
	int l = 0, r = s.size() - 1, meio, ans;
	while(l <= r) {
		meio = (l + r) / 2;
		if(verifica(meio)) {
			ans = meio;
			l = meio + 1;
		}

		else {
			r = meio -1;
		}		
	}

	return ans;	
}

int main() {

	cin >> s;
	cin >> p;

	for(int i =0, x; i < s.size(); ++i) {
		cin >> x;
		del[x-1] = i;
	}

	cout << busca() << '\n';

	return 0;
}