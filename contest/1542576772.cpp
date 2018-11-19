#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>
#include <set>
#include <map>
#include <string>

using namespace std;

int n, k;
int a[5][111111];
set<int> st;

int main()
{
    scanf("%d%d",&n,&k);
    st.clear();
    int ok = 0;
    int b[20] = {0};
    for(int i = 1; i <= n; ++i){
        int cnt = 0;
        int fuck = 0;
        for(int j = 1; j <= k; ++j){
           scanf("%d",&a[j][i]);
           if(a[j][i]) cnt++;
           fuck += a[j][i] << (j-1);
        }
        b[fuck]++;
        if(cnt == 0) ok = 1;
    }
    for(int i = 1; i < (1<<k); ++i)
       for(int j = 1; j < (1<<k); ++j)
          if((i & j) == 0  && b[i] && b[j]) ok = 1;
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
