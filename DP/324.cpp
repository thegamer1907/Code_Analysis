#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
const ll inf = 1e8;
#define repp(x,n) for(__typeof(n) x=1;x<=(n);x++)
#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
#define sf(n)       scanf("%lld", &n)
#define sff(a,b)    scanf("%lld %lld", &a, &b)
#define pf(a)  printf("%lld\n",a)
#define pff(a,b)  printf("%lld %lld\n",a,b)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define READ freopen("double helix.txt","r",stdin)
ll br[1001];
int main(){
    ll tmp,n,sum=0,m,ans,x,Min=inf,ar[1001],cnt=0,br[1001],cr[1001];
    sf(n);
    while(n--){
        sf(tmp);
        ar[tmp]=tmp;
        br[tmp]++;
    }
    sf(m);
    rep(i,m){
        sf(cr[i]);
    }
    sort(cr,cr+m);
        rep(i,m){
           tmp = cr[i];
           if(tmp>1 && tmp-1 == ar[tmp-1] && br[tmp-1]>0)
            cnt++,br[tmp-1]--;
          else if(tmp == ar[tmp] && br[tmp]>0)
            cnt++,br[tmp]--;
            else if(tmp+1 == ar[tmp+1] && br[tmp+1]>0)
            cnt++,br[tmp+1]--;
    }
    pf(cnt);
    return 0;
}

