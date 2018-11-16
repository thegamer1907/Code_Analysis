#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <set>
using namespace std;

int a[(int)1e5+7];
int ans[(int)1e5+7];

int main()
{
#ifdef LOCAL_PROJECT
    freopen("D:/code/CppProjects/stdin", "r", stdin);
#endif
    int n, m;
    scanf("%d%d",&n,&m);

    for(int i=0; i<n; ++i)
      scanf("%d",a+i);

    set<int> S;
    for(int i=n-1; i>=0; --i){
      S.insert(a[i]);
      ans[i] = S.size();
    }

    for(int i=0; i<m; ++i){
      int li;
      scanf("%d", &li);
      printf("%d\n", ans[li-1]);
    }

    return 0;
}
