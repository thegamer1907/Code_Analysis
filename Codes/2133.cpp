#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k,i,res = 0;
	cin >> n >> k;
	long long a[n];
	map <long long, long long> l;
	map <long long, long long> r;
	for(i = 0; i < n; i++)
		{
			cin >> a[i];
			r[a[i]]++;
		}
	for(i = 0;i < n; i++)
		{
			r[a[i]]--;
			if(a[i] % k == 0 && l.find(a[i] / k) != l.end() && r.find(a[i] * k) != r.end())
				{
					res += l[a[i] / k] * r[a[i] * k];
				}
		   	l[a[i]]++;
		}
	cout << res;
}