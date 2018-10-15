#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for(ll i = 0; i < n; i++)
#define endl '\n'
#define vll vector<ll>

int main(){
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);

        ll n,m,max_ans,min_ans; cin >> n >> m;
        vll a(n);
        rep(i,n) cin >> a[i];
        sort(a.begin(),a.end());
        max_ans = a[n-1] + m;
        rep(i,n)
        if(m >= (a[n-1] - a[i])) m -= (a[n-1] - a[i]);
        else if(m > 0 && m < (a[n-1] - a[i])) {
                a[i] += m;
                m = 0;
        }
        min_ans = (m % n == 0) ? 0 : 1;
        min_ans += (a[n-1] + m/n);
        cout << min_ans << " " << max_ans << endl;

        return 0;
}
