#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("omit-frame-pointer")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <cstring>
#include <iomanip>
#include <set>
#include <sstream>
#include <ctime>

#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))

#define sqr(a) (a)*(a)
#define m_p make_pair
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;
const double pi=3.1415926535897932384626433832795;
using namespace std;



int main()
{

// freopen("1.in", "r", stdin);
// freopen("1.out", "w", stdout);
    fast_io;
    srand(time(0));

    ll h,m,s,t1,t2,t3,t4;

    cin >> h >> s >> m;
    cin >> t1 >> t2;

//    t1%=12;
//    t2%=12;
    h%=12;

    h*=3600*5;
    t2*=3600*5;
    t1*=3600*5;

    m*=3600;
    s*=3600;
//
    s+=m/60;
    h+=s/60  +m/3600;

    h%=216000;
    s%=216000;

    t1%=216000;
    t2%=216000;

//    cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;

    ll ans=0;

    t3=t1;
    t4=t2;

    while(t3!=t4) {
//        if (t3==h or t3==m or t3==s) break;
        t3++;
        if (t3>=216000) t3=0;
        if (t3==t4) ans++;
        if (t3==h or t3==m or t3==s) break;
    }

//    cout << ans << endl;

    t3=t1;
    t4=t2;

    //cout <<

    while(t3!=t4) {
        t3--;
        if (t3<=-1) t3=215999;
        if (t3==t4) ans++;
        if (t3==h or t3==m or t3==s) break;
    }



    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
/*
3 47 0 4 9

6 0 0 2 8
NO

1 0 41 12 1
no

10 5 30 1 12
yes
*/
