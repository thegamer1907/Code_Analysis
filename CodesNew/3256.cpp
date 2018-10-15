#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ll long long
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof(i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define int ll

using namespace std;

const int maxn = (int) 1e5 + 100;
const int mod = (int)1e9 + 7;   

typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;   
typedef vector<ll> Vll;               
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;                        

int n, s, a[maxn];
main () {
  cin >> n;
  forn(i, 1, n) cin >> a[i], s += a[i];
  int l = *max_element(a + 1, a + n + 1), r = (int)1e10, res = -1;
  while(l <= r){
    int mid = (l + r) >> 1;
    if(n * mid - s >= mid){
      res = mid;
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }               
  cout << res;
}