#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n, m;
	int a[100005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	int sum = 0; 
	int maxn = -2;
	for (int i = 0; i< n; i++) sum += a[i];
	for (int i = 0; i < n; i++) if (a[i] >= maxn) maxn = a[i];
	sum = m - (maxn * n - sum);
	if (sum <= 0) cout << maxn;
	else {
		cout << maxn + (sum - 1) / n + 1;
	}
	
	cout << " " << maxn + m << endl;
	return 0;
}
