#include <cstdio>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
#define mst(a,b) memset((a),(b),sizeof(a))
#define f(i,a,b) for(int i=(a);i<=(b);++i)
#define rush() int T;scanf("%d",&T);while(T--)

typedef long long ll;
const int maxn=105;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f3f;
const double eps = 1e-6;


char s[maxn];

ll n1,n2,n3;
ll x1,x2,x3;
ll w1,w2,w3;
ll sum;

bool judge(ll num)
{
    ll a1=(num*n1-x1);
    if(a1<0) a1=0;
    ll a2=(num*n2-x2);
    if(a2<0) a2=0;
    ll a3=(num*n3-x3);
    if(a3<0) a3=0;
    return a1*w1+a2*w2+a3*w3<=sum;
}

int main()
{
    n1=n2=n3=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='B')
            n1++;
        if(s[i]=='S')
            n2++;
        if(s[i]=='C')
            n3++;
    }
    scanf("%I64d%I64d%I64d",&x1,&x2,&x3);
    scanf("%I64d%I64d%I64d",&w1,&w2,&w3);
    scanf("%I64d",&sum);
    ll l=0,r=1e13;
    ll ans=0;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(judge(m))
        {
            ans=m;
            l=m+1;
        }
        else r=m-1;
    }
    printf("%I64d\n",ans);
}