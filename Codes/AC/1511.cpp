#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX = 1e5 + 10;
typedef long long LL;
LL a[MAX],n,s,b[MAX],num,cut;
int sf(LL m){
    for(LL i = 1; i <= n; i++)
        b[i] = a[i] + i * m;
    sort(b + 1,b + 1 + n);
    LL ans = 0;
    for(LL i = 1; i <= m; i++)
        ans += b[i];
    if(ans <= s){
        if(num < m)
            num = m,cut = ans;
        return 1;
    }
    return 0;
}
void ef(){
    LL l = 1,r = n;
    while(l <= r){
        LL m = (l + r) / 2;
        if(sf(m)) l = m + 1;
        else r = m - 1;
    }
}


int main()
{
    LL b;
    scanf("%lld %lld",&n,&s);
    for(int i = 1; i <= n; i++)
        scanf("%lld",&a[i]);
    num = cut = 0;
    ef();
    printf("%lld %lld\n",num,cut);
    return 0;
}