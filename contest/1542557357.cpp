#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[4];
    while(~scanf("%s",str)){
        int n;
        scanf("%d",&n);
        char temp[105][4];
        int flag=0;
        for(int i=1;i<=n;i++){
            scanf("%s",temp[i]);
            if(strcmp(temp[i],str)==0){
                flag=1;
            }
        }
        if(flag){
            printf("YES\n");
        }
        else{
            int flag1=0;
            int flag2=0;
            for(int i=1;i<=n;i++){
                if(temp[i][1]==str[0]){
                    flag1=1;
                }
                if(temp[i][0]==str[1]){
                    flag2=1;
                }
            }
            if(flag1&&flag2){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
