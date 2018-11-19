#include <cstdio>

using namespace std;
int C[20];
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        int s=0,tmp;
        for(int j=0;j<k;j++){
            scanf("%d",&tmp);
            s+=(tmp<<j);
        }    
        if(s==0){
            puts("YES");
            return 0;
        }
        C[s]++;
    }
    for(int i=0;i<(1<<k);i++){
        for(int j=0;j<(1<<k);j++){
            if(i&j) continue;
            if(C[i]&&C[j]){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
