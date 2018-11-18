#include <iostream>
#include <cstdio>
using namespace std;
bool a[20];
int main()
{
    int h,m,s,t1,t2,i;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    a[h%12]=true;
    a[m/5]=true;
    a[s/5]=true;
    t1%=12;
    t2%=12;
    for (i=t1;i!=t2;i=(i+1)%12) if (a[i]) break;
    if (i==t2)
    {
        printf("YES\n");
        return 0;
    }
    for (i=t2;i!=t1;i=(i+1)%12) if (a[i]) break;
    if (i==t1)
    {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
