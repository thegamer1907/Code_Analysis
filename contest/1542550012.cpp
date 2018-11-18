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
    vi T(6);F(3)cin>>T[i];
    ll A,B;cin>>A>>B;
    ll MX=12*60*60;
    T[0]=60*60*T[0]+60*T[1]+T[2];
    T[1]=12*60*T[1]+12*T[2];
    T[2]=12*60*T[2];
    F(3)T[i]=T[i]%MX;
    F(3)T[i+3]=T[i]+MX;
    A=60*60*A;
    B=60*60*B;
    bool q=true,w=true;
    if(A>B)swap(A,B);
    F(6) if(A<T[i] && T[i]<B   ){
        //cout<<"Q: "<<A<<' '<<T[i]<<' '<<B<<endl;
        q=false;
    }
    F(6) if(B<T[i] && T[i]<A+MX){
        //cout<<"W: "<<B<<' '<<T[i]<<' '<<A+MX<<endl;
        w=false;
    }
    bool f=q || w;
    cout<<(f?"YES":"NO")<<endl;
    return 0;
}
