#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
int n;
int a[N];
int x, y = 1e9 + 4;

int main() {
	ios_base::sync_with_stdio(false),cin.tie(0),cout.precision(17);
	cin >> n;
	for(int i = 0;i < n;i++) 
		cin >> a[i], a[i] -= i;
	for(int i = 0;i < n;i++) {
		if(ceil(a[i] / (double)n) < y)
			x = i + 1, y = ceil(a[i] / (double)n);
	}
	cout << x << endl;

	return 0;
}