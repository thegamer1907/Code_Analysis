#include "bits/stdc++.h"
using namespace std;

const int N = 1e6 + 6;
int b[N];

int main() {
	string s; cin >> s;
	int n = s.size();

	int i = 0, j = -1;
	b[0] = -1;
	while(i < n) {
		while(j >= 0 and s[i] != s[j]) j = b[j];
		i++, j++;
		b[i] = j;
	}

	if(b[n] == 0) return !printf("Just a legend\n");
	for(int i = n - 1; i >= 1; i--) {
		if(b[i] == b[n]) {
			cout << s.substr(0, b[n]) << endl;
			return 0;
		}
	}
	if(b[b[n]] == 0) return !printf("Just a legend\n");
	cout << s.substr(0, b[b[n]]) << endl;
}