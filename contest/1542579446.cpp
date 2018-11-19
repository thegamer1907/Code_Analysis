#include <stdio.h>
int main(){
    int n;
    char a[200],temp[200];
    bool f[2]={false,false};
    scanf("%s",a);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%s",temp);
        if(temp[1]==a[0])f[0]=true;
        if(temp[0]==a[1])f[1]=true;
        if(f[0]&&f[1]){
            printf("YES\n");
            return 0;
        }
        if(temp[0]==a[0]&&temp[1]==a[1]){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}