#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n,m,x;
	set<int> v;
	cin >> n >> m;
	vector<int> a(n, 0),o(n);
	vector<int> c(m);
	for (int i = 0;i < n;i++)
	{
		cin >> x;
		o[i] = x;
	}
	a[n-1] = 1;
	v.insert(o[n - 1]);
	for (int i = n-2;i >-1;i--)
	{
		if (v.count(o[i]))
		{
			a[i] = a[i + 1];
		}
		else
		{
			a[i] = a[i + 1] + 1;
			v.insert(o[i]);
		}
	}
	for (int i = 0;i < m;i++)
	{
		cin >> x;
		c[i] = a[x-1]-a[n-1]+1;
	}
	for (int i = 0;i < m;i++)
	{
		cout << c[i]<<'\n';
	}
}