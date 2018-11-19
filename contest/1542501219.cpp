#include<bits/stdc++.h>
#define ll long long
using namespace std;
void qmax(int &x,int y) {if (x<y) x=y;}
void qmin(int &x,int y) {if (x>y) x=y;}
inline ll read()
{
    char s;
    ll k=0,base=1;
    while((s=getchar())!='-'&&s!=EOF&&!(isdigit(s)));
    if(s==EOF)exit(0);
    if(s=='-')base=-1,s=getchar();
    while(isdigit(s)){k=k*10+(s^'0');s=getchar();}
    return k*base;
}
inline void write(int x)
{
    static char cnt,num[15];cnt=0;
    if (!x)
    {
        printf("0");
        return;
    }
    for (;x;x/=10) num[++cnt]=x%10;
    for (;cnt;putchar(num[cnt--]+48));
}
int n,k,vis[20],ans;
int a[20],cnt;
void check()
{
	if (!cnt) return;
	int b[4]={0};
	for (int i=0,x,t=0;i<16;i++)
	if (vis[i])
	{
		t=0;
		x=i;
		while (x)
		{
			if (x&1) b[t]++;
			x/=2;
			++t;
		}
	}
	if (b[0]*2>cnt) return;
	if (b[1]*2>cnt) return;
	if (b[2]*2>cnt) return;
	if (b[3]*2>cnt) return;
	ans=1;
}
void dfs(int x)
{
	if (x==16)
	{
		check();
		return;
	}
	if (a[x])
	{
		cnt++;
		vis[x]=1;
		dfs(x+1);
		vis[x]=0;
		cnt--;
	}
	dfs(x+1);
}
int main()
{
	n=read(),k=read();
	for (int i=1,cur,x;i<=n;i++)
	{
		cur=0;
		for (int j=1;j<=k;j++)
		{
			x=read();
			cur=cur<<1|x;
		}
		a[cur]++;
	}
	dfs(0);
	if (ans==1)
	{
		cout<<"YES";
	} else
	{
		cout<<"NO";
	}
	return 0;
}
