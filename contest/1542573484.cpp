#include <bits/stdc++.h>
using namespace std;
#define MX		20000

int dp[205][14][MX];
char a[205][MX];
int ans[MX];
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n ; ++i)
	{
		scanf("%s",a[i]);
		int len = strlen(a[i]);
		char *tmp = a[i];

		for (int j = 0; j < len ; ++j)
		{
			int now = 0;
			for (int k = j; k <len ; ++k)
			{
				if(k-j+1 == 14)break;
				now = (now<<1)+tmp[k]-'0';
				dp[i][k-j+1][now]++;
			}
		}
	}

	int m;
	scanf("%d",&m);
	int fir,sec;
	for (int i = 1; i <= m ; ++i)
	{
		scanf("%d%d",&fir,&sec);

		for (int p = 1; p <= 14 ; ++p)
		{
			for (int j = 0; j <= (1<<p) ; ++j)
			{
				if(dp[fir][p][j]||dp[sec][p][j])
					dp[n+i][p][j] = 1;
			}
		}

		char tmp[305];
		int lena = strlen(a[fir]);
		int lenb = strlen(a[sec]);

		int q = 0;

		for (int j = max(0,lena-14); j < lena; ++j)
		{
			tmp[q++] = a[fir][j]; 
		}
		for (int j = 0; j < min(lenb,14); ++j)
		{
			tmp[q++] = a[sec][j];
		}
		tmp[q] = '\0';
		for (int j = 0; j < q ; ++j)
		{
			int now = 0;
			for (int k = j; k < q ; ++k)
			{
				if(k-j+1 ==14)break;
				now = (now<<1) + tmp[k]-'0';
				dp[n+i][k-j+1][now]++;
			}
		}

		int flag = 0;
		for (int p = 1; p <= 14 ; ++p)
		{
			for (int j = 0; j <= (1<<p)-1 ; ++j)
			{
				if(dp[n+i][p][j] == 0)
				{
					flag = 1;
					printf("%d\n",p-1 );break;
				}
			}
			if(flag)break;
		}
		q = 0;

		if(lena+lenb<14)
		{
			for (int j = 0; j < lena ; ++j)
			{
				a[n+i][q++] = a[fir][j];
			}

			for (int j = 0; j <lenb ; ++j)
			{
				a[n+i][q++] = a[sec][j];
			}
		}
		else 
		{
			for (int j = 0; j < min(14,lena) ; ++j)
			{
				a[n+i][q++] = a[fir][j];
			}
			if(lena < 14)
				for (int j = 0; j < max(0,(14-lena)) ; ++j)
				{
					a[n+i][q++] = a[sec][j];
				}

			for (int j = max(0,lena - (14 - lenb)); j < lena ; ++j)
			{
				a[n+i][q++] = a[fir][j];
			}

			for (int j = max(0,lenb-14); j <lenb ; ++j)
			{
				a[n+i][q++] = a[sec][j];
			}

		}
		a[n+i][q] = '\0';
	}

}