#include<cstdio>
#include<cstring>
#include<algorithm>
#define N 205
using namespace std;
int n,m;
char a[N][18],b[N][18];
char s[N];
bool f[N][18][(1<<16)+100];
int main()
{
	scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		scanf("%s",s+1);
		int len=strlen(s+1);
		for(int i=1;i<=len;i++)
		{
			int now=0;
			for(int j=1;j<=16;j++)if(i+j-1<=len)
			{
				now=now<<1|(s[i+j-1]-'0');
				f[k][j][now]=1;
			}
		}
		for(int i=1;i<=len&&i<=16;i++)
		{
			a[k][i]=s[i];
		}
		for(int j=1;j<=16&&j<=len;j++)
		{
			b[k][j]=s[len+1-j];
		}
		for(int i=1,j=min(len,16);i<j;i++,j--)
		swap(b[k][i],b[k][j]);
	}
	scanf("%d",&m);
	int x,y;
	for(int k=n+1;k<=n+m;k++)
	{
		scanf("%d%d",&x,&y);
		memset(s,0,sizeof(s));
		for(int i=1;i<=16;i++)
		for(int j=0;j<(1<<i);j++)
		f[k][i][j]=f[x][i][j]|f[y][i][j];
		int len=0;
		for(int i=1;b[x][i];i++)
		{
			s[++len]=b[x][i];
		}
		for(int i=1;a[y][i];i++)
		{
			s[++len]=a[y][i];
		}
//		printf("%s\n",s+1);
		for(int i=1;i<=len;i++)
		{
			int now=0;
			for(int j=1;j<=16;j++)if(i+j-1<=len)
			{
				now=now<<1|(s[i+j-1]-'0');
				f[k][j][now]=1;
			}
		}
		len=0;
		for(int i=1;a[x][i];i++)
		{
			s[++len]=a[x][i];
		}
		for(int i=1;a[y][i];i++)
		{
			s[++len]=a[y][i];
		}
		for(int i=1;i<=len&&i<=16;i++)
		{
			a[k][i]=s[i];
		}
		len=0;
		for(int i=1;b[x][i];i++)
		{
			s[++len]=b[x][i];
		}
		for(int i=1;b[y][i];i++)
		{
			s[++len]=b[y][i];
		}
		for(int j=1;j<=16&&j<=len;j++)
		{
			b[k][j]=s[len+1-j];
		}
		for(int i=1,j=min(len,16);i<j;i++,j--)
		swap(b[k][i],b[k][j]);
		bool flag=0;
		for(int i=1;i<=16&&!flag;i++)
		{
			for(int j=0;j<(1<<i)&&!flag;j++)
			if(!f[k][i][j])
			{
				flag=1;
				printf("%d\n",i-1);
				break;
			}
		}
	}
}