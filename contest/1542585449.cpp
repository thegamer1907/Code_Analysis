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

int n, k;
vi msk;
int cnt[1000];

int main() {
    srand(time(NULL));
    ios_base::sync_with_stdio(0);
 //   freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        int now = 0;
        for(int j = 0; j < k; ++j) {
            int x; cin >> x;
            now += (1 << j) * x;
        }
        msk.pb(now);
    }
    cnt[(1<<k)-1] = 1;
    for(int i = 0; i < n; ++i) {
       // ++cnt[msk[i]^((1<<k)-1)];
       cnt[msk[i]]++;
       // cout << msk[i] << ' ' << (msk[i]^((1<<k)-1)) << '\n';
    }
    for(int i = 0; i < n; ++i) {
        for(int now = 0; now < (1<<k); ++now) {
            if(((msk[i]^((1<<k)-1))|now)==(msk[i]^((1<<k)-1)) && cnt[now]) {
              //  cout << (msk[i]^((1<<k)-1)) << ' ' << now << '\n';
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
