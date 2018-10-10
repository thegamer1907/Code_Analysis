#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	long long n, a, c[10000001] = {}, m, p[10000001] = {}, f[10000001] = {}, l, r, l1, r1, m1, l2, r2, m2;
	vector <long long> pv;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		c[a]++;
	}
	
	for (int i = 2; i < 10000001; i++)
	{
		if (p[i])
			continue;
	
		if (i > 2)
			f[pv.size()] = f[pv.size()-1];
			
		for (int j = i; j < 10000001; j += i)
		{
			p[j] = 1;
			f[pv.size()] += c[j];
		}
				
		pv.push_back(i);
	}

	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		cin >> l >> r;
		l1 = 0;
		r1 = pv.size();
		
		while (l1 < r1-1)
		{
			m1 = (l1+r1)/2;
			
			if (pv[m1] <= r)
				l1 = m1;
			else
				r1 = m1;
		}
		
		l2 = -1;
		r2 = pv.size()-1;
		
		while (l2 < r2-1)
		{
			m2 = (l2+r2)/2;
			
			if (pv[m2] < l)
				l2 = m2;
			else
				r2 = m2;
		}
	
		if (r2 > l1 || l > pv[pv.size()-1])
		{
			cout << "0\n";
			continue;
		}
	
		if (!r2)
			cout << f[l1] << endl;
		else
			cout << f[l1]-f[r2-1] << endl;
	}
}