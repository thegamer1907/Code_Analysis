#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int vis[(1<<4)+10];
int main(){
    int n, k, v, S;
    scanf("%d%d", &n, &k);
    for(int i=1;i<=n;i++){
        S=0;
        for(int j=0;j<k;j++)
            scanf("%d", &v), S=(S<<1)|v;
        vis[S] = 1;
        if(S == 0){
            printf("YES\n");
            return 0;
        }
    }
    int all=(1<<k)-1;
    for(int tS=1;tS<=all;tS++) if(vis[tS]){
        int oth = all^tS;
        for(int sonS=all^tS;sonS;sonS=(sonS-1)&oth)
            if(vis[sonS]){
                printf("YES\n");
                return 0;
            }
    }
    printf("NO\n");

    return 0;
}
