#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD=1e9+7, N=1e5+10;

int t,k;

ll dp[N];
ll f(int i){
    if(i<0)return 0;
    if(i==0)return 1;
    ll &res=dp[i];
    if(res!=-1)return res;
    return res=(f(i-1)+f(i-k))%MOD;
}

ll psa[N];

int main(){
    memset(dp, -1, sizeof dp);
    scanf("%d%d",&t,&k);
    for(int i=0;i<N;i++)
        psa[i+1]=(psa[i]+f(i))%MOD;
    for(int i=0;i<t;i++){
        int a,b;scanf("%d%d",&a,&b);
        printf("%lld\n", (psa[b+1]-psa[a]+MOD)%MOD);
    }
}

