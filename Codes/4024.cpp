#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int pet[n+1][m+1];
	int c[n+1][m+1];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		scanf("%d", &pet[i][j]);
	}
	int color = 0;
	for(int j = 1; j <= m; j++)
	{
		color++;
		int last = pet[1][j];
		for(int i = 1; i <= n; i++)
		{
			if(last > pet[i][j]) color++;
			last = pet[i][j];
			c[i][j] = color;
		}
	}
	if(n <= 100)
	{
		bool bisa[n+1][n+1]; memset(bisa, 0, sizeof(bisa));
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				for(int k = j; k <= n; k++)
				if(c[j][i] == c[k][i]) bisa[j][k] = 1;
			}
		}
		int q; scanf("%d", &q);
		while(q--)
		{
			int x, y; scanf("%d %d", &x, &y);
			if(bisa[x][y]) printf("Yes\n");
			else printf("No\n");
		}
	}
	else
	{
		int q; scanf("%d", &q);
		while(q--)
		{
			int x, y; scanf("%d %d", &x, &y);
			bool bol = 0;
			for(int i = 1; i <= m; i++)
			{
				if(c[x][i] == c[y][i])
				{
					bol = 1;
					break;
				}
			}
			if(bol) printf("Yes\n");
			else printf("No\n");
		}
	}
	
}
