#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    char ss[1234];
    while(cin>>ss)
    {
        int a = 1;
        bool vis = false;
        for(int i=1; i<strlen(ss); i++)
        {
            if (ss[i] == ss[i-1])
                a++;
            else
                a = 1;
            if (a == 7)
                vis = true;
        }
        if (vis)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
