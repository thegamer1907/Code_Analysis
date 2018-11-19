#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
char pas[5];
int n;
char test[105][5];
int ans[2];

int main(){

    while(~scanf("%s",pas)){
        scanf("%d",&n);
        int cnt=1;
        int flag=0;
        for(int i=1;i<=n;i++){
            scanf("%s",test[i]);
        }
        ans[0]=ans[1]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(test[i][0]==pas[0] && test[i][1] == pas[1]){
                    flag=1; break;
                }
                if(test[i][1]==pas[0] && test[j][0]==pas[1]){
                    flag=1; break;
                }
                if(test[j][1]==pas[0] && test[i][0]==pas[1]){
                    flag=1;break ;
                }
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
