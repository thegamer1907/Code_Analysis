#include <algorithm>
#include <iostream>
#include <string>

long long count(long long n, long long m, long long x)
{
    long long j = std::min(m, x), k = std::min(n, x), num = 0;
    for (long long i = 1; i <= k; ++i)
    {
        while (i * j > x)
            --j;
        num += j;
    }
    return num;
}

int main(void)
{
    long long n, m, k;
    std::cin >> n >> m >> k;
    long long l = 1, r = n * m + 1;
    while (r - l > 1)
    {
        long long c = (l + r) / 2;
        if (count(n, m, c) < k)
            l = c;
        else
            r = c;
    }
    if (k < 2)
        --r;
    std::cout << r << std::endl;
    return 0;
}
