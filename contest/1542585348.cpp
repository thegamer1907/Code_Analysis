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

const int maxn = 109;
char s[3];
char dict[maxn][3];
int main ()
{
    while(scanf("%s", s) != EOF) {
        int n;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
            scanf("%s", dict[i]);
        int cnt = 0;
        for(int i=0; i<n; i++)
            cnt += (dict[i][1] == s[0]);
        bool ans = false;
        if(cnt) {
            for(int i=0; i<n; i++)
                ans |= (dict[i][0] == s[1]);
        }
        for(int i=0; i<n; i++)
            ans |= (dict[i][0] == s[0] && dict[i][1] == s[1]);
        if(ans) puts("YES");
        else puts("NO");
    }
    return 0;
}


