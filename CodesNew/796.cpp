#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,t,z = 0;
	char a[1005][505],b[505];
	scanf("%d %d",&n,&m);
	for(int i = 1;i <= n; i++)
		scanf("%s",a[i]);
		t = m;
		while(m--)
		{
			scanf("%s",b);
			for(int i = 1;i <= n; i++)
			{
				if(strcmp(a[i],b) == 0)
					z++;
			}
		}
		if(z % 2 == 0)
		{
			if(t - z >= n - z)
				printf("NO\n");
				else
					printf("YES\n");
		}
		else
		{
			if(n - z >= t - z)
				printf("YES\n");
				else
					printf("NO\n");
		}
		return 0;
}

