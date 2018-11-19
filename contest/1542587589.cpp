#include <bits/stdc++.h>
using namespace std;

int su[16];

int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        int suu = 0;
        for(int j=0;j<k;j++){
            int aa;
            scanf("%d",&aa);
            suu = suu * 2 + aa;
        }
        su[suu] = 1;
    }
    if(su[0]){
        printf("YES\n");
    }else{
        for(int i=0;i<(1 << k);i++){
            for(int j=i+1;j<(1 << k);j++){
                if(su[i] && su[j] && ((i & j) == 0)){
                    printf("YES\n");
                    return 0;
                }
            }
        }
        printf("NO\n");
    }
}
