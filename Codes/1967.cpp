#include<bits/stdc++.h>

using namespace std;

#define int long long int

int a[200007];
map <int, int> lt, rt;

signed main()
{
	int n, k, i, j, ans = 0;
	
	cin >> n >> k;
	
	for(i = 0; i < n; i++)
		cin >> a[i];
	
	for(i = 1; i < n; i++) rt[a[i]]++;
	lt[a[0]]++;
	
	for(i = 1; i < n; i++)
		{
			rt[a[i]]--;
			
			if(a[i] % k == 0 && lt[a[i] / k] && rt[a[i] * k])
				{
					ans += lt[a[i] / k] * rt[a[i] * k];
					// cout << max(lt[a[i] / k], rt[a[i] * k]) << endl;
				}
			
			lt[a[i]]++;
		}
	
	cout << ans << endl;
	
	return 0;
}
