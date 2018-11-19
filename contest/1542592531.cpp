#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int f[30],s[30];

int main(void)
{
    int n,i,j;
    char a[10];
    while(scanf("%s",a)==1)
    {
        char c1 = a[0],c2 = a[1];
        scanf("%d",&n);
        memset(f,0,sizeof(f));
        memset(s,0,sizeof(s));
        int flag = 0;
        for(i=1;i<=n;i++)
        {
            scanf("%s",a);
            if(a[0] == c1 && a[1] == c2)
            {
                flag = 1;
            }
            f[a[0]-'a']++;
            s[a[1]-'a']++;
        }
        if(flag == 1)
            printf("YES\n");
        else if(s[c1-'a'] > 0 && f[c2-'a'] > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
