#include<cstdio>
#include<algorithm> 
#include<cstring>
#define LL long long
using namespace std;
const int N=205;
const int M=(1<<12)+5;
const int inf=49;
int n,m,a,b;
int num[N],len[N],s1[N][15],s2[N][15];
char s[N];
bool f[N][13][M];
int read()
{
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
int main()
{
	n=read();
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s+1);
		len[i]=strlen(s+1);
		for(int j=1;j<=len[i];j++)num[j]=s[j]-'0';
		for(int j=1;j<=len[i];j++)
		{
			a=0;
			for(int k=j;k<=min(len[i],j+11);k++)
			{
				a=a*2+num[k];
				f[i][k-j+1][a]=true;
			}
		}
		for(int j=1;j<=min(12,len[i]);j++)s1[i][j]=num[j];
		int cnt=0;
		for(int j=max(1,len[i]-11);j<=len[i];j++)s2[i][++cnt]=num[j];
	}
	
	m=read();
	while(m--)
	{
		a=read();b=read();n++;int cnt=0;
		if(len[a]+len[b]>=48)len[n]=inf;
		else len[n]=len[a]+len[b];
		
		if(len[a]<12)
		{
			for(int j=1;j<=len[a];j++)s1[n][j]=s1[a][j];
			for(int j=len[a]+1;j<=12;j++)s1[n][j]=s1[b][j-len[a]];
		}
		else for(int j=1;j<=12;j++)s1[n][j]=s1[a][j];
		if(len[b]<12)
		{
			int shu=12-len[b],la=min(len[a],12);
			for(int j=max(1,la-shu+1);j<=la;j++)s2[n][++cnt]=s2[a][j];
			for(int j=1;j<=len[b];j++)s2[n][++cnt]=s2[b][j];
		}
		else for(int i=1;i<=12;i++)s2[n][i]=s2[b][i];
		
		int sum=0,now;
		for(int i=min(len[a],12);i>=1;i--)
		{
			int num=min(len[a],12)-i;sum+=(1<<num)*s2[a][i];now=sum;
			for(int j=1;j<=min(len[b],12);j++)
			{
				if(j+num+1>12)break;
				now=now*2+s1[b][j];
				f[n][j+num+1][now]=true;
			}
		}
		
		for(int i=1;i<=min(12,len[n]);i++)
		{
			int mx=(1<<i)-1;
			for(int j=0;j<=mx;j++)
				if(f[a][i][j]||f[b][i][j])f[n][i][j]=true;
		}
		
		int ans=0;bool fl=false;
		for(int i=1;i<=min(12,len[n]);i++)
		{
			int mx=(1<<i)-1;
			for(int j=0;j<=mx;j++)
				if(!f[n][i][j]){fl=true;break;}
			if(fl)break;
			ans=i;
		}
		printf("%d\n",ans);
	}
	return 0;
}
