#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL l,r;

int main(){
    scanf("%lld%lld", &l, &r);
    LL ans = 0LL;
    for(LL i=(1LL<<62);i>=1;i>>=1){
        bool a = l&i;
        bool b = r&i;
        if(a!=b){
             ans = (i<<1)-1;
             break;
        }
    }
    printf("%lld\n",ans);
    return 0;
}