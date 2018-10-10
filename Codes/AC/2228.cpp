#include <iostream>
using namespace std;
#define int int64_t
int ans, n, a[200009];
int32_t main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for(int i = 1; i <= n; i++){
		int l = i + 1, r = n, ans = -1;
		while(l <= r){
			int mid = l + r >> 1;
			if(a[n] - a[mid - 1] == a[i]){
				ans = mid;
				break;
			}
			if(a[n] - a[mid - 1] > a[i])
				l = mid + 1;
			else
				r = mid - 1;
		}
		if(ans != -1)
			::ans = a[i];
	}
	cout << ans << '\n';
}