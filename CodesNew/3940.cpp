// Failure will never overtake me if my determination to succeed is strong enough

#include <bits/stdc++.h>
#define int long long
#define ld long double
#define mod 1000000007
#define fi first
#define se second
#define vi vector<int>
#define pb push_back
#define pi pair<int,int>
#define all(v) v.begin(),v.end()
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false); cout.sync_with_stdio(false);

using namespace std;

int32_t main() {
    fast_io()
    int n, m;
    cin >> n >> m;
    vi a;
    a.pb(-1);
    vi b;
    b.pb(-1);
    vi pre;
    int pree[n + 3];
    pree[0] = 0;
//    for(int i = 1; i <= n; i++) pree.pb(0);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.pb(x);//cin >> a[i];
        }
    for(int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        b.pb(x);
        //cin >> b[i];
    }
    for(int i = 1; i <= n; i++) {
        pree[i] = pree[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++) pre.pb(pree[i]);
    int ttl = 0, al;
    for(int i = 1; i <= m; i++) {
        int shot = b[i];
        ttl += shot;
        auto uu = upper_bound(all(pre), ttl);
        if(uu == pre.end()) {
            ttl = 0;
            al = n;
        }
        else {
            al = n - (uu - pre.begin());            
        }
        cout << al << endl;
    }
    
	return 0;
}
