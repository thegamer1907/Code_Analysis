#include <bits/stdc++.h>

#define pb push_back
#define F first
#define S second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define size(x) int(x.size())
#define deb(x) cerr << "[ " << #x << " = " << x << " ]"
#define debe(x) cerr << "[ " << #x << " = " << x << " ]\n"
#define ex exit(0)
#define MOD 1000000007
#define INF 2147483647
#define fname ""

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 100005;

int main() {
    #ifndef ONLINE_JUDGE
    freopen(fname".in", "r", stdin);
    freopen(fname".out", "w", stdout);
    #endif
    int n, a, b;
    cin >> n >> a >> b;
    a += n;
    b += n;
    vector <int> v;
    for (int i = 1; i <= n; i++) v.pb(i);
    v[a - n - 1] += n; 
    v[b - n - 1] += n;
    for (int j = 1;;j++) {
       vector <int> nw;
       for (int i = 0; i < size(v); i += 2) {
           if (v[i] == a && v[i + 1] == b) {
              if (size(v) == 2) {
                 cout << "Final!", ex;              
              } else cout << j, ex;
           }
           if (v[i] == b && v[i + 1] == a) {
              if (size(v) == 2) {
                 cout << "Final!", ex;              
              } else cout << j, ex;
           }                
           nw.pb(max(v[i], v[i + 1]));
       }
       v = nw;
    }
    return 0;
}