#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> pll;

vector <ll> p;

ll func(ll x) {
    ll res = upper_bound(p.begin(), p.end(), x) - p.begin();
    return res;
}

ll func2(ll b, ll step, ll x) {
    // b + step * c >= x
    // step * c >= x - b
    // c >= (x - b)/step
    ll res = (x - b + step - 1)/step;
    return step * res;
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
    ll test = 0;
    while(cnt != m) {
        //cout << bound << endl;
        test++;
        ll tmp = func(bound);
        if(tmp > cnt) {
            bound += tmp - cnt;
            cnt = tmp;
            answ++;
        }
        else {
            bound += func2(bound, k, p[tmp]);
        }
    }
    //cout << test << endl;
    cout << answ;
}