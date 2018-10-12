#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

const long long MAXN = 200007, ONE = 1, TWO = 2;

map <long long, long long> wc;

set <long long> wis;

long long n, m, a[MAXN], s[MAXN], cd, ld, lp;

long long bs(long long l, long long t){
    long long tl = l, tr = n + ONE, tm;
    while (tr - tl > ONE){
        tm = (tl + tr) / TWO;
        if (s[tm] - s[l] <= t){
            tl = tm;
        }else{
            tr = tm;
        }
    }
    return tr;
}

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (long long i = ONE; i <= n; i++){
        cin >> a[i];
    }
    //reverse(a + ONE, a + n + ONE);
    for (long long i = ONE; i <= n; i++){
        s[i] = s[i - ONE] + a[i];
    }
    ld = a[ONE];
    lp = ONE;
    for (long long i = ONE; i <= m; i++){
        long long t;
        cin >> t;
        if (t < ld){
            ld -= t;
        }else{
            t -= ld;
            long long j = bs(lp, t);
            if (j > n){
                lp = ONE;
                ld = a[ONE];
            }else{
                ld = a[j] - (t - (s[j - ONE] - s[lp]));
                lp = j;
            }
        }
        cout << n + ONE - lp << endl;
    }
    return 0;
}