
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <list>
#include <map>
#define mset(a,i) memset(a,i,sizeof(a))
#define SS(s)     scanf("%s",s)
#define S1(n)     scanf("%d",&n)
#define S2(n,m)   scanf("%d%d",&n,&m)
#define P(n)      printf("%d\n",n)
#define FIN       freopen("input.txt","r",stdin)
#define FOUT      freopen("output.txt","w",stdout)
#define gcd(a,b)  __gcd(a,b)
using namespace std;
typedef long long ll;
const double eps=1e-6;
const int INF=0x3f3f3f3f;
const int mod=1e9+7;
const int MAX=1e6+5;
const double PI=acos(-1);
int dir[5][2]={0,1,0,-1,1,0,-1,0};
ll qpow(ll n,ll m){n%=mod;ll ans=1;while(m){if(m%2)
		ans=(ans*n)%mod;m/=2;n=(n*n)%mod;}return ans;}
ll inv(ll b){return b==1?1:(mod-mod/b)*inv(mod%b)%mod;}
ll inv2(ll b){return qpow(b,mod-2);}

int a[201010],x;
int main()
{
	int n,k;
	while(cin>>n>>k)
    {
        int temp=0x00ffffff;
        for(int i=1;i<=n;i++)
        {
            a[i]=0;
            for(int j=1;j<=k;j++)
            {
                scanf("%d",&x);
                a[i]=(a[i]<<1)+x;
            }
            temp&=a[i];
        }
        if(temp){
            puts("NO");continue;
        }
        bool vis[19]={0};
        for(int i=1;i<=n;i++)
            vis[a[i]]=1;
        int flag=0;
        for(int i=0;i<16;i++)
            for(int j=0;j<16;j++)
                {
                    if(vis[i]&&vis[j]&&((i&j)==0))
                        flag=1;
                }

        if(flag)puts("YES");
        else puts("NO");
    }
	return 0;
}
