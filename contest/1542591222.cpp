#include <cstdio>
#include <map>
using namespace std;

map<char,int> ma;
char st[10005],tm[10005];
int n;
bool a,b;

int main()
{
	scanf("%s",st);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",tm);
		if(st[0]==tm[0] && st[1]==tm[1])
		{
			printf("YES");
			return 0;
		}
		if(tm[0]==st[1]) b=true;
		if(tm[1]==st[0]) a=true;
		if(a&&b)
		{
			printf("YES");
			return 0;
		 } 
	}
	printf("NO");
} 
