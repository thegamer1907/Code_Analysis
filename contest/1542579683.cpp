#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ld long double
#define F first
#define S second
#define mp make_pair
#define pb push_back

using namespace std;

const int MIN = 1e3 + 2;
const int MXN = 1e6 + 3;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18 + 15;

int h, m, s, t1, t2;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    h = h * 3600 + m * 60 + s;
    m = m * 721 + s;
    s = s * 721;
    t1 %= 12;
    t2 %= 12;
    t1 = t1 * 3600;
    t2 = t2 * 3600;
    int tt = t1;
    while (1){
        t1++;
        t1 %= 43200;
        if (t1 == t2){
            cout << "YES";
            return 0;
        }
        if (t1 == h || t1 == m || t1 == s) break;
    }
    while (1){
        tt--;
        if (tt < 0) tt = 43199;
        if (tt == t2){
            cout << "YES";
            return 0;
        }
        if (tt == h || tt == m || tt == s){
            cout << "NO";
            return 0;
        }
    }
    return 0;
}
