#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ZERO (1e-10)
#define INF int(1e9+1)
#define CL(A,I) (memset(A,I,sizeof(A)))
#define DEB printf("DEB!\n");
#define D(X) cout<<"  "<<#X": "<<X<<endl;
#define EQ(A,B) (A+ZERO>B&&A-ZERO<B)
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
#define IN(n) int n;scanf("%d",&n);
#define FOR(i, m, n) for (int i(m); i < n; i++)
#define F(n) FOR(i,0,n)
#define FF(n) FOR(j,0,n)
#define FT(m, n) FOR(k, m, n)
#define aa first
#define bb second
void ga(int N,int *A){F(N)scanf("%d",A+i);}
#define MX (100007)
int a,N,A[MX];
ll B[MX],S,T;
bool ok(ll t){
    if(t>N)return 1;
    F(N)B[i]=A[i]+t*(i+1);
    sort(B,B+N),T=0;
    F(t)T+=B[i];
    return T>S;
}
ll bs(ll B=0,ll E=INF){
    ll M;
    while(B<E)
        if(ok(M=(B+E)>>1))E=M;
        else B=M+1;
    return max(B-1,0ll);
}
int main(void){
    scanf("%d%lld",&N,&S),ga(N,A);
    ok(a=bs(0,N+1));
    printf("%d %lld\n",a,T);
    return 0;
}