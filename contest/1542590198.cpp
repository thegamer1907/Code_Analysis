#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <unordered_set>

using namespace std;

namespace
{
    using stringcol = vector<string>;
    bool solve(const string &target, const stringcol &cands)
    {
        assert(target.size() == 2);
        using charset = unordered_set<char>;
        charset begins;
        charset ends;
        for(const auto &c : cands)
        {
            if(c == target)
                return true;
            assert(c.size() == 2);
            begins.insert(c[0]);
            ends.insert(c[1]);
            if(ends.find(target[0]) != end(ends) &&
                begins.find(target[1]) != end(begins))
            {
                return true;
            }
        }
        return false;
    }
}

int main()
{
    string tgt;
    getline(cin, tgt);
    int n = 0;
    cin>>n;
    cin.ignore();
    stringcol ss;
    while(n-- > 0)
    {
        string v;
        getline(cin, v);
        ss.push_back(move(v));
    }
    cout<<(solve(tgt, ss)?"YES":"NO")<<endl;
    return 0;
}
