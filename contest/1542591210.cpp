#include<bits/stdc++.h>
using namespace std;
int n;
char a[3],s[100][3];
int main()
{
    scanf("%s",a);
    scanf("%d",&n);
    int i;
    bool key=false;
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
        if(s[i][0]==a[0] && s[i][1]==a[1]) key=true;
    bool t1=false,t2=false;
    for(i=0;i<n;i++)
    {
        if(s[i][1]==a[0]) t1=true;
        if(s[i][0]==a[1]) t2=true;
    }
    if(!key) key=t1&t2;
    if(key) printf("YES\n");
    else printf("NO\n");
    return 0;
}
