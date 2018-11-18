#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int Maxn = 10000 + 5;
const int inf = 1 << 30;
const LL Inf = 1LL << 60;
int n,m;

int main()
{
	char a[3],b[3];
	int flag1,flag2;
	flag1 = 0,flag2 = 0;
	scanf("%s",&a);
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%s",b);
		if (b[0] == a[1]) flag1 = 1;
		if (b[1] == a[0]) flag2 = 1;
		if (b[0] == a[1] && b[1] == a[0])
		{
			printf("YES\n");
			return 0;
		}
		if (b[0] == a[0] && b[1] == a[1])
		{
			printf("YES\n");
			return 0;
			}
	}
	if (flag1 == 1 && flag2 == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}
 	  			 			 				 	 	 	    	 	