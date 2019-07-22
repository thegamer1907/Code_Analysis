/// Quality Over Quantity
 
#include <bits/stdc++.h>
 
#define FILE_NAME "C"
 
using namespace std;
using ll = long long;
 
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define SZ(x) ((int) x.size())
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;
 
void freekick() {
#ifndef ONLINE_JUDGE
    freopen(FILE_NAME".in", "r", stdin);
    freopen(FILE_NAME".out", "w", stdout);
#endif
}
 
const int N = 2e5 + 5;
const int DX[] = {+1, 0, -1, 0, +1, +1, -1, -1};
const int DY[] = {0, +1, 0, -1, +1, -1, +1, -1};
 
void freegoal() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
}
 
signed main() {
    freekick();
    freegoal(); 
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> p(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int answ = 0;
    ll mm = k;
    while(true) {
        answ++;
        vector<ll> :: iterator it = lower_bound(p.begin(), p.end(), k);
        if (*it > k) {
            if (it == p.begin()){
                if (*it > k) {
                ll x = p[0] - k;
                ll y = x / 5ll;
                if (x % 5ll != 0) 
                    y++;
                k += mm * y;
                answ--;
                continue;
            }
        }
        --it;
    }
    if (*it == p[m - 1]) {
        break;
    }
        else k += (it - p.begin() + 1);
    }
    cout << answ << endl;    
    return false;
}