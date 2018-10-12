#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 28;
int a[maxn];
int n, t, c, ans, j;
int main(){
	cin >> n >> t;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		c += a[i];
		while(c > t)
			c -= a[j++]; 
		ans = max(ans, i - j + 1);	
	}
	cout << ans;
}
