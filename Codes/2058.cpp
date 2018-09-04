#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef pair<ii, int> iii;
typedef vector<iii> viii;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    vi V0(n);
    for (int i = 0; i < n; ++i) {
        cin >> V0[i];
    }
    map<ll, ll> frec;
    vi V1, V2;
    V1 = V2 = V0;
    for (int i = 0; i < n; ++i) {
        if (V0[i] % k == 0) {
            V1[i] = frec[V0[i]/k];
        }
        frec[V0[i]]++;
    }
    frec.clear();
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        if (V0[i] % (k*k) == 0) {
            V2[i] = frec[V0[i]/k];
            ans += V2[i];
        }
        frec[V0[i]] += V1[i];
    }
    cout << ans << "\n";
    return 0;
}