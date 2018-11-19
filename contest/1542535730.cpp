#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <stack>
#define INF 0x3f3f3f3f
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
int t[3];
int t1, t2;
int main()
{
    while(~scanf("%d%d%d%d%d", &t[0], &t[1], &t[2], &t1, &t2))
    {
        t[1]/=5;
        t[2]/=5;
        if(t1>t2)
        {
            int kk=t1;
            t1=t2;
            t2=kk;
        }
        bool flag1=false;
        bool flag2=false;
        for(int i=0; i<3; i++)
            if((t[i]>=t1)&&(t[i]<t2))
                flag1=true;
        for(int i=0; i<3; i++)
            if((t[i]<t1)||(t[i]>=t2))
                flag2=true;
        if(flag1&&flag2)
            printf("NO\n");
        else
            printf("Yes\n");
    }
    return 0;
}