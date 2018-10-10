#include <iostream>
#include <vector>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <string>
#include <queue>

#define int long long
#define double long double
#define For(i,z) for(int i=0;i<z;i++)
#define sqr(a) ((a)*(a))

using namespace std;
const int N = 502;

int input() {
    char c = getchar();
    int ans = 0;
    bool neg = false;

    while ((c < '0' || c > '9') && c != '-')
        c = getchar();
    if (c == '-')
        neg = true,
        c = getchar();
    while (c >= '0' && c <= '9')
        ans = ans * 10 + (c - '0'),
        c = getchar();

    if (neg)
        return (-ans);
    else
        return ans;
}

bool sum10(int a) {
    int ans = 0;
    while (a)
        ans += a % 10,
        a /= 10;
    return (ans == 10);
}

int32_t main()
{
    ///freopen("input.txt", "r", stdin);
    ///freopen("output.txt", "w", stdout);

    int k = input();

    int i = 0;
    int cur = 0;
    while (true) {
        if (sum10(cur))
            i++;

        if (i == k)
            break;

        cur++;
    }

    cout << cur;
}
