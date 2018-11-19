#ifdef ONLINE_JUDGE
#define NDEBUG
#endif

#include <algorithm>
#include <cstring>
#include <iostream>
#include <ios>
#include <functional>
#include <map>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
#include <stdio.h>
#include <string>
#include <array>
uint32_t readu32() { int c; while((c = getchar()) < '0'); uint32_t n = c & 15U; while((c = getchar()) >= '0') n = n * 10 + (c & 15U); return n; } uint64_t readu64() { int c; while((c = getchar()) < '0'); uint64_t n = c & 15U; while((c = getchar()) >= '0') n = n * 10 + (c & 15U); return n; } int32_t read32() { int c; while((c = getchar()) < '-'); bool neg = c == '-'; if(neg) c = getchar(); uint32_t n = c & 15U; while((c = getchar()) >= '0') n = n * 10 + (c & 15U); return neg ? -(int32_t)n : n; } int64_t read64() { int c; while((c = getchar()) < '-'); bool neg = c == '-'; if(neg) c = getchar(); uint64_t n = c & 15; while((c = getchar()) >= '0') n = n * 10 + (c & 15U); return neg ? -(int64_t)n : n; } std::string read_word() { int c; while ((c = getchar()) <= ' '); std::string s; do { s += (char) c; } while ((c = getchar()) > ' '); return s; } template<typename F, F f> struct no_arg_call { template<typename T> struct stupid_compiler { typedef T type; }; operator typename stupid_compiler<decltype(f())>::type() { return f(); } }; no_arg_call<decltype(&readu32), readu32> IU; no_arg_call<decltype(&read32), read32> II; no_arg_call<decltype(&readu64), readu64> IUL; no_arg_call<decltype(&read64), read64> IL; no_arg_call<decltype(&read_word), read_word> IW;
using namespace std;

#define L 18

struct str {
    vector<bool> pre, suf;
    array<set<int>, L + 1> sub;
};

template<typename T>
void aw(const T& w, str& s) {
    int wl = w.size();
    for (int l = 1; l <= min(L, wl); l++) {
        for (int i = 0; i + l <= wl; i++) {
            int x = 0;
            for (int j = 0; j < l; j++)
                x |= (w[i + j] & 1) << j;
            s.sub[l].insert(x);
        }
    }
}

str cat(const str& a, const str& b) {
    int as = a.pre.size(), bs = b.pre.size();
    str o;
    o.pre = a.pre;
    for(bool v: b.pre) {
        if (o.pre.size() >= L) break;
        o.pre.push_back(v);
    }
    int os = min<int>(L, as + bs);
    int ac = os - bs;
    for (int i = ac; i > 0; i--)
        o.suf.push_back(a.suf[as - i]);
    for (bool v : b.suf)
        o.suf.push_back(v);
    o.sub = a.sub;
    for (int i = 1; i <= L; i++)
        o.sub[i].insert(b.sub[i].begin(), b.sub[i].end());
    auto mid = a.suf;
    mid.insert(end(mid), begin(b.pre), end(b.pre));
    aw(mid, o);

    return o;
}

int main(int argc, char** argv)
{
    if (argc == 2) freopen(argv[1], "r", stdin);
    ios_base::sync_with_stdio(0);

    int n = IU;
    vector<str> ss(n);
    for(auto& s: ss) {
        string w = IW;
        int wl = w.size();
        for (int i = 0; i < min(L, wl); i++)
            s.pre.push_back(w[i] & 1);
        for (int j = min(L, wl); j > 0; j--)
            s.suf.push_back(w[wl - j] & 1);
        for (int l = 1; l <= min(L, wl); l++) {
            for (int i = 0; i + l <= wl; i++) {
                int x = 0;
                for (int j = 0; j < l; j++)
                    x |= (w[i + j] & 1) << j;
                s.sub[l].insert(x);
            }
        }
    }

    int m = IU;
    while(m--) {
        int a = IU - 1, b = IU - 1;
        ss.push_back(cat(ss[a], ss[b]));
        int k = 0;
        while (ss.back().sub[k + 1].size() >> k + 1)
            k++;
        cout << k << '\n';
    }


    return 0;
}
