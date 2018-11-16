#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;
std::vector<ll> v[N];

ll res;
ll a[N];
ll b[N];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        res += a[i];
    }
    ll mx = 0;
    for (int i = 0; i < n; ++i){
        for (int j = i; j < n; ++j){
            ll countone = 0;
            for (int k = i; k <= j; ++k){
                countone += a[k];
            }
            mx = max(mx,res - countone + j - i + 1 - countone);
        }
    }
    cout << mx;
    return 0;
}