#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)


#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
// 2:05 T
int main() {
    string s; int m; cin >> s >> m;
    bool good[s.length()];
    good[0] = false;
    F0R(i, s.length() - 1){
        good[i + 1] = false;
        if(s[i] == s[i + 1]){
            good[i + 1] = true;
        }
    }
    // PS
    int trues[s.length() + 1];
    int cnt = 0;
    F0R(i, s.length() + 1){
        cnt = good[i] ? cnt + 1 : cnt;
        trues[i] = cnt;
    }
    F0R(i, m){
        int l, r; cin >> l >> r;
        cout << trues[r - 1] - trues[l - 1] << "\n";
    }
    // F0R(i, s.length() + 1){
    //   cout << trues[i] << " ";
    // }
    // F0R(i, s.length()){
    //     cout << good[i] << " ";
    // }
}
