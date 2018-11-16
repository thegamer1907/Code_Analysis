#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 10;

int N;
char a[MAXN], b[MAXN];

int main() {
    scanf("%d%s%s", &N, a, b);
    int ans = 0;
    for(int i = 1; i < N; i++) {
        if(a[i] != a[i-1] && a[i-1] != b[i-1] && a[i] != b[i]) {
            swap(a[i-1], a[i]);
            ans++;
        }
    }
    for(int i = 0; i < N; i++) {
        ans += a[i] != b[i];
    }
    printf("%d\n", ans);
}