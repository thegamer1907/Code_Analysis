#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, a=0,l=5;
	cin >> n >> m;
	vector <int> v(n);
	for (int i=0; i<n; i++)
	{
		cin >> v[i];
		a=a+v[i];
	}
	sort (v.begin(), v.end());
	int k2, k1;
	k2=v[n-1]+m;
	k1=k2;
	while (l>0)
	{
		if (k1*n<(m+a))
		{
			l=0;
		}
		else 
		{
			k1--;
		}
	}
	if (k1!=k2)
	{
		k1++;
	}
	if (v[n-1]>k1)
	{
		k1=v[n-1];
	}
	cout << k1 << " " << k2; 
}
