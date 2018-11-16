#define _USE_MATH_DEFINES
#define EPS 1e-9
#define pb push_back
#define mp make_pair
#define fst first
#define snd second

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cout << setprecision(12);

    ll n;
    cin >> n;

    vector<ll> denoms;
    denoms.pb(100);
    denoms.pb(20);
    denoms.pb(10);
    denoms.pb(5);
    denoms.pb(1);

    ll bills = 0;
    for (int i = 0; i < denoms.size(); i++) {
        ll d = denoms[i];
        bills += n / d;
        n %= d;
    }
    cout << bills << endl;
}
