#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t;
	cin >> n >> t;
	vector<int> v(n);
	for (int i = 0; i < n-1; ++i)
	{
		cin >> v[i];
	}
	int v1 = 1;
	for (int i = 0; i < n; ++i)
	{
		if(v1 == t)
		{	
			cout << "YES" << endl;
			return 0;
		}
		if(v1 > t) break;
		v1 += v[v1-1];
	}
	cout << "NO" << endl;
}