#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int>pii;
const int MX=2e5+7;

int n,q;
LL a[MX],sum[MX];

int main() {
    //freopen("in.txt","r",stdin);
    scanf("%d%d",&n,&q);
    for(int i=1; i<=n; i++) {
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    LL num=0;
    int pos=1;
    while(q--) {
        LL k;
        scanf("%lld",&k);
        num+=k;
        pos=upper_bound(sum+1,sum+n+1,num)-sum;
        if(pos==n+1){
            pos=1;
            num=0;
        }
        printf("%d\n",n-pos+1);
    }
    return 0;
}
