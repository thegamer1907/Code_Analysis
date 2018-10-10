#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <set>
#include <climits>
#include <cstring>
#include <ctype.h>
#include <sstream>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>

using namespace std;

typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;

#define FOR(i,a,b) for (int i=a;i<b;i++)
inline void in(int &a) {scanf("%d",&a);}

int main(){
    LL n, m, k;
    scanf("%lld %lld %lld",&n,&m,&k);
    LL l, r, cur;
    l = 1, r = n*m+1LL;
    LL cnt;
    while (l<r){
        cnt = 0LL;
        cur = (l+r)>>1;
        int i;
        for (i=1;i<=n;i++){
            cnt += min(m,1LL*((cur-1)/i));
        }
        if (cnt<k){
            l = cur+1;
        } else r = cur;
    }
    printf("%lld\n",l-1);
    return 0;
}