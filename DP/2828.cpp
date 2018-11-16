#include<bits/stdc++.h>
#define ll long long
using namespace std;
void qmax(int &x,int y) {if (x<y) x=y;}
void qmin(int &x,int y) {if (x>y) x=y;}
inline int read()
{
    char s;
    int k=0,base=1;
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
const ll mod=1e9+7;
const int maxn=2010;
int n,k;
ll dp[maxn][maxn],ans;
int main()
{
	n=read();k=read();
	for (int i=1;i<=n;i++) dp[1][i]=1;
	for (int j=1;j<k;j++)
	{
		for (int i=1;i<=n;i++)
			if (dp[j][i])
			{
				for (int k=i;k<=n;k+=i)
					dp[j+1][k]=(dp[j+1][k]+dp[j][i])%mod;
			}
	}
	for (int i=1;i<=n;i++) ans=(ans+dp[k][i])%mod;
	printf("%lld\n",ans);
	return 0;
}