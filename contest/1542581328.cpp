#include <bits/stdc++.h>

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define fi first
#define se second
#define pb push_back
#define last(s) (s)[(s).size()-1]
#define all(a) (a).begin(),(a).end()
#define elif else if
#define left asdasd
#define next zaza
#define prev azaz
#define cclear cout<<flush;
#define x0 kerker
#define y0 lolik
#define kchay ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

using llong = long long;
using ld = long double;
using ii = pair<int,int>;
using ull = unsigned long long;
using pll = pair<llong, llong>;
using psi = pair<string, int>;


const llong over999 = 1e18;
const llong md = 1e9+7;
const ld eps = 1e-16;
const ld Pi = acos(-1);

int h, m, s, t1, t2, pm, ps, t3;


int n, x, cnt[5], k, p[5];
bool used[100];
int32_t main()
{
    kchay;
    //freopen("typewriter.in", "r", stdin); freopen("typewriter.out", "w", stdout);
    
    p[0] = 1, p[1] = 2, p[2] = 4, p[3] = 8;
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
    {
        int now = 0;
        for(int j = 0; j < k; j++)
        {
            cin >> x;
            cnt[j] += !(x);
            if(x)now += p[j];
        }
        used[now] = true;
    }
    
    for(int i = 0; i < 16; i++)
    {
        if(!used[i])continue;
        for(int j = 0; j < 16; j++)
        {
            if(!used[j]) continue;
            if(!(i&j))return cout << "YES", 0;
        }
    }


    cout << "NO";
    
    return 0;
}