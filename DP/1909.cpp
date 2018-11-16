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
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef set<char> stc;
typedef set<int> sti;

const int INF = (int) 1e9 + 1;
const int MAXN = (int) 1e5;

int dp[MAXN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.si;
    fo(i, 0, n) {
        if(s[i-1] == 'A' && s[i] == 'B') dp[i] = 2;
        if(s[i-1] == 'B' && s[i] == 'A') dp[i] = 3;
    }
    int ab = 0, ba = 0, f1 = 1, f2 = 1, af = -1, bf = -1;
    fo(i, 0, n) {
        if(dp[i] == 2 && f1)
            f1 = 0, ab = 1, af = i;
        if(dp[i] == 3 && f2)
            f2 = 0, ba = 1, bf = i;
        if(dp[i] == 2 && ba && abs(i - bf) > 1)
            return 0*YES;
        if(dp[i] == 3 && ab && abs(i - af) > 1)
            return 0*YES;
    }
    cout << "NO";
}