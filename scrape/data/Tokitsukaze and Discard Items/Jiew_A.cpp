#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
long long a[maxn];
int main() {
    long long n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i = 1;i <= m;i++) {
        scanf("%lld",&a[i]);
    }
    long long tail;
    long long gg = 0;
    long long ans = 0;
    for(int i = 1;i <= m;) {
        tail = (a[i]-gg)/k + 1;
        if((a[i]-gg)%k == 0) tail--;
        tail *= k;
        long long cc = 0;
        while((a[i]-gg) <= tail && i <= m) cc++,i++;
        if(cc != 0) {
            ans++;
            gg += cc;
        }
    }
    printf("%lld\n",ans);
}