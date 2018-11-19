#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[2],b[110][2];
int main()
{
    scanf("%s",a);
    int n,flag1 = 0,flag2= 0;
    scanf("%d",&n);
    for(int i = 0 ;i < n ;i++)
    {
        scanf("%s",b[i]);
        if(strcmp(a,b[i]) == 0)
        {
            printf("YES\n");
            return 0;
        }
        if(a[0] == b[i][1])flag1 = 1;
        if(a[1] == b[i][0])flag2 = 1;
    }
    if(flag1&&flag2)printf("YES\n");
    else printf("NO\n");
    return 0;
}
