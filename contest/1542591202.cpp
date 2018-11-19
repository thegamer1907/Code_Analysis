#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    char x,y,a,b;bool q,w;
    int n;
    scanf("%c%c",&x,&y);
    scanf("%d",&n);
    q=w=false;
    while(n--)
    {
        scanf(" %c%c",&a,&b);
        if(a==y)
            q=true;
        if(b==x)
            w=true;
        if(a==x&&b==y)
        {
            q=w=true;
        }
    }
    if(q&&w)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
