#include <bits/stdc++.h>

using namespace std;

int main()
{
	queue<char> que;
	char c, d;
	int n, t;
	cin >> n >> t;
	for (int i = 1; i <= n; i++)
	{
		cin >> c;
		que.push(c);
	}
	for (int i = 1; i <= t; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			c = que.front();
			if (c == 'G' || j == n)
			{
				que.push(c);
				que.pop();
			}
			else
			{
				que.pop();
				d = que.front();
				if (d == 'G')
				{
					que.pop();
					que.push('G');
					que.push('B');
					j++;
				}
				else
					que.push('B');
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		c = que.front();
		cout << c;
		que.pop();
	}
	return 0;	
}