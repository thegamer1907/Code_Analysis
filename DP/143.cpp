#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int f(int a, int b)
{
	if (abs(a-b) <= 1) return 0;
	else if(a - b > 1) return 1;
	else return 2;
}

int main()
{
	int n,m;
	cin >> n;
	vector<int> boys(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> boys[i];
	}
	sort(boys.begin(),boys.end());
	cin >> m;
	vector<int> girls(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> girls[i];
	}
	sort(girls.begin(),girls.end());
	int i = 0, j = 0;
	int count = 0;
	int b;
	while(true)
	{
		if(i > n-1 || j > m-1) break;
		b = f(boys[i],girls[j]);
		if( b == 0)
		{
			count++;
			++i;
			++j;
		}
		else if(b == 1) ++j;
		else ++i;
	}
	cout << count << endl;
}