#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, c;
	cin >> n >> c;
	vector <int> v(n);
	for (int i=0; i<n; i++)
	{
		cin >> v[i];
	}
	int maxk = *max_element(v.begin(), v.end()) + c;
	sort(v.begin(), v.end());
	int diff=0;
	if(n==2)
	diff=v[1]-v[0];
	if(n>2)
	{
		for (int i=0; i<=n-2; i++)
		{
			diff+=v[n-1]-v[i];
		}
	}
	if (diff>=c)
	{
		cout << v[n-1] << " ";
	}
	else if (diff<c)
	{
		float ans=(accumulate(v.begin(), v.end(), 0.0)+c)/n;
		cout << ceil(ans) << " ";
	}
	cout << maxk;
}