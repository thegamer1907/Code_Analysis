#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char c[105][5],s[5];
bool x,y;
int N;
int main()
{
	scanf("%s",s);
	scanf("%d\n",&N);
	for (int i=1;i<=N;i++) scanf("%s",c[i]);
	for (int i=1;i<=N;i++) if (s[0]==c[i][0]&&s[1]==c[i][1]) {printf("YES\n");return 0;}
	for (int i=1;i<=N;i++)
	{
		if (c[i][0]==s[1]) y=1;
		if (c[i][1]==s[0]) x=1;
	}
	if (x&y) printf("YES");
	else printf("NO");
	return 0;
}
