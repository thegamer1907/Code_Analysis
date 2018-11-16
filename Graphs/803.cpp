/*
Author : sachinbisht939 || __B
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define unlock_ios ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define run int t; cin >> t; while(t--)
#define c1(a) cout << #a << " : " << a << "\n";
#define c2(a,b) cout << #a << " : " << a << ", " << #b << " : " << b << "\n";
#define rep(c, a, b, d) for(int c = a; c < b; c += d)
#define repr(c, a, b, d) for(int c = a; c >= b; c -= d)
#define case(i) cout << "Case #" << i << ": ";
 
#define pb(x) push_back(x)
#define ff first
#define ss second
#define mp make_pair
#define int long long
 
# define lcm(a, b) (((a) * (b))/__gcd(a, b))
 
#define PI 3.14159265
 
typedef long double lld;
typedef pair < int,int > ii;
typedef pair < int, ii > iii;
typedef pair < char,int > ci;
typedef pair < int,char > ic;
typedef pair < string, int > si;
 
const int maxn = 1e5+10;
const int MOD = 1e9 + 7;
 
 
void solve()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    
    rep(i, 0, t, 1)
    {
        rep(j, 1, n, 1)
            if(s[j] == 'G' && s[j-1] == 'B')
                s[j] = 'B', s[j-1] = 'G', j++;
    }
    cout << s;
}
 
// Driver Code
signed main()
{
    unlock_ios
    // int xxx = 0;
    
    // run
    {
        // xxx += 1;
        // case(xxx)
        solve();
    }
 
    return 0;
} 