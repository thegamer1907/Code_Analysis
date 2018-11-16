#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define REP(i,a) for(ll i = 0, _a = (a); i < _a; ++i)
#define FOR(i,a,b) for(ll i = (a), _b = (b); i <= _b; ++i)
template<class T> bool minimal(T &a, T b) {return a > b ? a = b, 1 : 0;}
template<class T> bool maximal(T &a, T b) {return a < b ? a = b, 1 : 0;}

using namespace std;
using ll = long long;
using vl = vector<ll>;
using pl = pair<ll,ll>;
using vpl = vector<pl>;
const ll MOD = 1e9+7, LINF = 1e18;

ll n, t;
string s;

void solve(){
    cin >> n >> t >> s;
    REP(k,t)
        REP(i,s.length()){
            if (s[i] == 'B' && i + 1 < s.length() && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }

        }
    cout << s;
}

int main(){
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0);
    int TC = 1;
    //cin >> TC;

    FOR(i,1,TC){
        solve();
    }
    return 0;
}

