#include <bits/stdc++.h>
using namespace std;
#pragma optimize("-O3")
typedef long long ll;
ll n,ans;

int main(){
    ll l,r,m,k,v,p;
    scanf("%lld",&n);
    l=1,r=n;
    while(r>=l){
        k=(l+r)/2;
        m=n;
        v=p=0;
        while(m!=0){
            if(m>=k){
                v+=k;
                m-=k;
            }else{
                v+=m;
                m-=m;
            }
            m-=m/10;
        }
        if(2*v>=n){ans=k;r=k-1;}
        else l=k+1;
    }
    printf("%lld\n",ans);
	return 0;
}
