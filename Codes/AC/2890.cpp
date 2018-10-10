#include<bits/stdc++.h>

using namespace std;

long z[1000005];
int main(){
	string s;
	bool ok = 0;
	getline(cin, s);
	long l, r, n;
	l = r = 0;
	n = s.length();
	z[0] = n;
	for(long i = 1; i < n; i++)
	{
		if(i >= r)
		{
			l = r = i;
			while(r < n && s[r] == s[r - l])
				r++;
			z[i] = r - l;
			r--;
		}
		else
		{
			long k = i - l;
			if(z[k] < r - i + 1) z[i] = z[k];
			else
			{
				l = i;
				while(r < n && s[r] == s[r - l])
					r++;
				z[i] = r - l;
				r--;
			}
		}
	}
	for(long i = 1; i < n; i ++)
	{
		if(z[i] == n - i)
		{
			for(long j = i - 1; j >0; j--)
				if(z[j] > z[i])
				{
					for(long p = j + z[i] - 1; p >= j; p++)
						if(s[p] != s[p - j]) break;
					ok = 1;
				}
				else if(z[j] == z[i])
				{
					ok = 1;
				}
		}
		if(ok == 1)
		{
			for(long k = i; k <= n - 1; k++)
				cout << s[k];
			return 0;
		}
	}
	cout << "Just a legend";
}