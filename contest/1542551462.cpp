#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
char s[5];
char s1[5];
int a[26];
int main()
{
    scanf("%s",s+1);
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s1+1);
        for(int j=1;j<=2;j++)
        {
            a[s1[j]-'a']|=j;
        }
        if(s[1]==s1[1]&&s[2]==s1[2]) flag=1;
    }
    if(flag) return 0*printf("YES\n");
    if((a[s[1]-'a']==2||a[s[1]-'a']==3)&&(a[s[2]-'a']==1||a[s[2]-'a']==3))
        return 0*printf("YES\n");
    return 0*printf("NO\n");
}

