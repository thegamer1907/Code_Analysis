#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define sz(a) (int)(a).size()
#define rep(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)
#define frep(i, a, b) for (int i = (a), _b = (int)(b); i <= _b; ++i)

typedef complex<ld> cplex;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

const int inf = 1000000007;
const int N = 1000000 + 7;
const int multipleTest = 0;

int h, m, s, t1, t2;


bool block[N];
bool blnxt[N];

void solve() {
    cin >> h >> m >> s >> t1 >> t2;
    
    t1 %= 12;
    t2 %= 12;
    h %= 12;
    
    block[h] = true;
    blnxt[m / 5] = true;
    blnxt[s / 5] = true;
    
    
    if (s % 5 == 0) {
        if (t1 == s / 5 || t2 == s / 5) {
            puts("NO");
            return;
        }
    }
    
    if (s == 0) {
        if (m % 5 == 0) {
            if (t1 == m / 5 || t2 == m / 5) {
                puts("NO");
                return;
            }
        }
        if (m == 0) {
            
            if (t1 == h || t2 == h) {
                puts("NO");
                return;
            }
        }
    }
    
    
    
    
    if (t1 > t2) swap(t1, t2);
    
    if (t1 == t2) {
        puts("YES");
    } else {
        bool ok = true;
        for (int i = t1; i != t2; i = (i + 1) % 12) if (block[i] || blnxt[i]) {
            ok = false;
        }
        if (ok) {
            puts("YES");
            return;
        }
        
        ok = true;
        for (int i = t1; i != t2; i = (i + 11) % 12) {
            int prv = (i + 11) % 12;
            if (block[prv] || blnxt[prv]) {
                ok = false;
            }
        }
        if (ok) puts("YES");
        else puts("NO");
    }
}

int main() {
#ifdef _LOCAL_
    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
#endif
    int Test = 1;
    if (multipleTest) {
        cin >> Test;
    }
    for(int i = 0; i < Test; ++i) {
        solve();
    }
#ifdef _LOCAL_
    cout<<"\n" << 1.0 * clock() / CLOCKS_PER_SEC <<endl;
#endif
}
