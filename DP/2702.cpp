#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<queue>
#define s second
#define f first
using namespace std;


int main()
{

	int n, ans=2;
	cin >> n;
	vector<pair<int, int> > a(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i].f >> a[i].s;
	}
	
	for (size_t i = 1; i < n-1; i++)
	{
		if (a[i].f - a[i].s <= a[i - 1].f&&a[i].f + a[i].s < a[i+1].first)
		{
			a[i].first += a[i].second;
			ans++;
		}
		else if(a[i].f - a[i].s > a[i - 1].f)
		{
			ans++;
		}
	}
	if(n!=1)cout << ans;
	else cout << 1;
	return 0;
}