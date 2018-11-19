#include <bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,a,n) for (int i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;
const ll mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
const int maxn=1e5+10;
int h,m,s,t1,t2;
bool vis[3600*70];
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h*=5;
    h%=60;
    m%=60;
    s%=60;
    t1*=5;
    t2*=5;
    t1%=60;
    t2%=60;
    vis[h*3600+m*60+s]=vis[m*3600+s*60]=vis[s*3600]=1;
    bool ok=1;
    int tem=t1*3600;
    t2*=3600;
    int md=3600*60;
    while(tem!=t2) {
        if(vis[tem]) {
            ok=0;
            break;
        }
        tem=(tem+1)%md;
    }
    tem=t1*3600;
    bool flag=1;
    while(tem!=t2) {
        if(vis[tem]) {
            flag=0;
            break;
        }
        tem=(tem-1+md)%md;
    }
    puts(ok||flag?"YES":"NO");
    return 0;
}
