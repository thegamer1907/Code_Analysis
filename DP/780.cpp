#include <bits/stdc++.h>
using namespace std;
int n ,k, a[1000],sum = 0,d[1000][1000],mx,pref[1000];
int main()
{
	cin>>n;
	for(int i = 1; i <= n ;i ++)
	{
		cin>>a[i];
		if(a[i])k++;
		sum+=a[i];
		pref[i] = sum;
	}
	if(k == n)
	{
		cout<< n -1;
		return 0;
	}
	for(int i = 1; i <= n ;i ++)
	{
		for(int j = 1; j <= n ;j ++)
		{
			int x = (pref[j] - pref[i - 1]);
			mx = max(mx, (sum -abs(x)) + (j - i + 1 - abs(x)));
		}
	}cout<<mx;
}