#include <bits/stdc++.h>

using namespace std;

int n;
string words[1000006];

int define_longest_possible(int ind) {
	string a_new = "";
	string b_new = "";
	int l = min((int)words[ind].size(), (int)words[ind - 1].size());
	for (int i = 0; i < l; ++i) {
		a_new += words[ind][i];

		if (b_new < a_new)
			return ind - 1;
	}
	return words[ind].size();
}

int len[1000006];

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) 
		cin >> words[i];

	for (int i = n - 1; i >= 1; --i) {
		int poz = 0;
		while (poz < min((int)words[i].length(), (int)words[i + 1].length()) && words[i][poz] == words[i + 1][poz]) 
			++poz;
		if (words[i][poz] > words[i + 1][poz]) 
			words[i].resize(poz);
	}
	len[n] = (int)words[n].size();
	for (int i = 1; i <= n; ++i)
		cout << words[i] << endl;
}