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
#define MX 20
#define II(U,I) (U&1<<I?1:-1)
int N,K,C[16];
int gt(){
    int S=0,a;
    F(K)scanf("%d",&a),S<<=1,S|=a;
    return S;
}
bool dyn(int u,int a,int b,int c,int d,bool x){
    if(x&&a<=0&&b<=0&&c<=0&&d<=0)return 1;
    if(u+1==1<<K)return 0;
    F(C[u]+1)if(dyn(u+1,a+i*II(u,0),b+i*II(u,1),c+i*II(u,2),d+i*II(u,3),x|i))return 1;
    return 0;
}
int main(void){
    scanf("%d%d",&N,&K);
    F(N)++C[gt()];
    F(16)C[i]=min(C[i],6);
    puts(dyn(0,0,0,0,0,0)?"YES":"NO");
    return 0;
}
