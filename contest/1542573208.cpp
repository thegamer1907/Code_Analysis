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
int n,m,x,y;
//int cnt;
//map<string,int>id;
string a[205],temm,temn;
int an[205];
vector<int> g[205];
ll er[40];
set<ll>s;
bool check(string x,int len)
{
    s.clear();
    ll now=0;
    int tot=x.length();
    if(len>x.length())return false;
    for(int i=0;i<len-1;i++)
        now=now*2LL+x[i]-'0';
    for(int i=len-1;i<tot;i++)
    {
        now=now*2LL+x[i]-'0';
        s.insert(now);
        now%=er[len-1];
    }
    return s.size()==er[len];
}
int solve(string x)
{
    int l=1,r=min((int)log2(x.length())+2,15),mid,re=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(x,mid))
        {
            re=mid;l=mid+1;
        }
        else r=mid-1;
    }
    return re;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    er[0]=1;
    for(int i=1;i<=24;i++)er[i]=2LL*er[i-1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        g[i].pb(i);
        an[i]=solve(a[i]);
    }
    cin>>m;
    for(int i=n+1;i<=n+m;i++)
    {
        cin>>x>>y;
        if(a[x].length()+a[y].length()>=er[15]+1)
        {
            if(an[x]>an[y])
            {
                an[i]=an[x];a[i]=a[x];
            }
            else
            {
                an[i]=an[y];a[i]=a[y];
            }
            if(a[x].length()<=1000)
                temm=a[x];
            else temm=a[x].substr(a[x].length()-1000,1000);
            if(a[y].length()<=1000)
                temn=a[y];
            else temn=a[y].substr(0,1000);
            temm=temm+temn;
            int ltem=solve(temm);
            if(ltem>an[i])
            {
                a[i]=temm;
                an[i]=ltem;
            }
            cout<<an[i]<<"\n";
        }
        else
        {
            a[i]=a[x]+a[y];
            an[i]=solve(a[i]);
            cout<<an[i]<<"\n";
        }
    }
    return 0;
}
