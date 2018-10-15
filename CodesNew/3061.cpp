#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, sm[1000000], l, r, m, l1, r1, n;
	long long cnt = 0;
	string s;
	cin >> k >> s;
	n = s.size();
	
	for (int i = 0; i < s.size(); i++)
		sm[i] = (s[i] == '1')+(i ? sm[i-1] : 0);
		
	for (int i = 0; i < s.size(); i++)
	{
		l = i-1;
		r = n;
		
		while (l < r-1)
		{
			m = (l+r)/2;
			
			if (sm[m]-(i ? sm[i-1] : 0) <= k)
				l = m;
			else
				r = m;
		}
		
		l1 = i-1;
		r1 = n;
		
		while (l1 < r1-1)
		{
			m = (l1+r1)/2;
			
			if (sm[m]-(i ? sm[i-1] : 0) < k)
				l1 = m;
			else
				r1 = m;
		}
		
		cnt += l-l1;
	}
	
	cout << cnt;
}