#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n; int a[n];
	int res = 0, mx = 0;
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		mx = max(a[i],mx);
	}
	for(int i = 0; i < n; i++)
	{
		res += mx - a[i];
	}
	cout << res << "\n";
	return 0;
}
