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

bool has[19];

int main ()
{
    int n,k;
    while(scanf("%d %d", &n, &k) != EOF) {
        memset(has, 0, sizeof(has));
        for(int i=0; i<n; i++) {
            int val = 0;
            for(int t=0; t<k; t++) {
                int temp;
                scanf("%d", &temp);
                val = val*2+temp;
            }
            has[val] = true;
        }
        int l = (1<<k);
        bool ans = false;
        for(int i=0; i<l; i++)
            for(int j=0; j<l; j++) {
                if(i&j) continue;
                ans |= (has[i]&has[j]);
            }
        if(ans) puts("YES");
        else puts("NO");
    }
    return 0;
}


