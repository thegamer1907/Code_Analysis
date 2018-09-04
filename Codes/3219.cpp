
#include<bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/STACK:102400000,102400000")
#define rep(i,a,b) for (int i=a; i<=b; ++i)
#define per(i,b,a) for (int i=b; i>=a; --i)
#define mes(a,b)  memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define MP make_pair
#define PB push_back
#define fi  first
#define se  second
typedef long long ll;
const int N = 200005;

int n, a[N], cnt[N];
int main()
{
    scanf("%d", &n);
    int ans1=INF, ans2=0;
    rep(i,1,n) {
        scanf("%d", &a[i]);
        a[i] -= i-1;
        if(a[i]<=0)  cnt[i] = i-1;
        else  cnt[i] = i-1 + (a[i]+n-1)/n*n;
        if(ans1>cnt[i]) ans1=cnt[i], ans2=i;
    }
    printf("%d\n", ans2);

    return 0;
}
