#include <set>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

#define ll long long
#define dd double
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define s(x) scanf("%d",&x);
#define sl1(x) scanf("%lld",&x);
#define sl2(x,y) scanf("%lld%lld",&x,&y);
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fromn(i, n) for (int i = n-1; i >= 0; --i);
#define oi(x) printf("%d", x);
#define oll(x) printf("%lld", x);
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<pair<ll, ll> > vpll;

int main(int argc, const char * argv[])
{
   
    ll n,m,ct = 0;
    set<string> s;
    sl2(n, m);
    forn(i, n){string x; cin >> x; s.insert(x);}
    forn(i, m){string x; cin >> x; if(s.count(x)){
        ++ct; s.erase(x);}}
    if(n == m) printf(ct%2==0?"NO":"YES");
    else printf(n<=m?"NO":"YES");

    return 0;
}
