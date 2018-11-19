#include<bits/stdc++.h>
#define rep(i,k,n) for(ll i= (ll) k;i< (ll) n;i++)
#define all(v) (v).begin(), (v).end()
#define SZ(v) (int)((v).size())
#define pb push_back
#define ft first
#define sd second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const long long INF = 4e18L + 1;
const int IINF = 2e9 + 1;

using namespace std;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<'='<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<'='<<h<<','; _dbg(sdbg+1, a...);
}

#ifdef LOCAL
#define DBG(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

int main()
{
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
    int n, k; cin >> n >> k;
    set<string>probs;
    rep(_, 0, n){
        string s;
        rep(__, 0, k){
            string t; cin >> t; s += t;
        }
        probs.insert(s);
    }
    for(auto& p1 : probs){
        for(auto& p2 : probs){
            int cnt = 0;
            rep(i, 0, k){
                if(p1[i] == '1' and p2[i] == '1'){
                    cnt++;
                }
            }
            if(!cnt){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
