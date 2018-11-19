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

bool bet(int a, int b, int c){ return b > a and b < c;}

const int T = 60 * 60 * 12;


int main()
{
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
    int h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;
    h = T / 12 * h + T / (12 * 60) * m + s;
    m = T / 60 * m + T / (60 * 60) * s;
    s = T / 60 * s;
    t1 = T / 12 * t1;
    t2 = T / 12 * t2;
    DBG(T, h, m, s, t1, t2);
    if(t1 > t2){
        swap(t1, t2);
    }
    if(t1 == t2){
        cout << "YES\n";
        return 0;
    }
    bool b1 = bet(t1, h, t2), b2 = bet(t1, m, t2), b3 = bet(t1, s, t2);
    DBG(b1, b2, b3);
    if(!bet(t1, h, t2) and !bet(t1, m, t2) and !bet(t1, s, t2)){
        cout << "YES\n";
        return 0;
    }
    DBG("?");
    if(t1 < t2){
        t1 += T;
    }
    if(h < t2){
        h += T;
    }
    if(m < t2){
        m += T;
    }
    if(s < t2){
        s += T;
    }
    DBG(h, m, s, t1, t2);
    if(!bet(t2, h, t1) and !bet(t2, m, t1) and !bet(t2, s, t1)){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
