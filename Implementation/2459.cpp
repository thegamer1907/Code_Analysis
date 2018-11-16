#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void){
    int n;scanf("%d",&n);
    int ans=0,c=0;
    while(n--){
        int a,b;scanf("%d%d",&a,&b);
        c-=a;c+=b;
        ans=max(ans,c);
    }
    printf("%d\n",ans);
    return 0;
}
