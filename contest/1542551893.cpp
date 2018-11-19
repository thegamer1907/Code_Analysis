#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int maxn = 2e3+5;

char s[maxn][20],ans[20];

int main(void)
{
	int n;
	while(scanf("%s",ans)!=EOF)
	{
		int flag = 0,a = 0,b = 0;
		scanf("%d",&n);
		for(int i = 1; i <= n; i++)
		{
			scanf("%s",s[i]);
			if(strcmp(s[i],ans)==0)
				flag = 1;
			int len = strlen(s[i]);
			if(s[i][0] == ans[1])
				b++;
			if(s[i][len-1] == ans[0])
				a++;
		}
		if(a > 0 && b > 0)
			flag = 1;
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
}
