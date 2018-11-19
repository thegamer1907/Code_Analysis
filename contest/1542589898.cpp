#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define F first
#define S second
#define int long long
#define ull  unsigned long long
#define pb push_back
#define double long double

using namespace std;
using namespace __gnu_pbds;
typedef  tree< int , null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int N = 551;
string s[N];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt",  "r", stdin);
    //freopen("output.txt", "w", stdout);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    h *= 5;
    t1 *= 5;
    t2 *= 5;
    m = 60 * m + s;
    h = 12 * 60 * h + m;
    m *= 12;
    s *= 60 * 12;
    t1 *= 60 * 12;
    t2 *= 60 * 12;
    vector < pair < int, int > > a;
    a.pb({h, 0});
    a.pb({m, 0});
    a.pb({s, 0});
    a.pb({t1, 1});
    a.pb({t2, 1});
    sort(a.begin(), a.end());
    for (int i = 0; i < 4; i++){
        if (a[i].S == a[i + 1].S && a[i].S == 1){
            cout << "YES";
            return 0;
        }
    }
    if (a[0].S == a[4].S && a[0].S == 1){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
