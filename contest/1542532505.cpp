#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
const int MaxN = 1e2;

int main()
{
	int n,ans,biu,vis1,vis2;
	char x1,x2,a1,a2;
	while(~scanf("%c",&a1))
	{
		scanf("%c%d",&a2,&n);
		getchar();
		vis1 = 0;vis2 = 0;
		for(int i = 1;i <= n;i++) 
		{
			scanf("%c%c",&x1,&x2);
			getchar();
			if(x1 == a2) vis2 = 1;
			if(x2 == a1) vis1 = 1;
			if(x1 == a1&&x2 == a2)
			{
				vis1 = 1;
				vis2 = 1;
			}
		}
		if(vis1 == 1&&vis2 == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}