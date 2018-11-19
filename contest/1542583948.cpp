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


bool flag, flag2, flag3;
int32_t main()
{
    kchay;
    //freopen("typewriter.in", "r", stdin); freopen("typewriter.out", "w", stdout);

    cin >> h >> m >> s >> t1 >> t2;
    
    if(t1*5%60 > t2*5%60)swap(t1, t2);
    
    if(t1*5%60 < s && t2*5%60 > s)flag = true;
    // cout << flag << " " << t2*5%60 << endl;
    if((t1*5%60 < m || (t1*5%60 == m && s > 0)) && t2*5%60 > m)flag2 = true;
    // cout << flag2 << endl;
    if(t1 > t2)swap(t1, t2);
    if((t1 < h || (t1 == h && (m > 0 || s > 0))) && t2 > h)flag3 = true;
    // cout << flag3 << endl;
    if(t1 == 12 || t2 == 12)flag3^=1;
    if(flag3 == flag2 && flag2 == flag)cout << "YES"; else cout << "NO";
    
    
    return 0;
}