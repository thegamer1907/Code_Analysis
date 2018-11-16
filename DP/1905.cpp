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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    int l1, r1, l2, r2;
    l1 = l2 = n;
    r1 = r2 = -1;
    for(int i=0; i<n-1; i++){
        if(s[i] == 'A' && s[i+1] =='B'){
            l1 = min(l1, i);
            r1 = max(r1, i);
        }
        else if(s[i] == 'B' && s[i+1] == 'A'){
            l2 = min(l2, i);
            r2 = max(r2, i);
        }
    }
    r1--;
    r2--;            // diff > 1
    if(r2 > l1 || r1 > l2) cout << "YES";
    else cout << "NO";
    return 0;
}