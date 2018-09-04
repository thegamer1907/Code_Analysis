/**
 * Author: maharshi95
 */

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n)           for(int i=0; i<n; i++)
#define rep1(i, n)          for(int i=1; i<=n; i++)

#define fup(i, a, b)        for(int i=a; i<=b; i++)
#define fdown(i, a, b)      for(int i=a; i>=b; i--)

#define sz(a)               ((int) a.size())
#define all(a)              a.begin(), a.end()
#define sgn(n)              ((n > 0) - (n < 0))
#define pb                  push_back

#define INF                 INT_MAX
#define NINF                INT_MIN

#define MOD                 (1e9 + 7)
#define MAX_SIZE            100001

typedef long long ll;

void precomp() {}

// Vector Snippets

typedef vector<int> vi;
typedef vector<ll> vll;

typedef vector<vi> vvi;
typedef vector<vll> vvll;

vector<int> read_array(int n) {
    vector<int> V(n);
    for(int i = 0; i < n; i++)
        cin >> V[i];
    return V;
}

ll lt(ll n, ll m, ll k) {
    ll total = 0;
    for(int i=1; i<=n; i++) {
        ll r = min(m + 1, (k + i - 1)/ i);
        total += r - 1;
    }
    return total;
}

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll low = 1;
    ll high = n * m;

    while(low < high) {
        // cout << low << " " << high << endl;
        ll mid = (low + high + 1) / 2;
        if(lt(n, m, mid) >= k) {
            high = mid - 1;
        } else {
            low = mid;
        }
    }
    cout << low << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  #endif
  
  int t = 1;
    if(t == 0) cin >> t;
    precomp();
    while(t--) {
        solve();
    }

  return 0;
}