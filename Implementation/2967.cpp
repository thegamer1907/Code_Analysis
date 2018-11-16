#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define F(a) for ( ll i = 0; i < (ll)(a); ++i )

int main() {
    ios::sync_with_stdio(false);
    map<string,ll> m;
    m["Tetrahedron"]+=4;
    m["Cube"]+=6;
    m["Octahedron"]+=8;
    m["Dodecahedron"]+=12;
    m["Icosahedron"]+=20;
    ll N;cin>>N;
    string s;
    ll sum=0;
    F(N){
        cin>>s;
        sum+=m[s];
    }
    cout<<sum<<endl;
    return 0;
}

