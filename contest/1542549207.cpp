using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define pll pair <ll,ll>
#define pii pair <int,int>
#define fir first
#define sec second
#define mp make_pair
#define pb push_back
#define MASK(i) ((1LL)<<(i))
#define BIT(x,i) (((x)>>(i))&1)
#define all(c) (c).begin(),(c).end()
#define sz(c) (c).size()
#define fn "test"    ///FILE_NAME_HERE
#define rep(c,it) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define rrep(c,it) for(__typeof((c).rbegin()) it=(c).rbegin();it!=(c).rend();++it)

template <class T,class U>
void maximize(T &x,U y)
{
    if(x < y)x=y;
}
template <class T,class U>
void minimize(T &x,U y)
{
    if(x > y)x=y;
}
template <class T>
T Abs(T x)
{
    return (x < (T)0 ? -x : x);
}
template <class T,class U,class V>
T addmod(T x,U y,V mod)
{
    return ((x + y)%mod + mod)%mod;
}
template <class T,class U,class V>
T submod(T x,U y,V mod)
{
    return ((x - y)%mod + mod)%mod;
}
template <class T,class U,class V>
T mulmod(T x,U y,V mod)
{
    return (ll)x*y%mod;
}
///---------------------------------------------------------END_TEMPLATE-------------------------------------------------------///

namespace task{

const int N=1e5+5;
const ll inf=1e18;
int cnt[N],a[N];
ll dp[22][N];
ll res=0;
int n,k,cur_l,cur_r;

void del(int i)
{
    res += 1 - 2*cnt[a[i]];
    --cnt[a[i]];
}

void add(int i)
{
    res += 1 + 2*cnt[a[i]];
    ++cnt[a[i]];
}

ll calc(int l,int r)
{
    while(cur_l < l)del(cur_l),++cur_l;
    while(cur_l > l)--cur_l,add(cur_l);
    while(cur_r < r)++cur_r,add(cur_r);
    while(cur_r > r)del(cur_r),--cur_r;
    return res;
}

void computeDP(int i,int jleft,int jright,int kleft,int kright)
{
    if(jleft > jright)return ;
    int jmid=(jleft + jright)>>1;
    int bestk=kleft;
    dp[i][jmid] = inf;
    for(int j=kright;j >= kleft;--j)
      if(j < jmid)
    {
        if(dp[i][jmid] > dp[i - 1][j] + calc(j + 1,jmid))
        {
            dp[i][jmid] = dp[i - 1][j] + res;
            bestk = j;
        }
    }
    computeDP(i,jleft,jmid - 1,kleft,bestk);
    computeDP(i,jmid + 1,jright,bestk,kright);
}

void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    cur_l=0,cur_r=-1;
    res = 0;
    for(int i=1;i<=n;++i)
        dp[1][i] = calc(1,i);
    for(int i=2;i<=k;++i)
    {
        cur_l=0,cur_r=-1;
        res = 0;
        fill(cnt + 1,cnt + 1 + n,0);
        computeDP(i,1,n,1,n);
    }
    cout<<(dp[k][n] - n)/2;
}}

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen(fn".inp","r",stdin);
    freopen(fn".out","w",stdout);
    #endif // ONLINE_JUDGE
//    ofstream cout(fn".inp");
//    cout<<100000<<' '<<20<<'\n';
//    for(int i=1;i<=100000;++i)
//        cout<<1 + rand() % 100000<<'\n';
//    cout.close();
    task::solve();
}
