#include<bits/stdc++.h>

#define _USE_MATH_DEFINES
#define ll long long
#define ins Not Needed Thing
#define ull unsigned long long
#define ld long double
#define Accepted 0
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define sz(x) (int)(x.size())
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define emp What is it
#define SORRY FUL Accepted 
#define dimash the top one
#define I wish 
#define you be a little more calm
#define SpeedForce ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

const double eps = 0.000001;
const ld pi = acos(-1);
const int maxn = 1e7 + 9;
const int mod = 1e9 + 7;
const ll MOD = 1e18 + 123;
const ll INF = 1e18 + 9;
const int minn = 1e5 + 9;
const int N = 2e3 + 123;                                          
const int NN = 2e5 + 123;
const int PRI = 555557;
const int pri = 997;

set<string> s;

int main () {
  // 	#ifdef ONLINE_JUDGE
//be//	freopen(".in", "r", stdin);
//st//	freopen(".out", "w", stdout);	
 //	#endif
    string a;
    int n, k;
    cin >> n >> k;
    if(n > k) {
        cout << "YES";
    } else if (k > n){
            cout << "NO";
    }
    if(n!= k) return 0;
    for (int i = 1; i <= n * 2; i ++) {
        cin >> a;
            s.insert(a);
    }
    if(sz(s) % 2 == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}