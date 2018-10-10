#include<bits/stdc++.h>
using namespace std;

#define Alovge ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

bool com(pair<ll, int> &a, pair<ll, int> &g) {
    return a.second < g.second;
}

int main() {
    Alovge

    int n; cin >> n;
    ll a[n+1];
    for(int i = 0; i < n; i += 1) cin >> a[i];
    int l = 0, r = n - 1;
    ll ag = a[l], ga = a[r], aloveg = 0;
    while(l < r) {
        if(ag < ga) {
            ag += a[++l];
        }
        else if(ag > ga) {
            ga += a[--r];
        }
        else {
            aloveg = max(aloveg, ag);
            ag += a[++l];
        }
    }
    cout << aloveg;

    return 0;
}