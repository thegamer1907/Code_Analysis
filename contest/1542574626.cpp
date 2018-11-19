
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

std::size_t MAX_SIZE = 256;
std::size_t MAX_COMBOS = 16;

struct Combos {
    int cnt;
    std::string combos;
};

struct Str {
    std::string prefix;
    std::string suffix;
    std::vector<Combos> combos;

    Str(const Str& prefix, const Str& suffix)
    {
        this->prefix = prefix.prefix;
        if (this->prefix.size() < MAX_SIZE) {
            this->prefix += suffix.prefix;
        }
        this->suffix = suffix.suffix;
        if (this->suffix.size() < MAX_SIZE) {
            this->suffix = prefix.suffix + this->suffix;
        }

        for (std::size_t i = 0; i < MAX_COMBOS; ++i) {
            if (prefix.combos[i].cnt == 0 || suffix.combos[i].cnt == 0) {
                this->combos.emplace_back(Combos{ 0, {} });
            }
            else {
                this->combos.emplace_back(prefix.combos[i]);
                for (std::size_t j = 0; j < combos[i].combos.size(); ++j) {
                    if (combos[i].combos[j] == 0 && suffix.combos[i].combos[j] != 0) {
                        combos[i].combos[j] = 1;
                        --combos[i].cnt;
                    }
                }
                std::string concat = prefix.suffix + suffix.prefix;
                for (std::size_t j = 0; j + i <= concat.size(); ++j) {
                    int ii = std::stoi(concat.substr(j, i), nullptr, 2);
                    if (combos[i].combos[ii] == 0) {
                        combos[i].combos[ii] = 1;
                        --combos[i].cnt;
                    }
                }
            }
        }

    }


    Str(const std::string& str)
        : prefix(str)
        , suffix(str)
    {
        combos.push_back(Combos{ 0, std::string(1, 1) });

        for (std::size_t i = 1; i < MAX_COMBOS; ++i) {
            int sz = combos[i - 1].combos.size() * 2;
            combos.push_back(Combos{ sz, std::string(sz, 0) });
            for (std::size_t j = 0; j + i <= prefix.size(); ++j) {
                int ii = std::stoi(prefix.substr(j, i), nullptr, 2);
                if (combos[i].combos[ii] == 0) {
                    combos[i].combos[ii] = 1;
                    --combos[i].cnt;
                }
            }
        }
    }
};

int main()
{
    std::ios::sync_with_stdio(false);

#ifdef IN_TXT_ABSPATH
    std::ifstream in(IN_TXT_ABSPATH);
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    std::cin >> n;
    std::vector<Str> strs;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        strs.emplace_back(s);
    }

    int m;
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int a;
        int b;
        std::cin >> a >> b;
        strs.emplace_back(strs[a - 1], strs[b - 1]);
    }

    for (std::size_t i = n; i < strs.size(); ++i) {
        for (std::size_t j = 1; j < MAX_COMBOS; ++j) {
            if (strs[i].combos[j].cnt > 0) {
                std::cout << (j - 1) << "\n";
                break;
            }
        }
    }

    return 0;
}

