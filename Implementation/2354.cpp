#include<cstdio>
#include<queue>
using namespace std;
typedef long long LL;
LL n,x;
int main(){
    scanf("%lld",&n);
    while(n){
        if(n%10==4||n%10==7)x++;
        n/=10;
    }
    if(x==4||x==7)puts("YES");
    else puts("NO");
} 