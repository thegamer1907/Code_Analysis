#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define xmax(x,y) ((x) = max((x),(y)))
#define xmin(x,y) ((x) = min((x),(y)))
#define all(x) (x).begin(),(x).end()
#define mem(x) memset(x , 0 , sizeof(x))
#define _ ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define FP(a , b , c)  for(ll (a) = (b) ; (a) < (c) ; (a++));
#define FM(a , b , c)  for(ll (a) = (b) ; (a) >= (c) ; (a--));
#define connect(a , b , c) a[b].pb(c) , a[c].pb(b)

typedef long long int ll;
typedef unsigned long long int ull;
typedef string str;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector <ll> vl;
typedef vector <int> vi;
typedef vector <string> vs;

const ll Maxn3 = 1e3 + 10;
const ll Maxn4 = 1e4 + 10;
const ll Maxn5 = 1e5 + 10;
const ll Maxn6 = 1e6 + 10;
const ll Maxn7 = 1e7 + 10;
const ll Maxn8 = 1e8 + 10;
const ll Maxn9 = 1e9 + 10;
const ll Maxn18 = 1e18 + 10;
const ll Mod1 = 1e7 + 7;
const ll Mod2 = 1e9 + 7;
const ll LLMax = LLONG_MAX;
const ll LLMin  = LLONG_MIN;
const ll INTMax = INT_MAX;
const ll INTMin  = INT_MIN;

ll mn = LLMax , mx = LLMin;

int main()
{_
    ll n , k ;cin >> n >> k;
    string s;cin >> s;
    ll a = 0 , b = 0 , del = 0 , ans = 0;
    for(ll i = 0 ; i < s.size() ; i++)
    {
        (s[i] == 'a' ? a++ : b++);
        if(min(a , b) <= k)
            xmax(ans , a + b);
        else
            s[del++] == 'a' ? a-- : b--;
    }
    return cout << ans , 0;
}
///SAliB
