using namespace std;
#include<bits/stdc++.h>

int a[105];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m; cin >> n >> m;
	int MAX = 0, x = m;
	for(int i = 0; i < n; ++i) cin >> a[i], MAX = max(MAX, a[i]);
	for(int i = 0; i < n; ++i){
		x -= (MAX - a[i]);
		if(x <= 0) break;
	}
	if(x <= 0) cout << MAX << " " << (MAX + m) << endl;
	else{
		cout << (x / n + (x % n == 0 ? 0 : 1) + MAX) << " " << (MAX + m) << endl;
	}
	return 0;
}	