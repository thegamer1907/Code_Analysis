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

ll x1[300000];

int main()
{

// freopen("1.in", "r", stdin);
// freopen("1.out", "w", stdout);
    fast_io;
    srand(time(0));

    ll n,k;
    ll s,a;
    set<ll> st;

     cin >> n >> k;

    for (int i=1; i<=n; i++) {
        s=0;
        for (int j=1; j<=k; j++) {
            cin >> a;
            if (a) s+=(1 << (j-1));
        }

//        if (s==0) {
//
//        }
//        cout << s << endl;
        st.insert(s);
    }

    set<ll> :: iterator t1;
    t1=st.begin();
    ll kol=0;
    while(t1!=st.end()) {
        x1[++kol]=*t1;
        t1++;
    }



    for (int i=1; i<=kol; i++) {
        for (int j=1; j<=kol; j++) {

            ll z=x1[i]&x1[j];
//            cout << x1[i] << " " << x1[j] << " " << z << endl;

            if (z==0) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}
/*
4 2
0 1 1 1
1 0 0 0
*/
