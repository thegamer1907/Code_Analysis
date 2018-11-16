/* DHUOJ solution #368707 @ 2018-11-11 19:52:18.186 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100001];
    char *p;
    scanf("%s",s);
    if((p=strstr(s,"AB"))!=NULL && strstr(p+2,"BA")!=NULL)
    {
        printf("YES\n");
        exit(0);
    }
    if((p=strstr(s,"BA"))!=NULL && strstr(p+2,"AB")!=NULL)
    {
        printf("YES\n");
        exit(0);
    }
    printf("NO\n");

    return 0;
}