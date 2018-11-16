#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
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
const ll mod = 1e9+7;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll fac(ll a){
    if(a == 1) return 1;
    return a*fac(a-1);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;
    cin >> a >> b;
    if(a>b) swap(a,b);
    cout << fac(a);

    return 0;
}

