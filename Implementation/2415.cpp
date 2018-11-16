#include <bits/stdc++.h>

using namespace std;

int f(int x, int k)
{
	return 5*(x+1)*x/2+k;
}

int main()
{
	int n, k, l = 0, r, m;
	cin >> n >> k;
	r = n+1;
	
	while (l < r-1)
	{
		m = (l+r)/2;
		
		if (f(m, k) <= 240)
			l = m;
		else
			r = m;
	}
	
	cout << l;
}