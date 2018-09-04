#include <bits/stdc++.h>
#define fi first
#define se second
#define p_b push_back
#define m_p make_pair
#define y1 CNik
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const int MAXINT=2147483647;
const ll MAXLONGINT=9223372036854775807;
const int MAX=300000;

ll n, k, i, sum, pref[MAX], kek, lol, mx=-1e9, mx1=-1e9;
pair <ll,ll> a[MAX];
vector <ll> v;

int main () {

    fast_io

    cin >> n >> k;

    for (i = 1; i <= n; i++) {
        cin >> a[i].fi >> a[i].se;
        v.p_b(a[i].fi);
    }

    sort (a+1, a+n+1);
    sort (v.begin(), v.end());

    for (i = 1; i <= n; i++) {
        sum+=a[i].se;
        pref[i]=sum;
    }

    if (a[n].fi-a[1].fi < k) {
        cout << sum << endl;
        return 0;
    }

    for (i = 1; i <= n; i++) {
        kek=lower_bound(v.begin(), v.end(), a[i].fi+k)-v.begin();
        //cout << i << " " << kek << endl;
        if (kek != -1) {
            lol=pref[kek]-pref[i-1];
            //cout << lol << "||||" << endl;
            mx=max(mx, lol);
        }
        else mx=max(mx, a[i].se);
    }
    cout << mx << endl;


    return 0;
}
/*

*/
