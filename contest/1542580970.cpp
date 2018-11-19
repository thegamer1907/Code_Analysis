#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<=k;i++)
#define per(i,j,k) for(int i=j;i>=k;i--)
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
typedef long long ll;
const int maxn=1e5+10;
int n,m,k,t;
bool dp[20];
int t1[4];
int main(){
    int n,k,a;
    cin>>n>>k;
    rep(i,1,n){
        int tmp=0;
        rep(j,0,k-1) {
            scanf("%d",&a);
            if(a)
            tmp+=1<<j;
        }
        dp[tmp]=true;
    }
    bool flag=false;
    t=1<<k;
    rep(i,1,((1<<t)-1)){
        int cnt=0;
        flag=true;
        bool ok=true;
        memset(t1,0,sizeof(t1));
        for(int j=0;j<t;j++){
            if(i>>j&1) {
                cnt++;
                if(!dp[j]) {
                    ok=false;
                    break;
                }
                for(int g=0;g<k;g++){
                if(j>>g&1) t1[g]++;
                }
            }
        }
        if(!ok) {
            flag=false;
            continue;
        }
        rep(h,0,k-1){
            if(t1[h]*2>cnt) flag=false;
        }
        if(flag) {
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
