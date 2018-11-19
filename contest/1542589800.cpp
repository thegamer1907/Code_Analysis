#include<bits/stdc++.h>

using namespace std;
char s[100],ss[100];
char a[200][3];
char str[200][3];
int main()
{
    int n;
    scanf("%s",s);
    ss[0]=s[0];
    ss[1]=s[1];
    if(s[0]>s[1]) swap(s[0],s[1]);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",str[i]);
        a[i][0]=str[i][0];
        a[i][1]=str[i][1];
        if(str[i][0]>str[i][1]) swap(str[i][0],str[i][1]);
    }
    int r=0;
    for(int i=1;i<=n;i++)
    {
        if(s[0]==str[i][0]&&s[1]==str[i][1]) r=1;
    }
    if(r==1)
    {
        printf("YES\n");
        return 0;
    }
    int l=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i][0]==ss[1]) r=1;
        if(a[i][1]==ss[0]) l=1;
    }

   // printf("%d %d\n",l,r);
    if(l==1&&r==1)
    {
        printf("YES\n");
    }
    else printf("NO\n");
}
