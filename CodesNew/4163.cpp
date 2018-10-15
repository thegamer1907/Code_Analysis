#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

const int N = 2e5 + 5;
ll n, q, a[N], k[N], acc[N];

int main (void) {
    ios_base::sync_with_stdio(false);
    
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < q; i++)
        cin >> k[i];
    
    acc[0] = a[0];
    for(int i = 1; i < n; i++)
        acc[i] = acc[i-1] + a[i];
        
    ll flechas = 0;
    for(int i = 0; i < q; i++) {
        flechas += k[i];
        
        if(flechas >= acc[n-1]) {
            cout << n << endl;
            flechas = 0;
        } else {
            int bot = 0, top = n - 1;
            int ans = upper_bound(acc, acc + n, flechas) - acc - 1; 
            cout << n - (ans + 1) << endl;
        }
    }
    
	return 0;
}