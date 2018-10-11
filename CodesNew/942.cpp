#include <bits/stdc++.h>
#define lli long long int	
#define fast_io ios_base::sync_with_stdio(false)
using namespace std;


int main()
{
	
	fast_io;
	cin.tie(0);

	int n,m;
	cin >> n >> m;
	string p1[n];
	string p2[m];
	map <string, int> m1;
	map <string, int> m2;
	for(int i  = 0 ; i < n ; i++)
	{
		cin >> p1[i];
		m1[p1[i]] = 1;
	}
	for(int i  = 0 ; i < m ; i++)
	{
		cin >> p2[i];
		m2[p2[i]] = 1;
	}

	int moves1 = n, moves2 = m;
	for(int i = 0; i < n;i++)
	{
		if(m2[p1[i]] == 1)
			moves1 --;
	}
	int common = n - moves1;

	while(n > 0)
	{
		if(common > 0)
		{
			common --;
			n --;
			m --;
		}
		else
		{
			n --;
		}

		if(m == 0)
		{
			cout << "YES";
			return 0;	
		}
		if(common > 0)
		{
			common --;
			n --;
			m --;
		}
		else
		{
			m --;
		}
	}
	cout << "NO";

	return 0;
}