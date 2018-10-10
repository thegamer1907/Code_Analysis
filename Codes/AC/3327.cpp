#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;
typedef long long lint;

int n, i, x, minim, imin, CurrentTime;

int time(int x, int i)
{
    if(i == 1 && x == 0) return 0;
    if(i > 1 && x < i) return i-1;
    lint p = 1LL << 41;
    lint r = 0;
    while(p)
    {
        if((r + p)*n+i-1 < x)
            r+=p;
        p >>= 1;
    }
    return (r+1)*n+i-1;
}

int main()
{
    minim = INT_MAX;
    scanf("%d", &n);
    for(i = 1; i <= n; i ++)
    {
        scanf("%d", &x);
        CurrentTime = time(x, i);
        if(CurrentTime < minim)
        {
            minim = CurrentTime;
            imin = i;
        }
    }
    printf("%d", imin);
    return 0;
}
