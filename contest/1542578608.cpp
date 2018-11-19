#define prob GameOfSegments


#include <bits/stdc++.h>

using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define ii pair<int,int>
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define PI  3.141592653589793238
#define MOD (1000000007)
#define INF (2000000007)
#define EPS 0.0000000001
#define MAXN (105000+1)



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifdef DEBUG
    freopen("input", "r", stdin);//use flush(cout)
#endif

    int n,k;
    cin>>n>>k;
    unordered_set<bitset<4>> bits;
    rep (i,0,n) {
        bitset<4> temp;
        int x;
        rep (j,0,k) {
            cin>>x;
            temp[j] = x;
        }
        bits.insert(temp);
    }

    for (bitset<4> t : bits) {
        bitset<4> comp = ~t;
        for (bitset<4> t2 : bits) {
            bitset<4> a1 = comp|t2;
            if (((a1).count())==(comp.count())) {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}