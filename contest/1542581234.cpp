#include <bits/stdc++.h>
using namespace std;
int ax[16];
int n,k;

int main()
{
    scanf("%d%d",&n,&k);
    int i,j,x,a,b,c,d;
    for(i=1;i<=n;i++){
        int now=0;
        for(j=1;j<=k;j++){
            scanf("%d",&a);
            now = now*2 + a;
        }
        ax[now]++;
    }
    for(i=0;i<(1<<k);i++){
        for(j=0;j<(1<<k);j++){
            if(!ax[i]||!ax[j])continue;
            bool flag = 1;
            for(x=0;x<k;x++){
                if((i&(1<<x))&&(j&(1<<x)))flag = 0;
            }
            if(flag){
                printf("YES");
                return 0;
            }
        }
    }
    printf("no");
    return 0;
}
