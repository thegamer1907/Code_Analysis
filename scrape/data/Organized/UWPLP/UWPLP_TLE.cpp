#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> pll;

vector <ll> p;

ll func(ll x) {
    ll res = upper_bound(p.begin(), p.end(), x) - p.begin();
    return res;
}

int main(){
    ios_base:: sync_with_stdio(0);
    ll n, m, k;
    cin >> n >> m >> k;
    for(ll i = 0, x; i < m; i++) {
        cin >> x;
        p.push_back(x);
    }
    ll l = 0, cnt = 0, answ = 0, bound = k;
    while(cnt != m) {
        ll tmp = func(bound);
        if(tmp > cnt) {
            cnt = tmp;
            bound = k + tmp;
            answ++;
        }
        else {
            bound += k;
        }
    }
    cout << answ;
}