#include <bits/stdc++.h>
#define LL long long
using namespace std;
typedef pair<int, int> pii;

int n;
LL k;

int main()
{
    scanf("%d%lld", &n, &k);
    k--;
    LL mid = (1LL << (n - 1)) - 1;
    while (true) {
        if (k == mid)
            return !printf("%d\n", n);
        if (k > mid)
            k -= (mid + 1);
        n--;
        mid = (1LL << (n - 1)) - 1;
    }
}

