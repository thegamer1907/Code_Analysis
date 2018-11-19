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
#define MX 100005
int A[MX],N,K,B,E,f[MX];
ll S;
void dl(int I){S-=--f[A[I]];}
void add(int I){S+=f[A[I]]++;}
ll C(int b,int e){
    while(E<e)add(++E);
    while(E>e)dl(E--);
    while(B<b)dl(B++);
    while(B>b)add(--B);
    return S;
}
struct CH{
    ll dp[2][MX];
    void gt(int d,int B,int E,int L,int R){
        if(B>E)return;
        ll S=1e18;
        int M=(B+E)/2,J=E;
        FT(L,R+1)if(dp[(d-1)&1][k+1]+C(M,k)<S)S=dp[(d-1)&1][k+1]+C(M,k),J=k;
        dp[d&1][M]=S;
        gt(d,B,M-1,L,J),gt(d,M+1,E,J,R);
    }
    ll go(int N,int K){
        fill(*dp,*dp+N,1e18),dp[0][N]=0;
        FT(1,K+1)dp[k&1][N]=0,gt(k,0,N-1,0,N-1);
        return *dp[K&1];
    }
}D;
int main(void){
    scanf("%d%d",&N,&K),ga(N,A),f[*A]=1,printf("%lld\n",D.go(N,K));
    return 0;
}
