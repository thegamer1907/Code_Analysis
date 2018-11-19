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

char a[3];
char s[102][4];
int check(char c,char d)
{
    if(a[0]==c&&a[1]==d)return 1;
    return 0;
}
int main()
{
	scanf("%s",a);
	int n;
	scanf("%d",&n);
	int flag=0;
	for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        if(strcmp(s[i],a)==0)
            flag=1;
    }
    for(int i=0;flag==0&&i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //printf("%c %c\n",s[i][1],s[j][0]);
            if(check(s[i][1],s[j][0]))
            {
                flag=1;break;
            }
        }
    }
    if(flag)puts("YES");
    else puts("NO");
	return 0;
}
