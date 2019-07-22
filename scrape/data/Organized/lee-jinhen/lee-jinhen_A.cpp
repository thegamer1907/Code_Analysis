#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#pragma GCC optimize ("O3")
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie (0);
    ll n, m, k; cin>>n>>m>>k;
    vector <ll> a (m);
    for (auto &i : a) cin>>i;
    ll before=0, now=0, move=0;
    while (true) {
        ll go=0;
        if (a[now]>before) before+=ceil((double) (a[now]-before)/k)*k;
        while (now<m && a[now]<=before) {
            now++;
            go++;
        }
        move++;
        while (true) {
            bool f=1;
            ll c=0;
            while (now<m && before+go>=a[now]) {
                f=0;
                c++;
                now++;
            }
            before+=go;
            go=c;
            if (f) break;
            else move++;
        }
        if (now==m) break;
    }
    cout<<move;
    return 0;
}