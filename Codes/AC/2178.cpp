#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int maxn=2*1e5+15;
const int maxe=2*maxn;
const int maxc=26;
const int inf=0x3f3f3f3f;
int num[maxn];
int n;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    int p1=1,p2=n+1;
    ll lef=0,rig=0;
    ll ans=0;
    for(;p1<p2;p1++){
        lef+=num[p1];
        while(p2>p1+1&&rig<lef){
            p2--;
            rig+=num[p2];
        }
        if(lef==rig)ans=max(ans,lef);
    }
    printf("%lld\n",ans);
    return 0;
}
