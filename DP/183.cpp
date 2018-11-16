// Harry Potter
#include <bits/stdc++.h>
using namespace std;
int n, m, a[222], b[222];
int main(){
	cin >> n; for(int i = 1; i <= n; i ++) cin >> a[i];
	cin >> m; for(int j = 1; j <= m; j ++) cin >> b[j];
	
	sort(a + 1, a + n + 1);
	sort(b + 1, b + m + 1);
	
	int i = 1, j = 1; int ans = 0;
	while(i <= n && j <= m){
		if (abs(a[i] - b[j]) <= 1) ans ++, i ++, j ++;
		else if (a[i] > b[j]) j ++;
		else i ++;
	}
	cout << ans;
}
