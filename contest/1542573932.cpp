#include <bits/stdc++.h>
using namespace std;
int n, k, x, cnt[20];
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++){
        int s=0;
        for(int j=0; j<k; j++){
            scanf("%d", &x);
            s = s*2+x;
        }
        cnt[s]++;
    }
    for(int i=0; i<(1<<k); i++){
        for(int j=0; j<(1<<k); j++){
            if(cnt[i]>0&&cnt[j]>0&&((i&j)==0)){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
