#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define LL long long
using  namespace std;
int main()
{
    int a,b,c,t1,t2;
    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    if(a==12) a=0;
    t1*=5;
    t2*=5;
    a*=5;
    if(t1>t2) swap(t1,t2);
    if(((t1<=a&&t2>a)||(t1<=b&&t2>b)||(t1<c&&t2>c))&&(a>=t2||b>=t2||c>t2||a<t1||b<t1||c<t1))
    {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    return 0;
}