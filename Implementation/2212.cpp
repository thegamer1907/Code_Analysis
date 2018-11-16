#include<bits/stdc++.h>
using namespace std;

int main() {
	long long k, n, w;
	cin >> k >> n >> w;
	long long hasil = 0;
	for (int i = 1; i <= w; i++) {
		hasil += (i * k);
	}
	
	if (n >= hasil) cout << 0 << endl; else cout << hasil - n << endl;
	return 0;
}
