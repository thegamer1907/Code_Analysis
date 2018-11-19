#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

const int maxn = 105;
const int INF = 0x3f3f3f3f;
typedef long long ll;

int main(void)
{
    char passwd[3];
    int n;
    scanf("%s", passwd);
    scanf("%d", &n);
    char s[n][3];
    for(int i = 0; i < n; i++)
        scanf("%s", s[i]);
    if(n == 1)
    {
        if(s[0][0] == passwd[0] && s[0][1] == passwd[1])
            printf("YES");
        else if(s[0][0] == passwd[1] && s[0][1] == passwd[0])
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        int f1 = 0, f2 = 0, f = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i][0] == passwd[0] && s[i][1] == passwd[1])
            {
                f = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i][0] == passwd[1])
            {
                f1 = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(s[i][1] == passwd[0])
            {
                f2 = 1;
                break;
            }
        }
        if(f || (f1 && f2))
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
