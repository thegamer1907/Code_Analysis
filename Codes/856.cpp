#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define fi first
#define se second
#define endl '\n'
template<class X, class Y> void amin(X& x, const Y& y){if(x > y) x = y;}
template<class X, class Y> void amax(X& x, const Y& y){if(x < y) x = y;}
typedef vector<int> vi; typedef pair<int, int> ii; typedef long long ll; typedef long double ld;
const int INF = 1e9 + 10; const ll INFL = 1e18 + 10;

int n;
ll k;

void process(){
    cin >> n >> k;
    for(int i = n; i >= 1; i--){
        ll mid = (1LL << (i - 1));
        if(k == mid){
            cout << i;
            return;
        }
        if(k > mid) k -= mid;
    }
    cout << 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen(".in", "r", stdin);
    process();
}


