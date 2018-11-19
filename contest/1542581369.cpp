#include<cstdio>
#include<algorithm>
using namespace std;
long long D[201000][21];
int n, K, w[201000], C[201000];
long long S;
int CK[201000];
void Put(int a){
    S += C[w[a]];
    C[w[a]]++;
}
void Del(int a){
    C[w[a]]--;
    S -= C[w[a]];
}
void Make(int st, int ed ,int s, int m){
    int i;
    if(ed < s || m < st){
        for(i=st+1;i<=ed;i++)Del(i);
        for(i=s+1;i<=m;i++)Put(i);
    }
    else{
        if(s < st)for(i=st;i>s;i--)Put(i);
        else for(i=st+1;i<=s;i++)Del(i);
        if(ed < m)for(i=ed+1;i<=m;i++)Put(i);
        else for(i=ed;i>m;i--)Del(i);
    }
}
void Calc(int dep, int b, int e, int s, int l, int st, int ed){
    int m = (b+e)>>1, i;
    long long M = 1e18;
    int x = 0;
    Make(st,ed,s,m);
    for(i=s;i<=min(l,m-1);i++){
        long long t = D[i][dep-1] + S;
        if(M > t)M = t, x = i;
        Del(i+1);
    }
    D[m][dep] = M;
    for(i=min(l,m-1);i>=x;i--)Put(i+1);
    if(m+1<=e)Calc(dep, m+1, e, x, l, x, m);
    if(b<=m-1)Calc(dep, b, m-1, s, x, x, m);
    Make(x,m,st,ed);
}
int main(){
    int i;
    scanf("%d%d",&n,&K);
    for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
    }
    for(i=1;i<=n;i++)D[i][0]=1e18;
    for(i=1;i<=K;i++){
        Calc(i, 1, n, 0, n-1, -1, -1);
    }
    printf("%lld\n",D[n][K]);
}