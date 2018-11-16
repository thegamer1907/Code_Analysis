#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	ios::sync_with_stdio(0);
	ll n,t;
	cin >> n >> t;
	ll a[n],i,j;
	for(i=1;i<n;i++)
		cin >> a[i];
	i=1;
	bool fl=0;
	while(i<n)
	{
		if(i==t)
		{
			fl=1;
			break;
		}
		else
			i+=a[i];
	}
	if(i==t)
		fl=1;
	if(fl)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}