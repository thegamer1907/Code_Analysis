#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, m1, a[100000], q, s[100000], l, r, m;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		
		if (i)
			s[i] = s[i-1]+a[i];
		else
			s[i] = a[i];
	}
	
	cin >> m1;
	
	for (int i = 0; i < m1; i++)
	{
		cin >> q;
		l = 0;
		r = n;
		
		while (l < r-1)
		{
			m = (l+r)/2;
			
			if (s[m-1] >= q)
				r = m;
			else
				l = m;
		}
		
		cout << r << endl;
	}
}