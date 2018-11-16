#include<bits/stdc++.h>

using namespace std;

#define YES printf("YES\n")
#define NO printf("NO\n")
#define PRI(x) printf("%d",(x))
#define PRS(x) printf("%s",(x))
#define pb push_back
#define pf push_front
#define mp make_pair
#define in insert
#define le length()
#define si size()
#define sec second
#define fir first
#define fo(i, b, e) for(int i = (b); i < (int)(e); i++)
#define fod(i, b, e) for(int i = (b); i >= (int)(e); i--)
#define BE(x) (x).begin(), (x).end()
#define EB(x) (x).rbegin(), (x).rend()
#define SORT(x) sort(BE(x))
typedef unsigned long long ull;
typedef unsigned int uint;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef set<char> stc;
typedef set<int> sti;

const ll INF = (ll) 1e16 + 1;
const double EPS = 1e-9;
const int MAXN = (int) 1e5;

int dp[MAXN + 1];
int al[MAXN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, l;
    cin >> n >> m;
    int a[n];
    fo(i, 0, n) cin >> a[i];
    dp[n] = 0;
    fod(i, n-1, 0) {
        if(!al[a[i]])
            al[a[i]]++, dp[i] = dp[i+1] + 1;
        else
            dp[i] = dp[i+1];
    }
    vi ans;
    fo(i, 0, m) {
        cin >> l;
        ans.pb(dp[l-1]);
    }
    for(int z : ans) cout << z << endl;
}
