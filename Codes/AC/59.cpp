#include <bits/stdc++.h>
#define foi(i,k,n) for(int i = (int)k; i < (int)n; ++i)
using namespace std;
typedef long long ll;
const int MAXN = 5 + 500000;
int arr[MAXN], rsum[MAXN];

/*int gcdex(int a, int b, int &x, int &y) {
    if(a == 0) {
        x = 0; y = 1;
        cout << x << ' ' << y << endl;
        return b;
    }
    int x1, y1;
    int d = gcdex(b % a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    cout << x << ' ' << y << endl;
    return d;
}*/


int main() {
    ios::sync_with_stdio(false);cin.tie(0);

    int N; cin >> N;
    ll tot = 0LL;
    foi(i,0,N) {
        cin >> arr[i];
        tot += arr[i];
    }
    ll ans = 0LL;
    if(tot % 3LL == 0) {
        ll sum = 0LL, need = tot / 3LL;
        for(int i = N -  1; i >= 0; --i) {
            sum += arr[i];
            if(sum == need) {
                rsum[i] = 1;
            }
            rsum[i] += rsum[1 + i];
        }

        sum = 0LL;
        foi(i,0,N) {
            sum += arr[i];
            if(sum == need) {
                ans += rsum[2 + i];
            }
        }
    }
    cout << ans;
    return 0;
}
