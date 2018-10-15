#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vi A(n), K(q);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < q; ++i) cin >> K[i];
    vi PRE(n);
    for (int i = 0; i < n; ++i) {
        PRE[i] = A[i] + (i > 0 ? PRE[i-1] : 0);
    }
    int ind = 0, cur = 0;
    for (int i = 0; i < q; ++i) {
        if (K[i] + cur < A[ind]) cur += K[i];
        else {
            K[i] -= A[ind] - cur;
            cur = 0;
            ind++;
            if (ind == n) ind = 0;
            else {
                int low = ind, high = n-1;
                while (low < high) {
                    int mid = (low + high) / 2;
                    ll m = PRE[mid] - (ind > 0 ? PRE[ind-1] : 0);
                    if (K[i] >= m) low = mid+1;
                    else high = mid;
                }
                ll m = PRE[high] - (ind > 0 ? PRE[ind-1] : 0);
                if (K[i] >= m) {
                    high++;
                    if (high != n) m += A[high];
                }
                if (high == n) ind = 0;
                else {
                    ind = high;
                    cur = K[i] - (m - A[high]);
                }
            }
        }

        cout << n-ind << "\n";
    }
    return 0;
}