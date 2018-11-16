#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, k, a[150000], s[150000], mn, ind = 0;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		s[i] = a[i] + (i ? s[i-1] : 0);
	}
	
	mn = s[k-1];
	
	for (int i = 1; i <= n-k; i++)
		if (s[i+k-1]-s[i-1] < mn)
		{
			mn = s[i+k-1]-s[i-1];
			ind = i;
		}
		
	cout << ind+1;
}