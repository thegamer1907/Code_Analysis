#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 1 << 4 + 10;
const int TOT = 1 << 4;
int mp[MAX], n, k, type, tmp;
bool judge() {
	for (int i = 0; i < TOT; ++i) {
		if (!mp[i]) continue;
		for (int j = 0; j < TOT; ++j) {
			if (!mp[j]) continue;
			if (!(i&j)) return true;
		}
	}
	return false;
}
int main() {
	while (cin >> n >> k) {
		memset (mp, 0, sizeof (mp));
		for (int i = 0; i < n; ++i) {
			type = 0;
			for (int j = 0; j < k; ++j) {
				cin >> tmp;
				if (tmp) 
					type += (1 << j);
			}
			mp[type] = 1;		
		}
		if (judge()) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}