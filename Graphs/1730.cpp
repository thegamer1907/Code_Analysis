#include<bits/stdc++.h>

using namespace std;

typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<str> Vs;
typedef vector<double> Vd;
typedef vector<pair<int, int> > Vpi;
typedef vector<pair<ll, ll> > Vpll;
typedef vector<pair<double, double> > Vpd;

#define V       vector
#define P       pair
#define pb      push_back
#define eb      emplace_back
#define ppb     pop_back()
#define Mp      make_pair
#define ff      first
#define ss      second
#define all(v)  v.begin(),v.end()
#define sz(v)   v.size()

#define rep(i, N)     for(int i=0;i<N;i++)
#define repr(i, N)    for(int i=N;i>=0;i--)
#define lp(i, a, b)   for(int i=a;i<=b;i++)
#define lpr(i, b, a)  for(int i=b;i>=a;i--)
#define sc1(a)        scanf("%d", &a)
#define sc2(a, b)     scanf("%d %d", &a, &b)
#define sc3(a, b, c)  scanf("%d %d %d", &a, &b,&c)

#define sq(a)   a*a
//=====================================//
#define lg puts("")

const double PI = acos(-1.0);

int main() {

#ifdef _DBG
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n, t;
    sc2(n, t);
    Vi v;
    rep(i, n - 1) {
        int x;
        sc1(x);
        v.pb(x);
    }
    Vi vi;
    int idx = 1;
    vi.pb(1);
    for (int i = 0; i < sz(v);) {
        idx = i + 1 + v[i];
        i = idx - 1;
      //  if (idx < sz(vi))
            vi.pb(idx);
    }
    sort(all(v));
   // for(int i:vi) cout<<i<<" ";
    if (binary_search(all(vi), t)) cout << "YES" << endl;
    else cout << "NO" << endl;

#ifdef _DBG
    printf("\n>>Time taken: %.3fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
