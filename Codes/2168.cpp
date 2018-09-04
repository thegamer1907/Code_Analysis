#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
typedef vector<ll> vi;
// push_back insert lower_bound upper_bound erase
#define F(a) for ( ll i = 0; i < (ll)(a); ++i )
// INF for (int) = ( 1<<30 ), for (long long) = ( 1LL<<62LL )

int main() {
    ios::sync_with_stdio(false);
    ll N;cin>>N;
    vi a(N+1);F(N)cin>>a[i+1];
    vi b(N+1);F(N)b[N-i]=a[i+1];
    F(N)a[i+1]+=a[i];
    F(N)b[i+1]+=b[i];
    ll q=0,w=0;
    ll mx=0;
    while(q<N+1 && w<N+1 && q+w<=N){
        //cout<<q<<' '<<w<<' '<<a[q]<<' '<<b[w]<<endl;
        if(a[q]<b[w]){
            q++;
        }else if(a[q]>b[w]){
            w++;
        }else{
            mx=max(mx,a[q]);
            q++;w++;
        }
    }
    cout<<mx<<endl;

    return 0;
}

