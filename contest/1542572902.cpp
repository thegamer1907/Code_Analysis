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
int h,m,s,t1,t2,lo1,lo2,t;
int pos[3];
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(h==12)h=0;
    pos[0]=h;pos[1]=m/5;pos[2]=s/5;
    t1%=12;t2%=12;
    t=t1;
    while(1)
    {
        if(t==t2)return 0*printf("yes\n");
        if(t==pos[0]||t==pos[1]||t==pos[2])break;
        ++t;t%=12;
    }
    t=t1;
    while(1)
    {
        if(t==t2)return 0*printf("yes\n");

        --t;t=(t+12)%12;
        if(t==pos[0]||t==pos[1]||t==pos[2])break;
    }
    printf("NO\n");
    return 0;
}
