#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

#define LL long long
const int maxn = 100000 + 100;
int n, cnt;
int ans[maxn];

bool judge(int x) {
    int tmp = 0;
    while(x != 0) {
        tmp += x % 10;
        x /= 10;
    }
    return tmp == 10;
}

int main() {
    #ifdef Dmaxiya
    freopen("test.txt", "r", stdin);
    #endif // Dmaxiya
    ios::sync_with_stdio(false);

    cnt = 1;
    for(int i = 1; i <= 20000000; ++i) {
        if(judge(i)) {
            ans[cnt++] = i;
        }
    }
    while(scanf("%d", &n) != EOF) {
        printf("%d\n", ans[n]);
    }

    return 0;
}
