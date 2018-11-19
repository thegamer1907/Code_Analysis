#include <iostream>
#include <string>
#include <vector>

inline bool check(const std :: string &result, const std :: string &etalon)
{
    if (result.find(etalon) != std :: string :: npos)
    {
        return true;
    }
    return false;
}
int main()
{
    using std :: cin;
    using std :: cout;
    using std :: string;

    string etalon;
    int quantity;
    cin >> etalon >> quantity;

    std :: vector<string> names;
    while(quantity)
    {
        string current;
        cin >> current;
        names.push_back(current);
        for(auto &each : names)
        {
            if (check(current + each,etalon) || check(each + current,etalon))
            {
                std::cout<<"YES";
                return 0;
            }
        }
        quantity--;
    }
    std::cout<<"NO";
}
