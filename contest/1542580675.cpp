#include <bits/stdc++.h>

using namespace std;

char pa[2];
char st[110][2];
int main(){
	int n;
	scanf("%s",pa);
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",st[i]);
		if(!strcmp(st[i],pa)){
			printf("YES\n");
			return 0;
		}
	}

	int fg = 0;
	for (int i = 0; i < n; ++i)
	{
		if(st[i][0]==pa[1]){
			fg++;
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if(st[i][1]==pa[0]){
			fg++;
			break;
		}
	}
	if (fg == 2)
	{
		printf("YES\n");
	}else printf("NO\n");
	return 0;
}