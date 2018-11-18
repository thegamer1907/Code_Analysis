#include <stdio.h>
int main()
{
    char org[5],tmp[5];
    bool f1=0,f2=0;
    int n;
    scanf("%s%d",org,&n);
    while(n--)
    {
        scanf("%s",tmp);
        if(tmp[0]==org[0]&&tmp[1]==org[1])
            f1=f2=1;
        if(tmp[0]==org[1])
            f1=1;
        if(tmp[1]==org[0])
            f2=1;
    }
    puts(f1&&f2?"YES":"NO");
    return 0;
}
