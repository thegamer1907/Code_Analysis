#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, a[50], z, r = 0;
	cin >> n >> k;
	z = k - 1;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	while (r < n && a[r])
		r++;
		
	while (z < n && a[z] == a[k - 1])
		z++;
		
	cout << min(z, r);
}