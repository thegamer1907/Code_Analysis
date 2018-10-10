#include <bits/stdc++.h>

#define INF 2000000000
#define INFLL 1000000000000000000ll
#define ll long long
#define ull unsigned long long
#define ld long double
#define EPS 0.00000000001
#define ft first
#define sd second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define spc << " " <<
#define openfiles ifstream cin("input.txt"); ofstream cout("output.txt");
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main()
{
    faster;

    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> p(n+1);

    for (int i = 0; i < n; i++){
        cin >> a[i];
        p[i+1] = 1ll*p[i] + 1ll*a[i];
    }

    ll mx = 0ll, s = 0ll;

    for (int i = n-1; i >= 0; i--){
        s += a[i];
        auto pos = lower_bound(p.begin(), p.begin()+i, s);
        if (*pos == s){
            mx = max(mx, s);
        }
    }

    cout << mx;

    return 0;
}
