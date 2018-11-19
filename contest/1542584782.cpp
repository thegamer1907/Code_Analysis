#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
#define LL long long

int h, m, s, t1, t2;
int a[30];

int main()
{
    while(~scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2))
    {
        memset(a, 0, sizeof(a));
        int ss = (s) / 5;
        ss *= 2;
        if((s) % 5 == 0) a[ss]++;
        else
        {
            ss++;
            a[ss]++;
        }
        int mm = (m) / 5;
        mm *= 2;
        if((m) % 5 == 0)
        {
            if(s > 0)
            {
                mm++;
                a[mm]++;
            }
            else a[mm]++;
        }
        else
        {
            mm++;
            a[mm]++;
        }
        int hh = h % 12;
        hh *= 2;
        if(m > 0 || s > 0) hh++;
        a[hh]++;

//        for(int i = 0; i <= 23; ++i)
//            printf("%d ", a[i]);
//        cout << endl;

        int flag1 = 1;
        t1 = t1 % 12 * 2;
        t2 = t2 % 12 * 2;
        if(t1 > t2) swap(t1, t2);
        for(int i = t1; i <= t2; ++i)
        {
            if(a[i]) flag1 = 0;
        }
        int flag2 = 1;
        for(int i = t1; i >= 0; --i)
        {
            if(a[i]) flag2 = 0;
        }
        for(int i = t2; i <= 23; ++i)
        {
            if(a[i]) flag2 = 0;
        }
        if(flag1 || flag2) printf("YES\n");
        else printf("NO\n");
    }
}
