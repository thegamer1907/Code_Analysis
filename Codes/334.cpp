#include <bits/stdc++.h>
#define ll long long 
int  a[1000001], n, x, k = 1, i, j, m;
using namespace std;
int main()
{
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		cin >> x;
		for (j = k;j < x + k;j++)
			a[j] = i;
		k = k + x;
	}
	cin >> m;
	while (m--)
	{
		cin >> x;
		cout << a[x] << "\n";
	}
}