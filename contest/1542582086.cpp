#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX=1005;

int a[20],tot[20];
int N,K;
int gi()
{
	int x=0,w=1;char ch=getchar();
	while ((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if (ch=='-') w=-1,ch=getchar();
	while (ch>='0'&&ch<='9')
	{
		x=(x<<3)+(x<<1)+ch-'0';
		ch=getchar();
	}
	return x*w;
}

void check()
{
	int num=0,b[5]={0};
	for (int i=0;i<(1<<K);i++)
		if (a[i])
		{
			num++;
			for (int j=0;j<K;j++)
				if (i&(1<<j)) b[j]++;
		}
	if (!num) return;
	for (int j=0;j<K;j++) if (b[j]>(num>>1)) return;
	printf("YES");exit(0);
}
void dfs(int t)
{
	if (t==(1<<K)) {check();return;}
	if (tot[t])
	{
		a[t]=1;
		dfs(t+1);
		a[t]=0;
	}
	dfs(t+1);
}

int main()
{
	N=gi();K=gi();
	for (int i=1;i<=N;i++)
	{
		int x=0;
		for (int j=0;j<K;j++)
			x+=(gi()<<j);
		tot[x]=1;
	}
	dfs(0);
	printf("NO");
	return 0;
}
