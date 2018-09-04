#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define N 100007
typedef long long ll;

int n; ll S;
int A[N] = {0};
ll tmp[N] = {0};

int check(int k)
{
    for (int i = 1; i <= n; i++)
        tmp[i] = (ll)A[i] + (ll)i * (ll)k;
    sort(tmp + 1, tmp + n + 1);
    ll sum = 0;
    for (int i = 1; i <= k; i++)
        sum += tmp[i];
    if (sum > S) return -1;
    return sum;
}

int main()
{
    scanf("%d%lld", &n, &S);
    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);

    int T = 0;
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2 + 1;
        int res = check(mid);
        if (res == -1)
            r = mid - 1;
        else { l = mid; T = res; }
    }
    printf("%d %d\n", l, T);
    return 0;
}