#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, l = 0, r = 2000000000, m, d, a[1000];
	cin >> n >> d;
	d *= 2;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] *= 2;
	}
		
	sort(a, a+n);
	
	while (l < r-1)
	{
		m = (l+r)/2;
		long long f = 1, p = 0;
		
		for (int i = 0; i < n; i++)
			if (p < a[i]-m)
			{
				f = 0;
				break;
			}
			else
				p = a[i]+m;
				
		if (p < d)
			f = 0;
			
		if (f)
			r = m;
		else
			l = m;
	}
	
	if (r % 2 == 0)
		cout << r/2;
	else
		cout << r/2 << ".5";
}