#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <string>
using namespace std;

bool block[60*2+9];

int main ()
{
    int h,m,s,t1,t2;
    while(scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2)!=EOF) {
        h %= 12;
        t1 %= 12;
        t2 %= 12;
        memset(block, 0, sizeof(block));
        block[h*5] = block[h*5+60] = true;
        block[m] = block[m+60] = true;
        block[s] = block[s+60] = true;
        bool ans = false;
        bool flag = true;
        for(int i=min(t1,t2)*5; i< max(t1,t2)*5; i++)
            flag &= !block[i];
        ans |= flag;
        flag = true;
        for(int i=max(t1,t2)*5; i< min(t1+12,t2+12)*5; i++)
            flag &= !block[i];
        ans |= flag;
        if(ans) puts("YES");
        else puts("NO");
    }
    return 0;
}


