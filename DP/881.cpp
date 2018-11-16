// Harry Potter
#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int n, sum, dp0[N][N], dp1[N][N], a[N], mx;
int main(){
	cin >> n; for(int i = 1; i <= n; i ++) {cin >> a[i]; sum += a[i];}
	
	for(int i = 1; i <= n; i ++)
		for(int j = i; j <= n; j ++)
			for(int k = i; k <= j; k ++){
				if (a[k]) dp1[i][j] ++;
				else dp0[i][j] ++;
			}
				
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++)
			mx = max(mx, sum - dp1[i][j] + dp0[i][j]);
	if (mx == sum) mx --;
	cout << mx;
}
