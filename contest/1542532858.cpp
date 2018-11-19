#include <bits/stdc++.h>
using namespace std;


#define mp make_pair
#define pb push_back
#define ll long long
#define ld long double
#define F first
#define S second

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h , m , s ,t ,t1 ;
    cin >> h >> m >> s >> t >> t1;
    h  = (h  * 3600 ) + (m * 60) + s;
    m = ((m * 60) + s) * 12;
    s = s * 12 * 60;
    int z , x , c;
    z = max(h , max(m ,s ));
    c = min(h , min(m , s));
    x = (h + m + s) - z - c;
    t  = t * 3600;
    t1 = t1 * 3600;
    if (t < z && t1 < z && t > x && t1 > x) {
        cout << "Yes";
        return 0;
    } else if (t < x && t1 < x && t  > c && t1 > c) {
        cout <<"YES";
        return 0;
    }else if ((t < c && t1 < c) || (t > z && t1 > z) || (t > z && t1 < c) ||(t1 > z && t < c)) {
        cout <<"YES";
        return 0;
    }
    cout <<"NO";
return 0;
}
