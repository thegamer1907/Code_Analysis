#include<bits/stdc++.h>
using namespace std;
const long long INF=1e18;
int N,K,a[100001],cou[100001],cl,cr;
long long dp[21][100001],cost;
long long h(long long x){
    return x*(x-1)/2;
}
void g(int ql,int qr){
    while(cl<ql){
        cost-=h(cou[a[cl]]);
        cou[a[cl]]--;
        cost+=h(cou[a[cl]]);
        cl++;
    }
    while(cl>ql){
        cl--;
        cost-=h(cou[a[cl]]);
        cou[a[cl]]++;
        cost+=h(cou[a[cl]]);
    }
    while(cr<qr){
        cr++;
        cost-=h(cou[a[cr]]);
        cou[a[cr]]++;
        cost+=h(cou[a[cr]]);
    }
    while(cr>qr){
        cost-=h(cou[a[cr]]);
        cou[a[cr]]--;
        cost+=h(cou[a[cr]]);
        cr--;
    }
}
void f(int k,int l,int r,int opl,int opr){
    int m=(l+r)/2,op;
    long long mi=INF;
    for(int i=min(opr,m);i>=opl;i--){
        g(i,m);
        if(dp[k-1][i-1]+cost<mi){
            mi=dp[k-1][i-1]+cost;
            op=i;
        }
    }
    dp[k][m]=mi;
    if(l<=m-1)f(k,l,m-1,opl,op);
    if(m+1<=r)f(k,m+1,r,op,opr);
}
int main(){
    scanf("%d %d",&N,&K);
    for(int i=1;i<=N;i++)scanf("%d",&a[i]);
    memset((dp),0,sizeof(dp));
    for(int i=1;i<=N;i++)dp[0][i]=INF;
    for(int i=1;i<=K;i++){
        memset((cou),0,sizeof(cou));
        cou[a[1]]++;
        cl=cr=1;
        cost=0;
        f(i,1,N,1,N);
    }
    printf("%lld\n",dp[K][N]);
    return 0;
}