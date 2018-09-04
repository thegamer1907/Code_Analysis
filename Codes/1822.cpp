#include <bits/stdc++.h>
using namespace std;
long long n, m, k;

bool good(long long x){
	long long val = 0;
	for(int i = 1; i <= n; i++)
		val += min((x-1)/i, m);

	if(val < k) return true;
	return false;
}

int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m >> k;
	long long l = 1, r = 1e12, ans = -1;
	while(l <= r){
		long long mid = (l+r)/2;
	//	cout << l << " " << r << " " << mid << endl;
		if(good(mid)){
			ans = mid;
			l = mid+1;
		}
		else
			r = mid-1;
	}

	cout << ans;

	return 0;
}