#include <iostream>
using namespace std;

const int maxn = 10e6;
int z[maxn];

void z_func(string s){
		int i, l=0, r=1, n = s.length();
			for (i = 1; i < n; i++, r = max(r,i))
				for (z[i] = min(r - i, z[i - l]); s[i + z[i]] == s[z[i]]; z[i]++, r = i + z[i], l = i);
}

int main() {
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	z_func(s);
	
	int i, j, max_preffix=0, n=s.length();
	for(i = 0; i < n; i++) {
		if (z[i] == n-i) {
			if (max_preffix >= z[i]) {
				for(j = 0; j < z[i]; j++)
					cout << s[j];
				return 0;
			}
		}
		max_preffix = max(max_preffix,z[i]);
	}
	cout << "Just a legend" << endl;
}