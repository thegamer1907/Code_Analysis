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

int n;
char ch1, ch2, a[101], b[101];

int main() {
    srand(time(NULL));
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin >> ch1 >> ch2;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if(a[i] == ch1 && ch2 == b[i]) {
            cout << "YES"; return 0;
        }
    }
    for(int i = 0; i < n; ++i) {
        if(b[i] != ch1) continue;
        for(int j = 0; j < n; ++j) {
            if(a[j] != ch2) continue;
            cout << "YES"; return 0;
        }
    }
    cout << "NO";
    return 0;
}
