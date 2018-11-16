#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=55;
int n,t,i;
char s[maxn];
int main()
{
	while(scanf("%d%d",&n,&t)!=EOF)
	{
		scanf("%s",&s);
		while(t--)
		{
			for(i=0;i<n-1;i++)
			{
				if(s[i]=='B'&&s[i+1]=='G')
				{
					s[i]='G';
					s[i+1]='B';
					++i;
				}
			}
		}
		printf("%s\n",s);
	}
	return 0;
}