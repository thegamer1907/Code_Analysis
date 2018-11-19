#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <map>
#include <queue>
#include <iomanip>
#include <set>
#include <cstdlib>
#include <cmath>
#include <bitset>
using namespace std;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define LL long long
#define rep1(i,a,b) for (int i = a;i <= b;i++)
#define rep2(i,a,b) for (int i = a;i >= b;i--)
#define mp make_pair
#define pb emplace_back
#define fi first
#define se second
#define ld long double
#define ms(x,y) memset(x,y,sizeof x)
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define rs(x) scanf("%s",x)
#define rf(x) scnaf("%lf",&x)
#define oi(x) printf("%d",x)
#define ol(x) printf("%lld",x)
#define oc putchar(' ')
#define os(x) printf(x)
#define all(x) x.begin(),x.end()
#define Open() freopen("F:\\rush.txt","r",stdin)
#define Close() ios::sync_with_stdio(0)
#define sz(x) ((int) x.size())
#define ld long double

using namespace std;

int n,k,cnt[4];
bool ok[1<<5];

bool dfs(int cur,int sum)
{
    if (cur==(1<<k))
    {
        if (sum==0)
            return false;
        rep1(i,0,k-1)
            if (cnt[i]*2>sum)
                return false;
        return true;
    }
    if (dfs(cur+1,sum))
        return true;
    if (ok[cur])
    {
        rep1(i,0,k-1)
            if (cur>>i&1)
                cnt[i]++;
        if (dfs(cur+1,sum+1))
            return true;
        rep1(i,0,k-1)
            if (cur>>i&1)
                cnt[i]--;
    }
    return false;
}

int main()
{
    //freopen("F:\\rush.txt","r",stdin);
    ri(n);ri(k);
    rep1(i,0,n-1)
    {
        int x = 0;
        rep1(j,0,k-1)
        {
            int s;
            ri(s);
            x|=(s<<j);
        }
        ok[x] = true;
    }
    if (dfs(0,0))
        puts("YES");
    else
        puts("NO");
    return 0;
}
