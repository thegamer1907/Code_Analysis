#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using LL = long long;
#define all(x) begin(x), end(x)

LL n;

void init(){
    cin >>n;
}

bool check(LL k){
    LL m = n, s = 0;
    while (m){
        LL x = min(k, m);
        m -= x;
        s += x;
        m -= m / 10;
    }
    return s >= (n+1)/2;
}

void solve(){
    LL ub = 1000000000000000000ll;
    LL lb = 0;
    while (ub > lb + 1){
        LL mid = (ub+lb) / 2;
        if (check(mid)) ub = mid;
        else lb = mid;
    }
    cout <<ub <<endl;
}

int main (){
    cin.tie(0);
    init();
    solve();
}
