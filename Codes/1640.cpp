#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
 
using namespace std;
 
typedef long long ll;
 
const int N = 1e5 + 7;
 
int n, S;
int a[N];
ll b[N];
 
ll res(int k)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] + (i + 1) * (ll) k;
    }
    sort(b, b + n);
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += b[i];
    }
    return ans;
}
 
class Main
{
public:
    void solve(std::istream &in, std::ostream &out)
    {
        in >> n >> S;
        for (int i = 0; i < n; i++)
        {
            in >> a[i];
        }
        int l = 0, r = n + 1;
        while (l < r - 1)
        {
            int m = (l + r) / 2;
            if (res(m) <= S)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        out << l << ' ' << res(l) << '\n';
    }
};
 
 
int main()
{
    ios::sync_with_stdio(0);
    Main solver;
    std::istream &in(std::cin);
    std::ostream &out(std::cout);
    solver.solve(in, out);
    return 0;
}