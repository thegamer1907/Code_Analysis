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
char s[3],sx[3];
int n;
int main()
{
    cin>>s;
    cin>>n;
    int flag1=0,flag2=0;
    rep(i,0,n)
    {
        scanf("%s",sx);
        if(sx[0]==s[0]&&sx[1]==s[1])return cout<<"YES"<<endl,0;
        if(s[0]==sx[1])flag1=1;
        if(s[1]==sx[0])flag2=1;
    }
    if(flag1&&flag2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
