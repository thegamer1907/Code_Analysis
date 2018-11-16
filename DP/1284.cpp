#include <bits/stdc++.h>
using namespace std;
int n,a[999999],b[999999],x,mx;
int main()
{
	cin >> n;
	for(int i = 0;i < n;++i)
	{
		cin >> a[i];
		if(a[i] == 1)
			++x;
		b[i] = x;
	}
	if(x == 0)
	{
		cout << n;
		return 0;
	}
	for(int i = 0;i < n;++i)
	{
		for(int j = i + 1;j < n;++j)
		{
			if(x - (b[j] - b[i]) + (j - i) - (b[j] - b[i]) > mx)
				mx = x - (b[j] - b[i]) + (j - i) - (b[j] - b[i]);
		}
		if(a[i] == 1)
		{
			if(x - 1 > mx)
				mx = x - 1;
		}
		else
		{
			if(x + 1 > mx)
				mx = x + 1;
		}
	}
	cout << mx;
}
