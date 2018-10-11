#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t, ans = 0, arr[100100],sum=0;
	cin >> n >> t;
	for (int i = 0; i < n; i++)cin >> arr[i];
	int l = 0, r = 0;
	while (l < n){
		if (sum + arr[r] <= t && r<n){
			sum += arr[r];
			ans = max(ans, (r+1) - l);
			r++;
		}
		else{
			sum -= arr[l];
			l++;
		}
	}
	cout << ans << endl;
	return 0;
}
