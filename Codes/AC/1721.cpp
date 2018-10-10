#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, M, K, ANS;

ll before(ll X) {
    ll CT = 0;

    for(ll i = 1; i <= min(N, X); i++) 
        CT += min((X - 1)/i, M);
    
    return CT;
}

int main() {
    cin >> N >> M >> K;
    ll L = 1, R = N * M;

    while(L <= R) {
        ll MID = (L + R) / 2;
        
        if(before(MID) <= K - 1) {
            ANS = max(ANS, MID);
            L = MID + 1;
        } else {
            R = MID - 1;
        }
    }

    cout << ANS << endl;
}