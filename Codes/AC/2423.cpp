/** Source code by WDragon **/
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000003
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define P(x) printf("%d\n",(x))
#define all(v) (v).begin(),(v).end()
#define FF first
#define SS second
using namespace std;
//int dx[]={1,0,0,-1},dy[]={0,1,-1,0};
int pm[10*MAX],cnt[10*MAX],dp[10*MAX],vis[10*MAX];
void sieve(int lt){
    for(int i=2;i*i<=lt;++i){
        if(pm[i]==1)
            continue;
        for(int j=(i<<1);j<=lt;j+=i){
            pm[j]=1;
        }
    }
    pm[1]=1;
    for(int i=2;i<=lt;++i){
        if(!pm[i]){
            cnt[i]=vis[i];
            for(int j=2*i;j<=lt;j+=i){
                cnt[i]+=vis[j];
            }
        }
        dp[i]=dp[i-1]+cnt[i];
    }
}
int main(){
int n,mx=0;
scanf("%d",&n);
rep(i,0,n){
    int x;
    S(x);
    vis[x]++;
    mx=max(mx,x);
}
int m;
sieve(mx);
S(m);
while(m--){
    int x,y;
    S2(x,y);
    y=min(y,mx);
    if(x>y)
        printf("0\n");
    else
    printf("%d\n",dp[y]-dp[x-1]);
}
return 0;
}