#include<bits/stdc++.h>
using namespace std;
char str[5];
int n;
char s[5];
int main()
{
    int flag1,flag2;
    while(~scanf("%s",str)){
        scanf("%d",&n);
        flag1=flag2=0;
        for(int i=0;i<n;i++){
            scanf("%s",s);
            if(s[0]==str[0]&&s[1]==str[1])
                flag1=flag2=1;
            if(s[0]==str[1])
                flag2=1;
            if(s[1]==str[0])
                flag1=1;
        }
        if(flag1==1&&flag2==1)
            printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
