#include<bits/stdc++.h>

using namespace std;

int a[10005];

int main (void){
	int n, m;
	cin >> n >> m;
	int sum = m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + n);
	double k = sum * 1.0 / n;
	int ans = ceil(k);
	int maxx = max(ans, a[n - 1]);
	cout << maxx << " " << m + a[n - 1];

	return 0;
} 