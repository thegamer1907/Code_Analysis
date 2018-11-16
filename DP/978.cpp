#include <bits/stdc++.h>

using namespace std;

int a[110], s[110], ps[110];

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	for(int i = n - 1; i >= 0; i --)
		ps[i] = ps[i + 1] + a[i];	
	int mmxx = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		int mx = 0;
		int o = 0;
		for(int j = i; j >= 0; j --)
		{
			o += 1 - a[j];
			mx = max(mx, o + ps[0] - ps[j]);
		}
		s[i] = mx + ps[i] - a[i];
		mmxx = max(mmxx, mx + ps[i] - a[i]);
	}

		cout << mmxx;

	return 0;
}















