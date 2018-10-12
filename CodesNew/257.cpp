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

    size_t end = 0;
    unsigned sum = 0;

    size_t best_length = 0;

    for (size_t start = 0; start != n; sum -= a[start], ++start)
    {
        if (end < start)
        {
            end = start;
            sum = 0;
        }

        while (end != n && (a[end] + sum) <= t)
        {
            sum += a[end];
            ++end;
        }

        //std::cout << ":: " << start << "-" << end << " " << sum << std::endl;
        best_length = std::max(best_length, end - start);
    }
    
    std::cout << best_length;
}


