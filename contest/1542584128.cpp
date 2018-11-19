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
    string p,other[200];
    cin>>p;
    int n;
    cin>>n;
    rep (i,0,n) {
        string s;
        cin>>s;
        other[i] = s;
        other[i+n] = s;
    }
    string ans = "NO";
    rep (i,0,2*n) {
        rep (j,0,2*n) {

            if (other[i] == p || (other[i][1]==p[0] && other[j][0]==p[1])) {
                ans = "YES";
            }
        }

    }
    cout<<ans;
    return 0;
}