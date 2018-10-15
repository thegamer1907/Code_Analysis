#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100001;

int a[maxn];

int main() {
    int n;
    scanf("%d", &n);
    int maxa = 0;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        maxa = max(maxa, a[i]);
        sum += a[i];
    }
    printf("%d", max(maxa, int((sum - 1) / (n - 1) + 1)));
    return 0;
}