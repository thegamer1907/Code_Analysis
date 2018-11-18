#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
const int maxn = 1e4 + 5;
typedef long long LL;
using namespace std;

char str[105][5];
char strr[5];

int main()
{
	int n,num,numm;
	while(~scanf("%s",strr))
	{
		scanf("%d",&n);
		num = 0,numm = 0;
		bool flag = 0;
	for(int i = 1;i <= n; i++)
	{
		for(int j = 1;j <= 2; j++)
		{
			scanf(" %c",&str[i][j]);
			if(str[i][1] == strr[1])
				num = 1;
			if(str[i][2] == strr[0])
				numm = 1;
			if(str[i][1] == strr[0] && str[i][2] == strr[1])
				flag = 1;
		}
	}
	if(num + numm == 2 || flag)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}