#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
#define debug puts
#define setp cout << fixed << setprecision(3)
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int N=2e5+5;
const int MOD=1e9+7;
const ll INF=1e18+8;

int main(void){
    FAST_IO;
    ll n,k;
    cin >> n>> k;
    k=240-k;
    ll i=1;
    ll ans=0;
    while(k>=5*i&&i<=n){
        ans++;
        k-=5*i;
        i++;
    }
    cout << ans << endl;

    return 0;
}
/********

*********/
