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
typedef vector<int> vi; typedef pair<int, int> ii; typedef long long ll; typedef long double ld;
const int INF = 1e9 + 10; const ll INFL = 1e18 + 10;
const int MAX = 1e5 + 10;

int n, m;
vi a[MAX];
vector<ii> iv;

int bfind(int x){
    int l = 0, r = iv.size() - 1, i = (l + r)/2;
    while(l != i && i != r){
        if(iv[i].fi <= x) l = i;
        else r = i;
        i = (l + r)/2;
    }
    for(int i = r; i >= l; i--) if(iv[i].fi <= x) return i;
    return -1;
}

void process(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        a[i].reserve(m + 1);
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    
    for(int j = 1; j <= m; j++){
        int i = 1;
        while(i <= n){
            int i1 = i;
            while(i1 < n && a[i1][j] <= a[i1 + 1][j]) i1++;
            iv.pb(par(i, i1));
            i = i1 + 1;
        }
    }
    sort(iv.begin(), iv.end());
    
    int nlen = 0;
    for(int i = 1; i < iv.size(); i++){
        if(iv[i].fi == iv[nlen].fi) amax(iv[nlen].se, iv[i].se);
        else iv[++nlen] = iv[i];
    }
    iv.resize(nlen + 1);
    
    nlen = 0;
    for(int i = 1; i < iv.size(); i++){
        if(iv[i].se > iv[nlen].se) iv[++nlen] = iv[i];
    }
    iv.resize(nlen + 1);
    
    //for(auto x : iv) cout << x.fi << " " << x.se << endl;
    
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        int p = bfind(l);
        if(p != -1 && iv[p].se >= r) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("c.in", "r", stdin);
    process();
}

