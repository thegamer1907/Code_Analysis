#include <bits/stdc++.h>

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define fi first
#define se second
#define pb push_back
#define last(s) (s)[(s).size()-1]
#define all(a) (a).begin(),(a).end()
#define elif else if
#define left asdasd
#define next zaza
#define prev azaz
#define cclear cout<<flush;
#define x0 kerker
#define y0 lolik
#define kchay ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

using llong = long long;
using ld = long double;
using ii = pair<int,int>;
using ull = unsigned long long;
using pll = pair<llong, llong>;
using psi = pair<string, int>;


const llong over999 = 1e18;
const llong md = 1e9+7;
const ld eps = 1e-16;
const ld Pi = acos(-1);

string s[200], c;
int n;


int32_t main()
{
    kchay;
    //freopen("typewriter.in", "r", stdin); freopen("typewriter.out", "w", stdout);

    cin >> c;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(s[i][0] == c[0] && s[i][1] == c[1])return cout <<"YES", 0;
            if(s[i][1] == c[0] && s[j][0] == c[1])return cout <<"YES", 0;
            
        }
    }
    
    cout << "NO";

    return 0;
}