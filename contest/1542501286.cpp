#include<bits/stdc++.h>
#define pb push_back
#define taskname "TEST"
using namespace std;
typedef long long ll;
typedef long double ld;
const int maxn = 1e5 + 5;
int n , k , a[maxn] , chk[maxn];
ll dp[21][maxn];
void enter()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
}
int L , H;
ll cost = 0;
void add(int x)
{
    cost += chk[x];
    chk[x]++;
}
void del(int x)
{
    chk[x]--;
    cost -= chk[x];
}
ll Cost(int l , int h)
{
    if(l >= h)return 0;
    while(L > l)add(a[--L]);
    while(L < l)del(a[L++]);
    while(H > h)del(a[H--]);
    while(H < h)add(a[++H]);
    return cost;
}
void d(int x , int l , int r , int bestl , int bestr)
{
    if(l > r)return;
    int mid = l + r >> 1;
    int best = mid;
    dp[x][mid] = dp[x - 1][mid];
    for(int i = min(bestr , mid) ; i >= bestl ; --i)
    {
        ll tmp = dp[x - 1][i - 1] + Cost(i , mid);
        if(tmp < dp[x][mid])
        {
            dp[x][mid] = tmp;
            best = i;
        }
    }
    d(x , l , mid - 1 , bestl , best);
    d(x , mid + 1 , r , best , bestr);
}
void solve()
{
    L = 1;H = n;
    for(int i = 1 ; i <= n ; ++i)
    {
        dp[1][i] = dp[1][i - 1] + chk[a[i]];
        chk[a[i]]++;
    }
    cost = dp[1][n];
    for(int i = 2 ; i <= k ; ++i)
        d(i , 1 , n , 1 , n);
    cout << dp[k][n];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    if(fopen(taskname".INP","r"))
        freopen(taskname".INP","r",stdin) ,
        freopen(taskname".OUT","w",stdout);
    enter();solve();
}
