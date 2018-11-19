#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
#define LL long long
#define fi first
#define se second
#define mem(a,b) memset((a),(b),sizeof(a))
#define sqr(x) ((x)*(x))

int h, m, s, t1, t2;

bool go(int t1, int t2)
{
    while(t1!=t2)
    {
        if(t1==h || t1==m || t1==s)
            return false;
        ++t1;
        t1%=60;
    }
    return true;
}

int main()
{
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h=h*5%60;
    t1=t1*5%60;
    t2=t2*5%60;
    if(go(t1, t2) || go(t2, t1))
        puts("YES");
    else puts("NO");
    
    return 0;
}