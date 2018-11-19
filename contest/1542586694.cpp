
#include <iostream>
#include <iomanip>
#include <fstream>

#include <string>
#include <sstream>

#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>

#include <algorithm>
#include <limits>

#include <cctype>
#include <cassert>


#include <utility>
#include <numeric>
#include <tuple>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <functional>
#include <map>

template<typename T>
using Vector2D = std::vector<std::vector<T>>;

template<typename T>
using Vector3D = std::vector<Vector2D<T>>;

using PairInt = std::pair<int, int>;
using PairInt64 = std::pair<int64_t, int64_t>;

using MapInt = std::map<int, int>;
using MMapInt = std::multimap<int, int>;
using MMapInt64 = std::multimap<int64_t, int64_t>;
using UMapIntString = std::unordered_map<int, std::string>;
using SetInt = std::set<int>;
using SetInt64 = std::set<int64_t>;
using SetPairInt64 = std::set<PairInt64>;

using VectorInt = std::vector<int>;
using VectorInt2D = Vector2D<int>;
using VectorInt64 = std::vector<int64_t>;
using VectorUInt64 = std::vector<uint64_t>;
using VectorInt642D = Vector2D<int64_t>;

using VectorChar = std::vector<char>;
using VectorChar2D = Vector2D<char>;
using VectorString = std::vector<std::string>;

using QueuePairInt = std::queue<PairInt>;
using QueueInt = std::queue<int>;

using VectorPairInt = std::vector<PairInt>;
using VectorPairInt64 = std::vector<PairInt64>;
using VectorPairInt2D = Vector2D<PairInt>;
using SetInt = std::set<int>;
using MSetInt = std::multiset<int>;
using UMapChar = std::map<char, int>;

using ListInt = std::list<int>;
using VectorListInt = std::vector<ListInt>;
using VectorDouble = std::vector<double>;

#define FOR(i, f, t) for (int i = f; i < t; ++i)
#define FOR0(i, t) FOR(i, 0, t)

int main()
{
    std::ios::sync_with_stdio(false);

#ifdef IN_TXT_ABSPATH
    std::ifstream in(IN_TXT_ABSPATH);
    std::cin.rdbuf(in.rdbuf());
#endif

    int h;
    int m;
    int s;
    int t1;
    int t2;
    std::cin >> h >> m >> s >> t1 >> t2;

    h = (h * 50) % 600;
    m = (m * 10) % 600;
    s = (s * 10) % 600;
    t1 = (t1 * 50) % 600;
    t2 = (t2 * 50) % 600;

    if (m > 0 || s > 0) {
        ++h;
    }
    if (s > 0) {
        ++m;
    }

    VectorInt2D sectors(1, VectorInt(600, 0));
    for (int i = 0; i < 600; ++i) {
        if (i == h || i == m || i == s) {
            sectors.emplace_back(VectorInt(600, 0));
        }
        else {
            sectors.back()[i] = 1;
        }
    }

    for (int i = 0; i < 600; ++i) {
        sectors.front()[i] = sectors.front()[i] | sectors.back()[i];
    }

    std::string ans = "NO";
    for (const auto& sector: sectors) {
        if (sector[t1] == 1 && sector[t2] == 1) {
            ans = "YES";
        }
    }

    std::cout << ans;

    return 0;
}

