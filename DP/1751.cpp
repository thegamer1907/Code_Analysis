/*
Author : sachinbisht939 || __B
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define unlock_ios ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define run int t; cin >> t; while(t--)
#define c1(a) cout << #a << " : " << a << "\n";
#define c2(a,b) cout << #a << " : " << a << ", " << #b << " : " << b << "\n";
#define c() cout << "bhai bhai bhai ...\n";
#define rep(c, a, b, d) for(int c = a; c < b; c += d)
#define repr(c, a, b, d) for(int c = a; c >= b; c -= d)
#define repi(x, a) for(auto x = a.begin(); x != a.end(); ++x)
#define case(i) cout << "Case #" << i << ": ";
#define all(c) (c).begin(), (c).end()

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
    string s;
    cin >> s;
    vector <int> v1, v2;
    rep(i, 0, s.size()-1, 1)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
            v1.pb(i);
        if(s[i] == 'B' && s[i+1] == 'A')
            v2.pb(i);
    }
    if(v1.size())
    {
        rep(i, 0, v2.size(), 1)
        {
            if(abs(v1.back()-v2[i]) > 1)
            {
                cout << "YES";
                return;
            }
        }
    }
    if(v2.size())
    {
        rep(i, 0, v1.size(), 1)
            if(abs(v2.back() - v1[i]) > 1)
            {
                cout << "YES";
                return;
            }
    }
    cout << "NO";
    
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