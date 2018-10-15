//besme taala
//ya_hossein
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, t, s = 0, x = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> t;
		x += t;
		s = max(s, t);
	}
	cout << max(s, (x + m + n - 1)/n) << ' ' << s + m;	
}