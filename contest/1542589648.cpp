#include<stdio.h>
int n;
char b[105][5],s[5];
int main(){
    int i,j;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=1;i<=n;i++)   scanf("%s",&b[i]);
    for(i=1;i<=n;i++){
        if(b[i][0]==s[0] && b[i][1]==s[1])  break;
    }
    if(i!=n+1){
        printf("YES\n");
        return 0;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(b[i][1]==s[0] && b[j][0]==s[1])  break;
        }
        if(j!=n+1)  break;
    }
    if(i!=n+1)  printf("YES\n");
    else    printf("NO\n");
    return 0;
}