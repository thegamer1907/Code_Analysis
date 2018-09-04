#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
typedef long long ll;
const int maxn=3*1e5+15;
const int maxm=100005;
const int mod=998244353;
const int inf=0x3f3f3f3f;
ll n,m;

bool check(ll k){
    ll lef=0,rig=0;
    ll cnt=n;
    while(cnt){
        ll aa=min(k,cnt);
        cnt-=aa;lef+=aa;
        ll bb=cnt/10;
        cnt-=bb;rig+=bb;
    }
    return lef>=rig;
}

int main(){
    scanf("%lld",&n);
    m=(n+1)/2;
    ll lef=1,rig=m,ans;
    while(lef<=rig){
        ll mid=(lef+rig)>>1;
        if(check(mid)){ans=mid;rig=mid-1;}
        else lef=mid+1;
    }
    printf("%lld\n",ans);
    return 0;
}
