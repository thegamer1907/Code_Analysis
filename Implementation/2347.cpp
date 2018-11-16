#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(void){
    ll n;scanf("%lld",&n);
    int cnt=0;
    while(n){
        if(n%10==4||n%10==7) cnt++;
        n/=10;
    }
    if(cnt==4||cnt==7) printf("YES\n");
    else printf("NO\n");
    return 0;
}
