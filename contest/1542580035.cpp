#include<cstdio>
#include<cstring>
using namespace std;
const int N=50;
int cnt[2][N],flag,flag2;
char s[101],c[10];

int main()
{
	int n;
	scanf("%s",c+1);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",s+1);
		int l=strlen(s+1);
		int u=s[1]-'a'+1;
		int v=s[l]-'a'+1;
		cnt[0][u]++;
		cnt[1][v]++;
		if(u==c[1]&&v==c[2])	flag++;
		if(l==2&&c[1]==s[1]&&c[2]==s[2])	flag2=1;
	}
	if(flag2)	
	{
		puts("YES");
		return 0;
	}
	int x=c[1]-'a'+1,y=c[2]-'a'+1;
	if(cnt[1][x]&&cnt[0][y]&&flag==0)	puts("YES");
	else
		if((cnt[1][x]-flag>=1)&&cnt[0][y]>0)	puts("YES");
		else	if((cnt[0][y]-flag>=1)&&cnt[1][x]>0)	puts("YES");
		else	puts("NO");
	return 0;
}
	
