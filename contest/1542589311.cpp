#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
//#define int long long
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef pair <ll, ll> pll;
typedef vector <pii> vpii;
typedef vector <ll> vll;
typedef double ld;

const int INF = (int)2e9;
const int mod = (int)1e9 + 7;
const int N = (int)1e6 + 10;
const ll LLINF = (ll)3e18 + 10;
const ld pi = acos(-1);

template <typename T1, typename T2> bool umin(T1 &x, T2 y){if(x>y) return x=y, true;return false;}
template <typename T1, typename T2> bool umax(T1 &x, T2 y){if(x<y) return x=y, true;return false;}

template <typename T>
T getint() {
    char c = getchar();
    T p = 1, x = 0;
    while(c == ' ' || c == '\n') c = getchar();
    if(c == '-') p = -1, c = getchar();
    while(c >= '0' && c <= '9')
        x = x * 10 + c - '0', c = getchar();
    return x * p;
}

ld h, s, m, t1, t2;

bool f(ld x, ld l, ld r) {
    if(x < l) return true;
    if(x > r) return true;
    return false;
}

int main() {
    srand(time(NULL));
    ios_base::sync_with_stdio(0);
 //   freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
    cin >> h >> m >> s >> t1 >> t2;
    h += m/60;
    h += s/3600;
    if(h > 12) h -= 12;
    m += s/60;
    if(m > 60) m -= 60;
    m /= 5; s /= 5;
    //cout << h << ' ' << m << ' ' << s << '\n';
    if(t1 > t2) swap(t1, t2);
    if(f(h, t1, t2) && f(m, t1, t2) && f(s, t1, t2)) {
        cout << "YES"; return 0;
    }
    if(f(h, t2, 12) && f(m, t2, 12) && f(s, t2, 12)
    && f(h, 0, t1) && f(m, 0, t1) && f(s, 0, t1)) {
        cout << "YES"; return 0;
    }
    cout << "NO";
    return 0;
}
