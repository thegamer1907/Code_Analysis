#include <cstring>
#include <map>
#include <unordered_map>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int, int> pii;

int gi() {
    int a;
    scanf("%d", &a);
    return a;
}

ll gli() {
    ll a;
#ifndef ONLINE_JUDGE
    scanf("%lld", &a);
#else
    scanf("%I64d", &a);
#endif
    return a;
}

int a[100000];

int main() {
    int n = gi();
    int mn = 1000000001;
    for (int i = 0; i < n; i++) {
        a[i] = gi();
        mn = MIN(mn, a[i]);
    }

    mn -= mn%n;
    for (int i = 0; ; i++)
        if (a[i%n] - mn - i <= 0) {
            printf("%d\n", (i%n)+1);
            break;
        }

    return 0;
}
