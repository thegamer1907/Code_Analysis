#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef long double         ld;
typedef unsigned long long  ull;

#define all(x)      x.begin(),x.end()
#define sep         " "
#define fastio      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll MAXN = 50;
ll n, k, a[MAXN], p, ans=0;

int main()
{
    fastio;
    cin >> n >> k;
    for (ll i=0; i<n; i++)  cin >> a[i];
    p = a[k-1];
    for (ll i=0; i<n; i++){
        if (a[i]>0 && (i<k || a[i]==p)){
            ans ++;
        }
    }
    cout << ans << endl;
}
