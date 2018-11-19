#include<bits/stdc++.h>
using namespace std;
char s[105][3];
int main()
{
    char st[3];
    int n;
    scanf("%s",st);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    bool flag1=false,flag2=false;
    for(int i=0;i<n;i++){
        if(s[i][1]==st[0]) flag1=true;
        if(s[i][0]==st[1]) flag2=true;
        if(s[i][0]==st[0]&&s[i][1]==st[1]) flag1=true,flag2=true;
    }
    if(flag1&&flag2) printf("YES\n");
    else printf("NO\n");
    return 0;
}
