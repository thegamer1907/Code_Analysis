#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t m, l, r, same, count;
    string s;

    count = 0;
    same = 0;
    vector<size_t>result;
    vector<size_t>result1;
    cin >> s;
    cin >> m;

    result.push_back(0);

    for(size_t i = 1; i < s.size(); ++i)
    {
        if(s[i - 1] == s[i])
        {
            ++same;
            result.push_back(same);
        }
        else
            result.push_back(result[i-1]);

    }

    for(size_t i = 0; i < m; ++i)
    {
        cin >> l >> r;
        l= l-1;
        r= r-1;
        size_t perem = result[r] - result[l];
        result1.push_back(perem);
    }

    for (size_t i = 0; i < result1.size(); ++i)
    {
       cout << result1[i] << endl;
    }
}
