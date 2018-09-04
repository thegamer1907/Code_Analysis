#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <complex>
using namespace std;

#ifdef DEBUG
    #define debug(args...)  {dbg,args; cerr<<endl;}
#else
    #define debug(args...)  // do nothing
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr << v << " ";
        return *this;
    }
} dbg;

long long n, S;

long long get_sum(vector<long long> costs, int k)
{
    for (int i = 0; i < n; ++i) {
        if ((i+1) > (double)(S-costs[i])/k) {
            costs[i] = S+1;
        } else {
            costs[i] += (i+1)*k;
        }
    }
    sort(costs.begin(), costs.end());
    long long sum = 0;
    for (int i = 0; i < k; ++i)
        sum += costs[i];
    return sum;
}

int main()
{
    cin >> n >> S;
    vector<long long> a(n), costs(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int lo = 0, hi = n, mid;
    while (lo < hi) {
        mid = lo + (hi-lo+1)/2;
        if (get_sum(a, mid) <= S)
            lo = mid;
        else
            hi = mid-1;
    }
    cout << lo << ' ' << get_sum(a, lo) << '\n';
}
// Time: O(nlogn), Space: O(n)
