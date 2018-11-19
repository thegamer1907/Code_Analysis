#include <cstdio>
#include <algorithm>
using namespace std;

int n;
char a,b,c,d;
bool fi,se;

int main()
{
	a=getchar();
	b=getchar();
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		c=getchar();
		c=getchar();
		d=getchar();
		
		if (a==c && b==d)
		{
			printf("YES\n");
			return 0;
		}
		if (b==c) se=true;
		if (a==d) fi=true;
	}
	
	if (fi && se) printf("YES\n");
	else printf("NO\n");
	return 0;
}
