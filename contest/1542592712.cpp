#include<bits/stdc++.h>
using namespace std;
const int M = 3e5 + 5, INF = 0x3f3f3f3f, mod = 1e9 + 7;
int main() {
    char s[3];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
//    printf("%d\n",n);
    int ok=0,ok1=0,ok2=0,ok3=0,ok4=0;;
    for(int j=1;j<=n;j++){
        char s1[3];
        scanf("%s",s1);
//        printf("j = %d s1 = %s\n",j,s1);
        if(s1[0]==s[0]) ok1=1;
        if(s1[1]==s[0]) ok2=1;
        if(s1[0]==s[1]) ok3=1;
        if(s1[1]==s[1]) ok4=1;
        if(s1[0]==s[0]&&s1[1]==s[1]) ok=1;
        if(s1[0]==s[1]&&s1[1]==s[0]) ok=1;
    }
    if((ok2&&ok3)||ok) printf("YES\n");
    else printf("NO\n");
    return 0;
}
