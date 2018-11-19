#include <bits/stdc++.h>

using namespace std;

bool vf[256],vs[256];
char pas[10];
char str[10];
int n;

int main()
{
	scanf("%s",pas);

	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		scanf("%s",str);
		vf[str[0]]=true;
		vs[str[1]]=true;

		if(!strcmp(str,pas))
		{
			puts("YES");
			return 0;
		}
	}

	if(vs[pas[0]]==true && vf[pas[1]]==true)
	{
		puts("YES");
		return 0;
	}
	else puts("NO");

        return 0;
}
