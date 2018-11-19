#include <cstdio>
#include <iostream>
using namespace std;
char s[101][2];
int n;
int main(){
    scanf("%s",s[0]);
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%s",s[i]);
        if(s[i][0]==s[0][0] && s[i][1]==s[0][1]){
            printf("YES");
            return 0;
        }
    }
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            if(s[i][1]==s[0][0] && s[j][0]==s[0][1]){
                printf("YES");
                return 0;
            }
    printf("NO");
}
