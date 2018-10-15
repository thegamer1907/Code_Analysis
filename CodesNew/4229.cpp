#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

const int maxN = 2e5 + 9, MOD = 1e9 + 7;

ll n, M;

ll eval(ll val){
    ll ans = 0;
    for(ll i = 2; i * i * i <= val; i++){
        ans += val / (i * i * i);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> M;
    
    ll l = -1, r = LLONG_MAX, m;
    
    while(l + 1 < r){
        m = (l + r) >> 1;
        if(eval(m) < M){
            l = m;
        }
        else{
            r = m;
        }
        
    }
    
    if(eval(r) == M){
        cout << r << '\n';
    }
    else{
        cout << -1 << '\n';
    }
    
}
