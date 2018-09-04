#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector> 
#include <algorithm>

int main ()
{
    std::vector <size_t> sum_a;
    size_t n, m, a;
    
    scanf("%lu", &n);
    sum_a.resize(n + 1);
    sum_a[0] = 0;

    for (size_t i = 0; i != n; ++i)
    {
        scanf("%lu", &a);
        sum_a[i + 1] = sum_a[i] + a;
    }
    
    scanf("%lu", &m);
    for (size_t i = 0; i != m; ++i)
    {
        scanf("%lu", &a);
        size_t index = std::lower_bound(sum_a.begin(), sum_a.end(), a) - sum_a.begin();
        printf("%lu\n", index);
    }
}
