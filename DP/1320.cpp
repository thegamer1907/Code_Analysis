#include <bits/stdc++.h>
#define eps 1e-8
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define lson l,mid,rt<<1
#define rson mid+1,r,(rt<<1)+1
#define CLR(x,y) memset((x),y,sizeof(x))
#define fuck(x) cerr << #x << "=" << x << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int seed = 131;
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
int n;
int a[maxn];
int sum0[maxn];
int sum1[maxn];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum1[i] = sum1[i - 1] + (a[i] == 1);
        sum0[i] = sum0[i - 1] + (a[i] == 0);
    }
    int MAX = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int ans = sum0[j] - sum0[i - 1];
            ans += sum1[n] + sum1[i - 1] - sum1[j] - sum1[0];
            MAX = max(MAX, ans);
        }
    }
    printf("%d\n", MAX);
    return 0;
}
