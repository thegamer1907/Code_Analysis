#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[5] = {1, 5, 10, 20, 100};
	int n,ans;
	cin >> n;
	ans = 0;
	for (int i = 4; i >= 0; i--){
		ans += n / a[i];
		n = n % a[i];
	}
	cout << ans << endl;
	return 0;
} 