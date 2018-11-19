#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <queue>
#include <cstdio>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <cstring>
#include <cmath>
#include <vector>
#include <ctime>
#include <bitset>
using namespace std;
#define pb push_back
#define sd(n) scanf("%d",&n)
#define sdd(n,m) scanf("%d%d",&n,&m)
#define sddd(n,m,k) scanf("%d%d%d",&n,&m,&k)
#define sld(n) scanf("%lld",&n)
#define sldd(n,m) scanf("%lld%lld",&n,&m)
#define slddd(n,m,k) scanf("%lld%lld%lld",&n,&m,&k)
#define sf(n) scanf("%lf",&n)
#define sff(n,m) scanf("%lf%lf",&n,&m)
#define sfff(n,m,k) scanf("%lf%lf%lf",&n,&m,&k)
#define ss(str) scanf("%s",str)
#define ans() printf("%d",ans)
#define ansn() printf("%d\n",ans)
#define anss() printf("%d ",ans)
#define lans() printf("%lld",ans)
#define lanss() printf("%lld ",ans)
#define lansn() printf("%lld\n",ans)
#define fansn() printf("%.10f\n",ans)
#define r0(i,n) for(int i=0;i<(n);++i)
#define r1(i,e) for(int i=1;i<=e;++i)
#define rn(i,e) for(int i=e;i>=1;--i)
#define rsz(i,v) for(int i=0;i<(int)v.size();++i)
#define szz(x) ((int)x.size())
#define mst(abc,bca) memset(abc,bca,sizeof abc)
#define lowbit(a) (a&(-a))
#define all(a) a.begin(),a.end()
#define pii pair<int,int>
#define pli pair<ll,int>
#define pll pair<ll,ll>
#define mp make_pair
#define lrt rt<<1
#define rrt rt<<1|1
#define X first
#define Y second
#define PI (acos(-1.0))
#define sqr(a) ((a)*(a))
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000000+7;
const double eps=1e-9;
const int inf=0x3f3f3f3f;
const ll infl = 10000000000000000;
const int maxn=  10000+10;
const int maxm = 100+10;
//Pretests passed
int in(int &ret)
{
    char c;
    int sgn ;
    if(c=getchar(),c==EOF)return -1;
    while(c!='-'&&(c<'0'||c>'9'))c=getchar();
    sgn = (c=='-')?-1:1;
    ret = (c=='-')?0:(c-'0');
    while(c=getchar(),c>='0'&&c<='9')ret = ret*10+(c-'0');
    ret *=sgn;
    return 1;
}

int head[30];
int tail[30];
char s[maxn];
int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
#endif // LOCAL

    ss(s+1);
    string ans = s+1;
    bool ok = 0;
    ans = s+1;
    int n;
    sd(n);
    r1(i,n)
    {
        string x;
        cin>>x;
        if(x.find(ans)!=-1)ok = 1;
        int a = x[0]-'a';
        int b = x[x.length()-1]-'a';
        head[a] = 1;
        tail[b] = 1;
    }
    int a = s[1] -'a' , b = s[2] - 'a';
//    if(head[a]&&tail[b])ok = 1;
    if(head[b]&&tail[a])ok = 1;
    puts(ok?"YES":"NO");


    return 0;
}
