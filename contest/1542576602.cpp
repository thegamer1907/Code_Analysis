#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ans[2];
    char s[105][2];
    int n;
    int flag = 0;
    scanf("%s",ans);
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        scanf("%s",s[i]);
    }
    for(int i = 0; i < n; i++){
        if(s[i][0] == ans[1]&&s[i][1] == ans[0]){
            printf("YES\n");
            return 0;
        }else if(s[i][0] == ans[0]&&s[i][1] == ans[1]){
            printf("YES\n");
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        if(s[i][0] == ans[1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        for(int i = 0; i < n; i++){
            if(s[i][1] == ans[0]){
                printf("YES\n");
                return 0;
            }
        }
        printf("NO\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
