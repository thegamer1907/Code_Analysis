#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long ll;


ll n,m,k;

ll lt(ll x){
    ll res=0;
    for(int i=1;i<=n;++i){
        res+=min((x-1)/i,m);
    }
    return res;
}

int main(){
    scanf("%lld%lld%lld", &n, &m, &k);
    ll lo=1, hi=n*m;
    while(lo<hi){
        ll mid=lo+(hi-lo+1)/2;
        if(lt(mid)>k-1){
            hi=mid-1;
        }else{
            lo=mid;
        }
    }
    printf("%lld", lo);
}
