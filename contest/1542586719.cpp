#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<set>
#include<bitset>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#define INF 0x3f3f3f3f
#define inf 2*0x3f3f3f3f
#define llinf 1000000000000000000
#define pi acos(-1.0)
#define mod 1000000007
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define lrt rt<<1
#define rrt rt<<1|1
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define per(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define mem(a,b) memset(a,b,sizeof(a))
#define lb(x) (x&-x)
#define gi(x) scanf("%d",&x)
#define gi2(x,y) scanf("%d%d",&x,&y)
#define gll(x) scanf("%lld",&x)
#define gll2(x,y) scanf("%lld%lld",&x,&y)
#define gc(x) scanf("%c",&x)
#define gc2(x,y) scanf("%c%c",&x,&y)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,int>P;
/***********************************************/
int h,m,s,t1,t2;
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)swap(t1,t2);
    t1*=2;t2*=2;
    if(s==0)
    {
        if(m%5==0)m=m/5*2;
        else m=m/5*2+1;
    }
    else m=m/5*2+1;
    if(m==0)
    {
        h=h*2;
    }
    else h=h*2+1;
    if(s%5==0)s=s/5*2;
    else s=s/5*2+1;
    int cnt=0;
    if(t1==h||t1==m||t1==s||t2==h||t2==m||t2==s)return cout<<"NO"<<endl,0;
    rep(i,t1,t2+1)
    {
        if(i==h)cnt++;
        if(i==m)cnt++;
        if(i==s)cnt++;
    }
    if(cnt==0||cnt==3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
