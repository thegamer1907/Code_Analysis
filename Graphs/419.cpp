#include <iostream>
#include <string>
int main()
{
    int n,t;
    std::cin >> n >> t;
    std::string a;
    std::cin >> a;
    int cn = 0;
    while (cn < t)
    {
        cn++;
        for (size_t i=0; i< a.size(); ++i)
            if (a[i] == 'B' && a[i+1] == 'G')
            {
                std::swap(a[i],a[i+1]);
                ++i;
            }

    }


    std::cout << a;





    return 0;
}
