#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
char s[10],t[10];
int i,l[100],r[100],n;
int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for (i=1;i<=n;i++) 
	{
		scanf("%s",&t);
		if (s[0]==t[0]&&s[1]==t[1]) 
		{
			printf("YES"); return 0;
		}
		l[t[0]-'a']=1;
		r[t[1]-'a']=1;
	}
	if (l[s[1]-'a']&&r[s[0]-'a']) printf("YES");else printf("NO");
}
