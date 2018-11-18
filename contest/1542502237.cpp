#include <cstdio>
#include <iostream>
using namespace std;
char code[4];
char a[6];
int n;
int main()
{
    scanf("%s",code);
    scanf("%d",&n);
    bool flag1=false;
    bool flag2=false;
    for(int i=0;i<n;++i)
    {
        scanf("%s",a);
        if(a[0]==code[0]&&a[1]==code[1])
        {
            flag1=true;
            flag2=true;
        }
        if(a[1]==code[0])
            flag1=true;
        if(a[0]==code[1])
            flag2=true;
    }
    if(flag1==true&&flag2==true)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}