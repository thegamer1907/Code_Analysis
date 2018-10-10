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

map<ll,ll> mp1, mp2;
ll x1[300000];

int main()
{
// freopen("1.in", "r", stdin);
// freopen("1.out", "w", stdout);

    fast_io;
    srand(time(0));

    ll n,k, ans=0;

    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> x1[i];
    }

    for (int i=1; i<=n; i++) mp1[x1[i]]++;

//    if (k==1) {
//        for (int i=1; i<=n; i++) if (mp1[x1[i]]>2) ans++, mp1[x1[i]]=0;
//        cout << ans << endl;
//        return 0;
//    }

    for (int i=n; i>=2; i--) {
        if (i!=n) mp2[x1[i+1]]++;
        mp1[x1[i]]--;

        if (x1[i]%k==0) {

            //cout << "i=" << i << " 1=" << mp1[x1[i]/k] << " 2=" << mp2[x1[i]*k] << endl;


            ans+=mp1[x1[i]/k]*mp2[x1[i]*k];
        }
    }

    cout << ans << endl;

    return 0;
}
