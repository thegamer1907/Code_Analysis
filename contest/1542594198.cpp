#include<cstdio>
#include<algorithm>
using namespace std;
int n;
char s[105][5];
char t[5];
int main()
{
	scanf("%s%d",t,&n);
	for(int i=1;i<=n;i++)
	scanf("%s",s[i]);
	for(int i=1;i<=n;i++)
	if(s[i][0]==t[0]&&s[i][1]==t[1])
	return puts("YES"),0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(s[i][1]==t[0]&&s[j][0]==t[1])
	return puts("YES"),0;
	puts("NO");
}