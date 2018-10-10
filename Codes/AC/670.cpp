#include <bits/stdc++.h>
using namespace std;

//.define
//#define FILE_IN_OUT
#define RET(_x)                       return std::cout << (_x), 0;
#define all(_obj)                     (_obj).begin(), (_obj).end()
#define fori(_iterator, _begin, _end) for (int _iterator = (_begin); _iterator < (_end); ++_iterator)
#define forr(_iterator, _begin, _end) for (int _iterator = (_begin); _iterator >= (_end); --_iterator)
#define loop(_n)                      for (int i = 0; i < (_n); ++i)
#define ceilDiv(_dividend, _divider)  (((_dividend) - 1LL + (_divider)) / (_divider))
#define sz(_obj)                      static_cast<int>((_obj).size())
#define endl                          "\n"
template<typename Tp>
inline void outarr(Tp _array, const std::size_t _N, const char* _delim = " ") {
    Tp end = _array + _N;
    for (Tp current = _array; current != end; ++current) {
        std::cout << *current << _delim;
    }
    std::cout << '\n';
}

//.constant
using ll  = int64_t;
using pii = std::pair<int, int>;
constexpr int INF = INT_MAX;
constexpr int MOD = static_cast<const int>(1e9 + 7);

//.data
inline bool check(int x) {
    int sumDig = 0;
    while (x) {
        sumDig += x % 10;
        x /= 10;
    }
    return sumDig == 10;
}

//.code
int main() {
#ifdef FILE_IN_OUT
    std::ifstream cin  ("input.txt",  std::ios::in);
    std::ofstream cout ("output.txt", std::ios::out);
#else
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
#endif

    int k;
    cin >> k;
    
    int x = 19;
    for (; k; x += 9) {
        if (check(x)) {
            --k;
        }
    }
    
    cout << x - 9 << endl;

#ifdef FILE_IN_OUT
    cin.close();
    cout.close();
#endif
    return 0;
}