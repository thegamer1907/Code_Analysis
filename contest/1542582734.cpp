#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <cmath>
#include <ctime>
#include <bitset>
#include <utility>
#include <assert.h>
using namespace std;
#define rank rankk
#define mp make_pair
#define pb push_back
#define xo(a,b) ((b)&1?(a):0)
#define tm tmp
#pragma comment(linker, "/STACK:1024000000,1024000000") 
//#define LL ll
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll,int> pli;
typedef pair<ll,ll> pll;
const int INF=0x3f3f3f3f;
const ll INFF=0x3f3f3f3f3f3f3f3fll;
const int MAX=4e5+10;
//const ll MAXN=2e8;
//const int MAX_N=MAX;
const ll MOD=1e9+7;
//const long double pi=acos(-1.0);
//const double eps=0.00000001;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<typename T>inline T abs(T a) {return a>0?a:-a;}
template<class T> inline
void read(T& num) {
    bool start=false,neg=false;
    char c;
    num=0;
    while((c=getchar())!=EOF) {
        if(c=='-') start=neg=true;
        else if(c>='0' && c<='9') {
            start=true;
            num=num*10+c-'0';
        } else if(start) break;
    }
    if(neg) num=-num;
}
inline ll powMM(ll a,ll b,ll M){
    ll ret=1;
    a%=M;
//    b%=M;
    while (b){
        if (b&1) ret=ret*a%M;
        b>>=1;
        a=a*a%M;
    }
    return ret;
}
void open()
{
//    freopen("1009.in","r",stdin);
    freopen("out.txt","w",stdout);
}
int n,k;
int a[5],b[5],c[5];
int id(int e[])
{
    int re=0;
    for(int i=1;i<=k;i++)
    {
        re=(re*2+a[i]);
    }
    return re;
}
void trace(int num,int f[])
{
    for(int i=k;i>=1;i--)
    {
        f[i]=num%2;num/=2;
    }
}
vector<int>x;
int cnt[500];
int re[500][30],ge;
bool an;
bool check(int i,int j)
{
    for(int s=1;s<=k;s++)
    {
        if(re[i][s]+re[j][s]>1)return false;
    }
    return true;
}
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
            scanf("%d",&a[j]);
        int tem=id(a);
        if(!cnt[tem])
        {
            cnt[tem]=1;x.pb(tem);
            ++ge;
            for(int j=1;j<=k;j++)
                re[ge][j]=a[j];
        }
        else
            ++cnt[tem];
    }
    if(cnt[0])
        return 0*printf("YES\n");
    else
    {
        for(int i=1;i<=ge&&!an;i++)
        {
            for(int j=1;j<=ge&&!an;j++)
            {
                if(check(i,j))
                    an=true;
            }
        }
    }
    if(an)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
/*
3 4
1 1 0 0
0 1 1 0
1 0 0 1

1 4
0 0 0 1
*/
