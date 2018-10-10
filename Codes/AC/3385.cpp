#include<bits/stdc++.h>
#define debug(x) cerr << #x << " =  " << x << '\n'
#define endl '\n'
using namespace std;
typedef long long ll;

bool works(ll k, ll N){
    ll vasya = 0LL;
    ll original_N = N;
    while(N > 0){
        vasya += min(k, N);
        N -= min(N,k);
        N -= N/10LL;
    }
    return vasya >= (original_N+1)/2;
}

int main(int argc, const char *argv[])
{
    ios::sync_with_stdio(0); cin.tie(0);
    ll N; cin >> N;
    ll l = 1LL, r = 1e18;
    while(l != r){
        ll m = (l+r)/2LL;
        if(works(m, N)) {
            r = m;
        } else {
            l = m + 1;
        }   
    }
    cout << l << endl;

    return 0;
}
