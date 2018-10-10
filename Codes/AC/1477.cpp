#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define par make_pair
#define pb push_back
#define fi first
#define se second
#define endl '\n'
template<class X, class Y> void amax(X& x, const Y& y){if(x < y) x = y;}
template<class X, class Y> void amin(X& x, const Y& y){if(x > y) x = y;}
typedef vector<int> vi; typedef pair<int, int> ii; typedef long long ll;
const int INF = 1e9 + 10; const ll INFL = 1e18 + 10;
const int MAX = 1e5 + 10;

int n, S;
int a[MAX];
ll b[MAX];

ll calc(int k){
    for(int i = 1; i <= n; i++) b[i] = a[i] + (ll)i*k;
    sort(b + 1, b + n + 1);
    ll sum = 0;
    for(int i = 1; i <= k; i++) sum += b[i];
    return sum;
}

ii bsfind(){
    int l = 1, r = n, i = (l + r)/2;
    while(l != i && i != r){
        if(calc(i) <= S) l = i;
        else r = i;
        i = (l + r)/2;
    }
    for(int i = r; i >= l; i--){
        ll x = calc(i);
        if(x <= S) return par(i, x);
    }
    return par(0, 0);
}

void process(){
    cin >> n >> S;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    ii res = bsfind();
    cout << res.fi << " " << res.se;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("c.in", "r", stdin);
    process();
}
