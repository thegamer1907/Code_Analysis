/** FN7 **/
#include<bits/stdc++.h>
using namespace std;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

#define ios                 ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define Time()              cout << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x)             cerr << #x << " = " << (x) << '\n'
#define pob                 pop_back
#define pb                  push_back
#define m_p                 make_pair
#define clMAXN              constexpr ll MAXN
#define S                   second
#define F                   first

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

typedef long long                   ll;
typedef long double                 ld;
typedef long long int               lli;
typedef pair<int, int>              pii;
typedef unsigned long long int      ull;
typedef pair<long long, long long>  pll;

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

template<class T,class L> inline bool smax(T&x, L y) {return x < y ? (x = y, true) : false;}
template<class T,class L> inline bool smin(T&x, L y) {return x > y ? (x = y, true) : false;}

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

const int MAXN = 1e7 + 15;
int n;
int a[MAXN + 10];
bool prime[MAXN + 10];
int ps[MAXN + 10];
int cnt[MAXN + 10];

/** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ **/

int main() {
    ios;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i], cnt[a[i]]++;
    for (int i = 2; i <= MAXN; i++) {
        for (int j = 2 * i; j <= MAXN; j += i) {
            prime[j] = true;
        }
    }
    prime[1] = true;
    for (int i = 2; i <= MAXN; i++) {
        if (!prime[i]) {
            for (int j = i; j <= MAXN; j += i) {
                ps[i] += cnt[j];
            }
        }
    }
    for (int i = 1; i <= MAXN; i++)
        ps[i] += ps[i - 1];
    int q;
    cin >> q;
    while (q--) {
        int l , r;
        cin >> l >> r;
        if (l > MAXN) {
            cout << "0\n";
            continue;
        }
        smin(r, MAXN);
        cout << ps[r] - ps[l - 1] << '\n';
    }
    return false;
}