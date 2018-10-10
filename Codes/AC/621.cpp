#include <iostream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#define pb push_back
#define X first
#define Y second
#define pii pair<int,int>
#define qclear(a) while(!a.empty())a.pop();
#define lowbit(x) (x&-x)
#define sd(n) scanf("%d",&n)
#define sdd(n,m) scanf("%d%d",&n,&m)
#define sddd(n,m,k) scanf("%d%d%d",&n,&m,&k)
#define slld(n) scanf("%lld",&n)
#define slldd(n,m) scanf("%lld%lld",&n,&m)
#define sllddd(n,m,k) scanf("%lld%lld%lld",&n,&m,&k)
#define slf(n) scanf("%lf",&n)
#define slff(n,m) scanf("%lf%lf",&n,&m)
#define slfff(n,m,k) scanf("%lf%lf%lf",&n,&m,&k)
#define mst(a,b) memset(a,b,sizeof(a))
#define cout3(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl
#define cout2(x,y) cout<<x<<" "<<y<<endl
#define cout1(x) cout<<x<<endl
#define IOS std::ios::sync_with_stdio(false)
#define SRAND srand((unsigned int)(time(0)))
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
using namespace std;
const double PI=acos(-1.0);
const int INF=0x3f3f3f3f;
const double eps=1e-8;
const ll mod=10007;
const int N=55;

int n;
vector<ll>v;
int main() {
#ifdef LOCAL
    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
#else
    //    freopen("","r",stdin);
    //    freopen("","w",stdout);
#endif
    sd(n);
    for(int i=19; v.size()<n; i++) {
        int now=i;
        int cnt=0;
        while(now) {
            cnt+=now%10;
            now/=10;
        }
        if(cnt==10)
            v.pb(i);
//        cout2(i,cnt);
    }
    cout1(v[v.size()-1]);
    return 0;
}
