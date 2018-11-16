#include <stdio.h>
int main()
{
    char ar[100];
    scanf("%s", &ar);

    int i, cnt=1, f=0;

    for(i=1;ar[i];i++)
    {
        if(ar[i]==ar[i-1])
            cnt++;
        else
            cnt=1;
        if(cnt>=7)
        {
            f=1;
            break;
        }

    }

    if(f)
        printf("YES");
    else
        printf("NO");

    return 0;
}
