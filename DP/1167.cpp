#include <bits/stdc++.h>
using namespace std;


////////////////////////////////////////////////////////////////
int a[1000], n, i, j, k, l, o, mx;
int main()
{
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cin >> a[i];
		if(a[i] == 1)
			l++;
		else
			o++;
	}
	for(i=1; i<=n; i++)
	{
		k = 0;
		for(j=i; j<=n; j++)
		{
			if(a[j] == 0)
				k++;
			else
				k--;
			mx = max(mx, k + l);
		}			//cout<<k+l<<"   "<<mx<<endl ;

	}
	cout << mx;
}
