#include <bits/stdc++.h>
using namespace std;

const int N=105;
int a[N],b[N];
int dp[N][N];

int main() {
	ios::sync_with_stdio(0);
	int n,m;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	cin >> m;
	for(int i=0; i<m; i++)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);

	for(int i=n-1; i>=0; i--) {
		for(int j=m-1; j>=0; j--) {
			if(abs(a[i]-b[j])<=1) {
				dp[i][j] = 1+dp[i+1][j+1];
			}else {
				dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
			}
		}
	}
	int mx=0;
	for(int i=0; i<m; i++)
		mx = max(mx, dp[0][i]);
	cout << mx << "\n";
}