#include <iostream>
int main()
{
    int n, t;
    std::cin >> n >> t;
    char queue[n];
    std::cin >> queue;
    for(int j = 0; j < t; ++j)
    {
        for(int i = 0; i < n - 1; ++i)
        {
            if(queue[i] == 'B' && queue[i+1] == 'G')
            {
                std::swap(queue[i], queue[i+1]);
                i++;
            }
        }
    }
    std::cout << queue << std::endl;
}