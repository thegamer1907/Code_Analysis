#include <bits/stdc++.h>
#define ll long long
#define FOR(i,x,y) for(int i = x; i <= y; ++i)
#define rFOR(i,x,y) for(int i = x; i >= y; --i)
#define MS(a,x) memset(a,x,sizeof a)
#define pb push_back
using namespace std;

const int MAXN = 1e6 + 7;

double h,m,s,t1,t2;

int main()
{
    scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
    m += s / 60.0;
    h += m / 60.0;
    int l = min(t1,t2);
    int r = max(t1,t2);
    int ans = 0;
    if(h >= l && h <= r) ++ans;
    if(m >= l * 5.0 && m <= r * 5.0) ++ans;
    if(s >= l * 5.0 && s <= r * 5.0) ++ans;
    if(!ans || ans == 3) printf("YES\n");
    else printf("NO\n");

    return 0;
}
