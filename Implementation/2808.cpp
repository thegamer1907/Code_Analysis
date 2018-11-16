#include<bits/stdc++.h>
using namespace std;

int n;
bool uda[105];

int main()
{
	scanf("%d",&n);
	int cnt = 0;
	for(int i=1;i<=2;i++)
	{
		int p;
		scanf("%d",&p);
		for(int j=1;j<=p;j++)
		{
			int x;
			scanf("%d",&x);
			if(uda[x]) continue;
			uda[x] = 1;
			cnt++;
		}
	}
	if(cnt == n) printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
	return 0;
}
