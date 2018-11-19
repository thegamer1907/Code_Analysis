#include <cstdio>
#include <algorithm>
using namespace std;
int n;
char x[10],tg[10];
bool flga,flgb,flgc;
int main()
{
	scanf("%s%d",tg+1,&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",x+1);
		if((x[1]==tg[1]&&x[2]==tg[2])||(x[1]==tg[2]&&x[2]==tg[1]))
		{
			printf("YES\n");
			return 0;
		}
		if(tg[1]==x[2]&&tg[2]==x[1]) {flgc=true;continue;}
		if(tg[1]==x[2]) flga=true;
		if(tg[2]==x[1]) flgb=true;
	}
	if((flgc&&(flga||flgb))||(flga&&flgb)) printf("YES\n");
	else printf("NO\n");
	return 0;
}