//31, 05, 2018, 09:50:34 Rafaelcs cpp
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef long double ld;
typedef long long ll;
const int N = 52;
ll n, k;
ll dp[N];

void gen(){
    dp[1] = 1;

    for(int i = 2 ; i < N ; i++){
        dp[i] = 2LL * dp[i - 1] + 1;
    }
}

int solve(ll n, ll k){
    ll pos = dp[n] / 2 + 1;

    if(pos == k){
        return n;
    }

    if(k > pos){
        return solve(n - 1, k - pos);
    }else{
        return solve(n - 1, k);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    gen();

    cin >> n >> k;

    cout << solve(n, k) << endl;

    return 0;
}