#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[3];
    while(~scanf("%s",a))
    {
        int n;
        scanf("%d",&n);
        int flag1=0,flag2=0;
        while(n--)
        {
            char b[3];
            scanf("%s",b);
            if(a[0]==b[0]&&a[1]==b[1])
                flag1=1,flag2=1;
            if(b[0]==a[1])
                flag1=1;
            if(b[1]==a[0])
                flag2=1;
        }
        if(flag1&&flag2)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
