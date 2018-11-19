#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int Maxn=110;
int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
	return x*f;
}
char s1[4],str[110][4];
int n;
int main()
{
	scanf("%s%d",s1,&n);
	for(int i=1;i<=n;i++)scanf("%s",str[i]);
	bool no=true;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((str[i][0]==s1[0]&&str[i][1]==s1[1])||(str[i][1]==s1[0]&&str[j][0]==s1[1]))
			{
				no=false;
				break;
			}
		}
		if(!no)break;
	}
	if(no)printf("NO");
	else printf("YES");
}
