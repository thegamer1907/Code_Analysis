/**
  * @file pa.cpp
  * @brief codeforces

  *

  * @author yao
  * @date 2018-10-03
  */
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <utility>
#include <algorithm>
#include <functional>
#include <map>
#define INF ((int)1e9)
#ifdef DBG
#   define dbg_pri(x...) fprintf(stderr,x)
#else
#   define dbg_pri(x...) 0
#endif //DBG

typedef unsigned int uint;
typedef long long int lli;
typedef unsigned long long int ulli;

int main()
{
    int n,m,k,sum,max=0;
    scanf("%d%d",&n,&m), sum=m;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&k);
        max = std::max(max,k);
        sum+=k;
    }
    printf("%d %d\n",std::max((sum-1)/n+1,max),max+m);
    return 0;
}
