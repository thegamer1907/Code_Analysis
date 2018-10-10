#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define DBG(x) cout << #x << " = " << (x) << endl;
/*
Compile:
    -Wall -Wextra -pedantic -std=c++14 -O2 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector -ggdb 

    -std=c++14 -O2
 
Check for memory usage:
    valgrind --tool=massif
*/

long long count(long long number, long long n, long long m)
{
    if (number >= n * m)
        return n * m;

    long long r = number / m;
    long long c = number / n;

    long long ret = 0;

    ret += r * m;
    ret += c * (n - r);

    for (long long rr = r + 1; rr * (c + 1) <= number; ++rr)
    {
        ret += number / rr - c;
    }

    return ret;
}


int main()
{
    cin.tie(0);
    cin.sync_with_stdio(false);


    long long n, m, k;

    cin >> n >> m >> k;

    long long le = 0, rg = 1e13;

    while (rg - le > 1)
    {
        long long mid = (le + rg) / 2;

        if (count(mid, n, m) >= k)
            rg = mid;
        else
            le = mid;
    }

    cout << rg << endl;
    return 0;
}
