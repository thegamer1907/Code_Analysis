//besme taala
//ya_hossein
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[n][k];
	for(int i = 0; i < n; i++)
	for(int j = 0; j < k; j++)
	cin >> a[i][j];
	if(k == 1)
	{
		for(int i = 0; i < n; i++)
		if(a[i][0] == 0)
		{
			cout << "YES";
			return 0;
		}
		cout << "NO";
		return 0;
	}
	if(k == 2)
	{
		int s = 0, h = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i][0] == 0)
			s = 1;
			if(a[i][1] == 0)
			h = 1;
		}
		if(s && h)
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	if(k == 3)
	{
		int s = 0, h = 0, k = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i][0] == 0)
			s = 1;
			if(a[i][1] == 0)
			h = 1;
			if(a[i][2] == 0)
			k = 1;
		}
		if(!s || !h || !k)
		{
			cout << "NO";
			return 0;
		}
		for(int i = 0; i < n; i++)
		{
			if((a[i][0] == 0 && a[i][1] == 0) || (a[i][0] == 0 && a[i][2] == 0) || (a[i][1] == 0 && a[i][2] == 0))
			{
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
		return 0;
	}
	if(k == 4)
	{
		int s = 0, h = 0, k = 0, g = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i][0] == 0)
			s = 1;
			if(a[i][1] == 0)
			h = 1;
			if(a[i][2] == 0)
			k = 1;
			if(a[i][3] == 0)
			g = 1;
		}
		if(!s || !h || !k || !g)
		{
			cout << "NO";
			return 0;
		}
		for(int i = 0; i < n; i++)
		{
			if((a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) || (a[i][0] == 0 && a[i][1] == 0 && a[i][3] == 0) || (a[i][0] == 0 && a[i][2] == 0 && a[i][3] == 0) || (a[i][1] == 0 && a[i][2] == 0 && a[i][3] == 0))
			{
				cout << "YES";
				return 0;
			}
		}
		s = 0, g = 0, h = 0, k = 0;int q = 0, p = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i][0] == 0 && a[i][1] == 0)
			s = 1;
			if(a[i][0] == 0 && a[i][2] == 0)
			g = 1;
			if(a[i][0] == 0 && a[i][3] == 0)
			h = 1;
			if(a[i][1] == 0 && a[i][2] == 0)
			k = 1;
			if(a[i][1] == 0 && a[i][3] == 0)
			q = 1;
			if(a[i][2] == 0 && a[i][3] == 0)
			p = 1;
		}
		if((s && p) || (g && q) || (h && k))
		{
			cout << "YES";
			return 0;
		}
		cout << "NO";
		return 0;
	}
}