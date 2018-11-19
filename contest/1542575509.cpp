#include <iostream>
#include <cstdio>

using namespace std;

int n,k,used[20000],a[200000][10];

int main () {
	cin >> n >> k ;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> a[i][j];
		}
	}	

	for (int i = 0 ; i < 16; i++) {
		used[i] = false;
	}

	int max = 0;

	for (int i = 0; i < n; i++) {
		int x = 0;
		int deg = 1;
		for (int j = k - 1; j >= 0; j--) {
			x += a[i][j] * deg;
			deg *= 2;  
		}
		max = deg - 1;
		used[x] = true;
	}

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			int x = i & j;
			if (x == 0 && used[i] == used[j] && used[i]) {
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";
}