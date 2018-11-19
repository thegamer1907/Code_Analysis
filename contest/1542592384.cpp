#include <bits/stdc++.h>
using namespace std;
char w[2];
int n;
int a,b,f;

int main()
{
    char s[3];
    scanf("%s%d",w,&n);
    int i,j;
    for(i=1;i<=n;i++){
        scanf("%s",s);
        if(s[0]==w[0]&&s[1]==w[1])f=1;
        if(s[0]==w[1])a=1;
        if(s[1]==w[0])b=1;
    }
    if(f==1||(a==1&&b==1))printf("yes");
    else printf("no");
    return 0;
}
