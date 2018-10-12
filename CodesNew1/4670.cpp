#include<bits/stdc++.h>

using namespace std;

const int N = 5 * 1000 * 100 + 10;
int n, a[N], ans;

int main()
{	
	ios_base :: sync_with_stdio(false); cin.tie(false); cout.tie(false);
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	sort(a, a + n);
	
	int ind;
	for(int i = 0; i < n / 2; i ++)
	{
		ind = lower_bound(a + n / 2, a + n, 2 * a[i]) - a;
		if(ind == n)
			break;
		a[ind] = a[i] = -1;
		ans ++;
	}
	for(int i = 0; i < n; i ++)
		if(a[i] != -1)
			ans ++;
	cout << ans << endl;

	return 0;
}