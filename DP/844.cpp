#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ppb pop_back
#define Pi 3.14159265
#define Vi vector<int>;
#define st first
#define nd second
#define in insert

using namespace std;

int main() 
{
	int n;
	cin >> n;
	int maxx = -1, col1 = 0, col0 = 0, ii = 0, jj = 0, coll = 0;
	int a[101];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if(n == 1)
	{
		if(a[0] == 1)
			cout << 0;
		if(a[0] == 0)
			cout << 1;
		return 0;
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 1)
		{
			coll++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(a[j] == 0)
			{
				col0++;
			}
			if(a[j] == 1)
			{
				col1++;
			}
			if(col0 + coll - col1 > maxx)
			{
				ii = i;
				jj = j;
				maxx = col0 + coll - col1;
			}
		}
		col0 = 0;
		col1 = 0;
	}
	cout << maxx;
}