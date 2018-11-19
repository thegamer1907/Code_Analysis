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

int main()
{
    double h,m,s;
    int t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        if(t1>t2)t2+=12;
        t1*=5;
        t2*=5;
        h=(h*5 + m/60 +s/3600);
        while(h>=60)h-=60;
        m+=s/60;
        if(m>=60)m-=60;

        //printf("%.2lf %.2lf %.2lf %d %d\n",h,m,s,t1,t2);
        int c=0;
        if(t1<h&&h<t2)c++;
        if(t1<m&&m<t2)c++;
        if(t1<s&&s<t2)c++;

        if(t1<h+60&&h+60<t2)c++;
        if(t1<m+60&&m+60<t2)c++;
        if(t1<s+60&&s+60<t2)c++;

        int p=0;
        if(h==t1||h==t2)p++;
        if(m==t1||m==t2)p++;
        if(s==t1||s==t2)p++;
        if(h+60==t1||h+60==t2)p++;
        if(m+60==t1||m+60==t2)p++;
        if(s+60==t1||s+60==t2)p++;

        //printf("c=%d p=%d\n",c,p);
        if(c==0||c==3||(c+p==3))puts("YES");
        else puts("NO");
    }
	return 0;
}
