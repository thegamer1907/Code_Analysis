/**
 *    Author:  "Robin Singh" !!!
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
#define ff first
#define ss second
#define mp make_pair
#define str string 
#define szz(v) ((int)(v).size())  
#define fr(i, j, k) for(int i = j; i < k; i++)     // 0 -> n-1 (i,0,n)
#define bk(i, j, k) for(int i = j-1; i >= k; i--)  // n-1 -> 0 (i,n,0)
#define frit(it, a) for(__typeof((a).begin()) it = a.begin(); it != a.end(); ++it)
#define mem(ptr)  memset(ptr, 0, sizeof ptr)  // use fill() for value other than 0
#define rtn return 
#define nl "\n"      // avoid endl
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector< pair<int,int> > vpii;
typedef vector< pair<ll, ll> > vpll;
const long long mod = 1e9+7;
const long double eps = 1e-9;
const long long INF = (1LL<<61);
const int inf = (1<<30);
//-------------------------------------------------------------------------------------------------------------
#define dbg( args...) { vector<string> _v = split( #args, ','); err( _v.begin(), args); cerr << '\n'; }
vector<string> split( const string& s, char c) { vector<string> v; stringstream ss( s); string x; 
while ( getline( ss, x, c)) v.emplace_back(x); return move(v); }
void err( vector<string>::iterator it) { } 
template<typename T, typename... Args>
void err( vector<string>::iterator it, T a, Args... args) {
    cerr << it -> substr( ( *it)[0] == ' ', it -> length()) << " = " << a << '\t'; err( ++it, args...); }
//-------------------------------------------------------------------------------------------------------------

const int nn = 1e5 + 5;
int dp[nn], a[nn];
bool vis[nn];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    fr(i, 1, n+1){
        cin >> a[i];
    }
    bk(i, n+1, 1){
       if(! vis[a[i]]) dp[i] = dp[i+1] + 1;
        else dp[i] = dp[i+1];
        vis[a[i]] = 1;
      //  dbg(i, dp[i]);
    }
    while(m--){
        int l;
        cin >> l;
        cout << dp[l] << nl;
    }
    return 0;
}