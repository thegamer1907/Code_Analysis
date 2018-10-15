#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define fo_(i,a,b) for(ll i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define PI 3.14159265
#define nmax 200100
const ll inf = 9999999999;
using namespace std;

ll a[nmax],k[nmax],acc[nmax];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,q;
    cin >> n >> q;
    fo(i,0,n) cin >> a[i];
    fo(i,0,q) cin >> k[i];
    acc[0] = a[0];
    fo(i,1,n) acc[i] = acc[i-1] + a[i];
    ll last = 0;
    fo(i,0,q){
        last += k[i];
        if (last >= acc[n-1]){
            last = 0;
            cout << n << endl;
            continue;
        }
        int pl = upper_bound(acc,acc+n,last)-acc;
        cout << n-pl << endl;
    }

    return 0;
}
