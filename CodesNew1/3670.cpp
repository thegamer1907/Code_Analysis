#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(c) (c).begin(),(c).end()
#define nl cout<<'\n'
#define CPrint(c)  for(auto i:(c)) { cout<<i<<" "; } nl
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front
#define sz(a) (int)(a).size()
#define debug(x)	         {cerr <<#x<<" = " <<x<<"\n"; }
#define debug2(x, y)       {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define debug3(x, y, z)    {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<"\n";}
#define debug4(x, y, z, w) {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<", "<<#z<<" = "<<z<<", "<<#w << " = " <<w <<"\n";}
#define Unique(x)           (x).erase(unique(all(x)), x.end())
#define vec_present(vec,x)  (find(all(vec),x)!=(vec).end())
#define present(myset,x)    ((myset).find(x)!=(myset).end())
#define inf   1000000007
#define ninf -1000000007
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

int main(){
    FAST_IO;
    ll n,m;
    cin >> n >> m;
    vll a(n);

    ll maxa = -1;
    ll mina = LONG_LONG_MAX;
    for(ll i=0; i < n; i++) {
        cin >> a[i];
        maxa = max(maxa,a[i]);
        mina = min(mina,a[i]);
    }

    ll diffs = 0;

    for(ll i=0; i < n; i++) {
        diffs += maxa - a[i];
    }

    if(m <= diffs)
        cout << maxa;
    else {
        ll remaining = m - diffs;
        cout << maxa + remaining/n + (remaining%n != 0);
    }
    cout << ' ';
    cout << maxa + m;


}
