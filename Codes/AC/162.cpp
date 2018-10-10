#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

int a[(int)1e5+7], b[(int)1e5+7];
int wi[(int)1e6+7];

int main()
{
#ifdef LOCAL_PROJECT
    freopen("D:/code/CppProjects/stdin", "r", stdin);
#endif

    int n;
    scanf("%d",&n);
    int s =0;
    for(int i=0; i<n; ++i){
      scanf("%d", a+i);
      s += a[i];
    }

    int s2 = a[0];
    int k = 0;
    for(int worm = 1; worm <= s; worm++){
      while( s2 < worm ){
        s2 += a[++k];
      }
      wi[worm] = k+1;
    }

    int m;
    scanf("%d",&m);
    for(int i=0; i<m; ++i){
      scanf("%d", b+i);
      printf("%d ", wi[b[i]]);
    }
    return 0;
}
