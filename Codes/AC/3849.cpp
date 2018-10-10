#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    string s;
    cin >> s;

    ll nb, nc, ns;
    cin >> nb >> ns >> nc;

    ll pb, pc, ps;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    map  < char, int > m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    ll lo = 0 , hi = (ll)1e14;
    ll ans  = 0;
    while(lo < hi){
        ll mid = (lo + hi  + 1) / 2;

        ll tmp  = 0LL;
        tmp += max(0LL, (mid * m['B'] - nb) * pb) ;
        tmp += max(0LL, (mid * m['C'] - nc) * pc);
        tmp += max(0LL, (mid * m['S'] - ns) * ps);

        if(tmp > r){
            hi = mid - 1;
        }
        else if(tmp <= r){
            ans = mid;
            lo = mid ;
        }

    }
    cout << ans << endl;

    return 0;
}


