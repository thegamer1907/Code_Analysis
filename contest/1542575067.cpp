#include<iostream>
#include<cstdio>
char a[2],s[105][2];
int main(){
    int n,f1=0,f2=0;
    scanf("%s",a);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
        if(s[i][0]==a[0]&&s[i][1]==a[1]){
            f1=1;
            f2=1;
        }
        if(a[0]==s[i][1])
            f1=1;
        if(a[1]==s[i][0])
            f2=1;
    }
    f1==1&&f2==1?printf("YES"):printf("NO");
    return 0;
}
