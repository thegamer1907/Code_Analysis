#include <bits/stdc++.h>
using namespace std;
#define MAXN 500000
int n;
string strs[MAXN+5];
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >>strs[i];
	for (int i = n-1; i >= 1; i--) {
		// cout << strs[i] << ", " << strs[i+1] << "\n";
		int j = 1, len = min(strs[i].length(), strs[i+1].length()); 
		while (j < len && strs[i][j] == strs[i+1][j]) j++;
		if (len == 1 || strs[i][j] > strs[i+1][j]) strs[i] = strs[i].substr(0, j);
	}
	for (int i = 1; i <= n; i++) cout << strs[i] << "\n";
	return 0;
}