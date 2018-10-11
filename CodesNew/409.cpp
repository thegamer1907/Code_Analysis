#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
    size_t n;
    unsigned t;

    std::cin >> n >> t;

    std::vector<unsigned> a;
    for (size_t i = 0; i != n; ++i)
    {
        unsigned ai;
        std::cin >> ai;
        a.push_back(ai);
    }

    size_t start = n, end = n;
    size_t best = 0;
    while (start != 0)
    {
        unsigned vstart = a[start - 1];
        
        if (vstart <= t)
        {
            t -= vstart;
            --start;
            best = std::max(best, end - start);
        }
        else
        {
            if (start == end)
            {
                --start;
                --end;
            }
            else
            {
                unsigned vend = a[end - 1];
                t += vend;
                --end;
            }
        }
    }

    std::cout << best;
}
