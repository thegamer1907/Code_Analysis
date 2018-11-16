#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t, a, p = 1;
	cin >> n >> t;
	for(int i = 1; i < n; i++)
	{
		cin >> a;
		if(p < t && i == p) p = i + a; 
	}
	if(p == t) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
