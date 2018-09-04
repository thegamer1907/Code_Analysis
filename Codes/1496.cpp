#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int dp[100005], d[100005];
int a[100005];
int n, s;

ll f(int k){
	for(int i = 1; i <= n; i++){
		dp[i] = a[i] + k * i;
	}
	ll sum = 0;
	sort(dp + 1, dp + n + 1);
	for(int i = 1; i <= k; i++)sum += dp[i];
	return abs(sum);
}
int main()
{
   	
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int l = 1, r = n;
	while(l < r){
		int mid = (l + r) / 2;
		if(f(mid) >= s)
			r = mid;
		else l = mid + 1;
	}
	if(f(r) > s)r--;
	cout << r << " " << f(r);
}