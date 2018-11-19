#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FAST_IO  ios_base::sync_with_stdio(false)
#define EPS 1e-8

int h, m, s, t1, t2;

int main() {
    FAST_IO;
    cin >> h >> m >> s >> t1 >> t2;
    
    h %= 12;
    t1 %= 12;
    t2 %= 12;

    h *= 3600;   
    h += m*60;
    h += s;

    m *= 720;
    m += s;
    
    s *= 720;

    t1 *= 3600;
    t2 *= 3600;


    int maks = max(t1, t2);
    int minim = min(t1, t2);

    bool is_exist = false;
    bool is_all = true;
    if (minim <= h && h <= maks) {
        is_exist = true;
    } else {
        is_all = false;
    }
    if (minim <= m && m <= maks) {
        is_exist = true;
    } else {
        is_all = false;
    }
    if (minim <= s && s <= maks) {
        is_exist = true;
    } else {
        is_all = false;
    }
    // cout << minim << " "<< maks << " " << h << " " << s << " "  << m;
    if (!is_exist || is_all) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
