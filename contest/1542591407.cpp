#include<cstdio>
#include<algorithm> 
#include<cstring>
#define LL long long
using namespace std;
const int N=105;
int n,flag;
char s[3],c[3];
bool a[30],b[30];
int read()
{
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
int main()
{
	scanf("%s%d",s+1,&n);
//	printf("%d %d\n",s[1]-'a',s[2]-'a');
	for(int i=1;i<=n;i++)
	{
		scanf("%s",c+1);
		b[c[1]-'a']=true;
		a[c[2]-'a']=true;
		if(c[1]==s[1]&&c[2]==s[2])flag=true;
	}
	if((a[s[1]-'a']&&b[s[2]-'a'])||flag)printf("YES");
	else printf("NO");
	return 0;
}
