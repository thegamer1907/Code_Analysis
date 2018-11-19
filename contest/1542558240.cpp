#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cassert>
#include <unordered_set>
#include <map>
#include <ios>

using namespace std;

namespace
{
    using uint = unsigned int;
    using uintcol = vector<uint>;
    using board = vector<uintcol>;

    bool solve(const board &b)
    {
        assert(!b.empty());
        using uintset = unordered_set<uint>;
        uintset seen;
        for(const auto &p : b)
        {
            uint r = 0;
            for(auto v : p)
            {
                r*=2;
                r+=v;
            }
            if(r == 0)
                return true;
            for(auto v : seen)
            {
                if((v&r) == 0)
                    return true;
            }
            seen.insert(r);
        }
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    uint n = 0;
    uint k = 0;
    cin>>n>>k;
    board b;
    for(uint i = 0; i < n; ++i)
    {
        uintcol problem;
        for(uint j = 0; j < k; ++j)
        {
            uint v = 0;
            cin>>v;
            problem.push_back(v);
        }
        b.push_back(move(problem));
    }
    cout<<(solve(b)?"YES":"NO")<<endl;
    return 0;
}

