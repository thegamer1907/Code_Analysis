#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a,b) for(int i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define PI 3.14159265
#define nmax 100100
const ll inf = std::numeric_limits<ll>::max();
using namespace std;

ll acs[nmax];
pll a[nmax];

map<ll,bool> seen;

bool big(pll u,pll w){

    return u.first < w.first;

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    ll d;
    cin>>n>>d;
    fo(i,0,n) {
        ll aa,ss;
        cin >> aa >> ss;
        a[i] = {aa,ss};
    }
    sort(a,a+n);
    acs[0] = 0;
    acs[1] = a[0].second;
    fo(i,2,n+1) acs[i] = acs[i-1] + a[i-1].second;
    ll mx = 0;
    fo(i,0,n){

        mx = max(mx,acs[(lower_bound(a,a+n,make_pair(a[i].first+d,-1LL))-a)] - acs[i]);

    }
    cout << mx;
    return 0;
}

