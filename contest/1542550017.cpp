#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
#define PB push_back
#define FOR(prom,a,b) for ( ll prom = (a); prom < (ll)(b); ++prom )
#define F(a) FOR(i,0,a)
#define FF(a) FOR(j,0,a)
#define EPS (1e-10)
// INF for (int) = ( 1<<30 )
// LINF for (long long) = ( 1LL<<62LL )
#define EQ(a,b) (fabs(a-b) <= fabs(a+b) * EPS)

int main() {
    ios::sync_with_stdio(false);
    string s;cin>>s;
    ll N;cin>>N;
    vector<string> a(N);
    F(N)cin>>a[i];
    bool f=false;
    F(N) if(a[i]==s)f=true;
    F(N)FF(N) if(a[i][1]==s[0] && a[j][0]==s[1])f=true;
    cout<<(f?"YES":"NO")<<endl;
    return 0;
}
