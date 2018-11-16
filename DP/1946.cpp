#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int a[N], b[N], dp[N];
bool mark[N];

int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = n - 1; i >= 0; i--) {
		if (i != n - 1) {
			dp[i] = dp[i + 1];
			if (mark[a[i] - 1] == false)
				dp[i]++;
		}
		mark[a[i] - 1] = true;
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		cout << dp[b[i] - 1] + 1 << "\n";
	}
	return 0;
}//368B
