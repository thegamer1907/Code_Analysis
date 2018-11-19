#include <iostream>

using namespace std;

namespace
{
    using uint = unsigned int;

    bool dir(uint t1, uint t2, uint v, uint mod)
    {
        const auto v1 = (t1 + mod - v)%mod;
        const auto v2 = (t2 + mod - v)%mod;
        return v1 < v2;
    }

    bool solve(uint h, uint m, uint s, uint t1, uint t2)
    {
        const auto d1 = dir(t1-1, t2-1, h, 12);
        const auto d2 = dir(t1*60/12-1, t2*60/12-1, m, 60);
        const auto d3 = dir(t1*60/12-1, t2*60/12-1, s, 60);
        return d1 == d2 && d2 == d3;
    }
}
int main()
{
    uint h =0;
    uint m = 0;
    uint s = 0;
    uint t1 = 0;
    uint t2 = 0;
    cin>>h>>m>>s>>t1>>t2;
    cout<<(solve(h, m, s, t1, t2)?"YES":"NO")<<endl;
    return 0;
}
