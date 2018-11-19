#include <cstdio>
#include <iostream>
using namespace std;
int n,k,cnt[16];
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;++i){
        int s=0,x;
        for(int j=0;j<k;++j){
            scanf("%d",&x);
            s|=x<<j;
        }
        ++cnt[s];
    }
    if(n==1){
        if(cnt[0])printf("YES");
        else printf("NO");
        return 0;
    }
    for(int i=0;i<(1<<k);++i)
        if((i&i)==0 && cnt[i]>=2){
            printf("YES");
            return 0;
        }
    for(int i=0;i<(1<<k);++i)
        for(int j=i+1;j<(1<<k);++j)
            if((i&j)==0 && cnt[i] && cnt[j]){
                printf("YES");
                return 0;
            }
    printf("NO");
}
