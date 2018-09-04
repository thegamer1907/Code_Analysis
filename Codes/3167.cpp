#pragma warning(disable:4786)
#pragma comment(linker, "/STACK:102400000,102400000")
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<cmath>
#include<string>
#define LL long long
#define FOR(i,f_start,f_end) for(int i=f_start;i<=f_end;++i)
#define mem(a,x) memset(a,x,sizeof(a))
#define lson l,m,x<<1
#define rson m+1,r,x<<1|1
using namespace std;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const double PI = acos(-1.0);
const double eps=1e-8;
const int maxn = 1e5 + 5;
LL a[maxn] , b[maxn];
LL n;
bool ok(int x , int & pos)
{
    for(int i = 1 ;i <= n ; i++){
        b[i] = a[i] - i + 1 - n * (LL)x;
        if(b[i] <= 0){
            pos = i;
            return true;
        }
    }
    return false;
}
int bsearch(int left , int right , int & pos)
{
    int mid , ret = -1;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(ok(mid , pos)){
            right = mid - 1;
            ret = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return ret;
}
int main()
{
    scanf("%lld" , &n);
    for(int i = 1 ; i <= n; i++){
        scanf("%lld" , &a[i]);
    }
    int pos;
    int ans = bsearch(0 , 1e9 , pos);
    //printf("ans = %d\n" , ans);
    printf("%d\n" , pos);
    return 0;
}
