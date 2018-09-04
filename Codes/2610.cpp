#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define ld long double
#define re return
#define oo 1e9
#define OO 1e18
#define mm(o,k) memset(o,k,sizeof o)
#define Hossam_Yehia ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int n,m,x,sz,idx,y;
int dp[10000005];
bitset<10000005> bs;
int vis[10000005];
void sieve(){
    for(int i=2;i<=1e7;++i)
        if(!bs[i])
            for(int j=i;j<=1e7;j+=i)
                dp[i]+=vis[j],bs[j]=1;
}
int main(){
    //Hossam_Yehia;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        ++vis[x];
    }
    sieve();
    for(int i=1;i<=1e7;++i)dp[i]+=dp[i-1];
    scanf("%d",&m);
    int maxi=1e7;
    while(m--){
        scanf("%d",&x);scanf("%d",&y);
        x=min(maxi,x);
        y=min(maxi,y);
        printf("%d\n",dp[y]-dp[x-1]);
    }
    re 0;
}
