#include <bits/stdc++.h>
using namespace std;

using unum = uint64_t;
using num = int64_t;

// print tuples {{{
template <typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& t) {
    return os << '[' << t.first << ',' << t.second << ']';
}
// }}}
// print containers {{{
constexpr uint64_t print_limit = 32;
template <typename It>
void print(ostream& os, It begin, It end, uint64_t len) {
    uint64_t count = 0;
    os << "{";
    while (begin != end && count < print_limit) {
        os << "(" << *begin << ")";
        count++;
        begin++;
    }
    if (begin != end)
        os << "... " << len << " total";
    os << "}";
}
#define MAKE_PRINTER_1(container) \
template <typename T> \
ostream& operator<<(ostream& os, const container<T>& t) { \
    print(os, t.begin(), t.end(), t.size()); \
    return os; \
}
#define MAKE_PRINTER_2(container) \
template <typename T1, typename T2> \
ostream& operator<<(ostream& os, const container<T1, T2>& t) { \
    print(os, t.begin(), t.end(), t.size()); \
    return os; \
}
MAKE_PRINTER_1(vector)
MAKE_PRINTER_2(map)
MAKE_PRINTER_1(set)
MAKE_PRINTER_2(unordered_map)
MAKE_PRINTER_1(unordered_set)
#undef MAKE_PRINTER_1
#undef MAKE_PRINTER_2
// }}}
// read/write {{{
template <typename T>
T read() {
    T e;
    cin >> e;
    return e;
}

template <typename T>
vector<T> readv(unum n) {
    vector<T> v;
    for (unum i = 0; i < n; i++)
        v.push_back(read<T>());
    return v;
}

template <typename T>
void print(const T& t) {
    cout << t << " ";
}

void println() {
    cout << '\n';
}

template <typename T>
void println(const T& t) {
    print(t);
    println();
}

template <typename T>
struct identity {
    const T& operator()(const T& t) const { return t; }
};

template <typename T, typename F = identity<typename T::value_type>>
void printv(const T& t, F f = F()) {
    for (const auto& e : t)
        print(f(e));
    println();
}
/// }}}

bool ans() {
    auto pattern = read<string>();
    auto elems = readv<string>(read<unum>());
    bool first = false, last = false;
    for (auto elem : elems) {
        if (elem == pattern)
            return true;
        if (elem[0] == pattern[1])
            first = true;
        if (elem[1] == pattern[0])
            last = true;
    }
    return first && last;
}

void go() {
    println(ans() ? "YES" : "NO");
}


int main () { // {{{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    go();
} // }}}
