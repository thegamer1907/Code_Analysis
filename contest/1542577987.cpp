#include <bits/stdc++.h>
using namespace std;
#define MX		4000005
int num[5][MX];
int setq[MX];
int qwq[5] = {0,1,3,7,15};
int main(int argc, char const *argv[])
{
	int n,k;
	scanf("%d%d",&n,&k);
	int tmp;
	for (int i = 1; i <= n ; ++i)
	{
		int now = 0;
		for (int j = 1; j <= k ; ++j)
		{
			scanf("%d",&tmp);
			if(tmp){
				now += (1<<(j-1));
			}
		}
		setq[now]++;
		int tonum = (1<<k) - 1;tonum ^= now; 
		for (int i = 0; i < (1<<k); ++i)
		{
			if(setq[i] && (i|tonum) == tonum)
			{
				printf("YES\n");return 0;
			}
		}
	}
	if(setq[0])
	{
		printf("YES\n");return 0;
	}
	printf("NO\n");
}