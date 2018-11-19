#include <iostream>
#include <cstdio>
#include <vector>
#include <array>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <random>
#include <bitset>
#include <cassert>
#include <tuple>
#include <list>
#include <iterator>
#include <unordered_set>
#include <unordered_map>
#include <numeric>

using namespace std;

typedef long long ll;
typedef long double ld;

template<class htpe, class cmp>
using heap = priority_queue<htpe, vector<htpe>, cmp>;

template<class htpe>
using min_heap = heap<htpe, greater<htpe> >;

template<class htpe>
using max_heap = heap<htpe, less<htpe> >;

#define mp make_pair
#define pb push_back
#define mt make_tuple
#define ff first
#define ss second

#define forn(i, n) for (int i = 0; i < ((int)(n)); ++i)
#define forrn(i, s, n) for (int i = (int)(s); i < ((int)(n)); ++i)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define PYMOD(a, m) ((((a) % (m)) + (m)) % (m))

const int INF = 1791791791;
const ll INFLL = 1791791791791791791ll;

template<size_t buf_size>
class FastInput {
    char buf[buf_size];
    size_t clen = 0;
    size_t cpos = 0;
    FILE *infl;
    bool cl = false;
public:
    inline bool isEof() {
        if (cpos == clen) {
            cpos = 0;
            clen = fread(buf, 1ul, buf_size, infl);
            return clen == 0;
        } else
            return false;
    }

    inline int nextChar() {
        return isEof() ? -1 : buf[cpos++];
    }

    inline bool seekEof() {
        int res = nextChar();
        while (res == ' ' || res == '\n')
            res = nextChar();
        if (res == -1)
            return true;
        assert(cpos != 0);
        cpos--;
        return false;
    }
    
    inline char readChar() {
        int res = nextChar();
        while (res == ' ' || res == '\n')
            res = nextChar();
        assert(res != -1);
        return (char)res;
    }

    inline void copyWord(char *wbuf) {
        int w = readChar();
        while (w != ' ' && w != '\n' && w != -1) {
            *(wbuf++) = (char)w;
            w = nextChar();
        }
    }

    inline string readString() {
        int w = readChar();
        std::string res;
        while (w != ' ' && w != '\n' && w != -1) {
            res.pb((char)w);
            w = nextChar();
        }
        return res;
    }

    template<class rint_t = int>
    rint_t readInt() {
        int sgn = readChar();
        rint_t res = 0, b = 1;
        if (sgn == '-')
            b = -1;
        else if (sgn != '+')
            res = sgn - '0';
        int w = nextChar();
        while (w != ' ' && w != '\n' && w != -1) {
            res *= 10;
            res += w - '0';
            w = nextChar();
        }
        return b * res;
    }

    FastInput(const string& filename = "stdin") {
        cl = filename != "stdin";
        if (filename == "stdin")
            infl = stdin;
        else
            infl = fopen(filename.c_str(), "r");
    }

    ~FastInput() {
        if (cl)
            fclose(infl);
    }
};

template<size_t buf_size>
class FastOutput {
    char buf[buf_size];
    int cpos = 0;
    FILE *outfl;
    bool lf, cl;
public:
    inline void flush() {
        fwrite(buf, cpos, 1, outfl);
        cpos = 0;
    }
    
    inline void putChar(char c) {
        if (cpos == buf_size)
            flush();
        buf[cpos++] = c;
    }

    inline void putBuf(const char *to_w) {
        while (*to_w != 0)
            putChar(*(to_w++));
    }

    inline void writeString(const string &s, const char *after = " ") {
        putBuf(s.c_str());
        putBuf(after);
    }

    template<class rint_t>
    inline void writeInt(rint_t x, const char *after = " ") {
        char to_w[100];
        int cur = 0;
        if (x == 0)
            putBuf("0");
        else {
            if (x < 0) {
                putChar('-');
                x = -x;
            }
            while (x > 0) {
                to_w[cur++] = (x % 10) + '0';
                x /= 10;
            }
            reverse(to_w, to_w + cur);
            to_w[cur] = 0;
            putBuf(to_w);
        }
        putBuf(after);
    }

    inline void writeEndl() {
        putChar('\n');
#ifdef LOCAL
        if (lf)
            flush();
#endif
    }

    FastOutput(const string &filename = "stdout", bool lflush = true) {
        lf = lflush;
        cl = filename != "stdout";
        if (filename == "stdout")
            outfl = stdout;
        else
            outfl = fopen(filename.c_str(), "w");
        memset(buf, 0, sizeof(buf));
    }

    ~FastOutput() {
        flush();
        if (cl)
            fclose(outfl);
    }
};

FastInput<4096> fin;
FastOutput<4096> fout;

const int maxn = 57;
const int maxm = 57;
const int maxw = 57;

vector<pair<int, int> > tree[maxn];

int mdp[maxn][maxn][maxm][maxm];

bool is_leaf(int u, int par) {
    return tree[u].size() == 0 || (tree[u].size() == 1 && tree[u][0].ff == par);
}

int dp(int u, int par, int m, int cu) {
    if (mdp[u][par][m][cu] == -1) {
        if (m == 0) {
            mdp[u][par][m][cu] = 0;
        } else if (is_leaf(u, par)) {
            ll x;
            if ((x = mdp[u][0][m - cu][m - cu]) == -1)
                x = dp(u, 0, m - cu, m - cu);
            mdp[u][par][m][cu] = x;
        } else {
            assert(cu != 0);

            int l = 0, r = maxn * m * maxw;
            while (l < r - 1) {
                int mid = (l + r) / 2;

                ll canm = 1;
                for (auto p : tree[u]) {
                    int v = p.ff;
                    if (v != par) {
                        ll ncan = canm;
                        forrn(j, 1, cu + 1) {
                            ll x;
                            if ((x = mdp[v][u][m][j]) == -1)
                                x = dp(v, u, m, j);
                            if (x + p.ss >= mid)
                                ncan |= canm << (ll)j;
                        }
                        canm = ncan;
                    }
                }

                if ((canm >> cu) & 1)
                    l = mid;
                else
                    r = mid;
            }

            mdp[u][par][m][cu] = l;
        }
    }
    return mdp[u][par][m][cu];
}

int numx[maxn];
int numf[maxn];

void dfs(int u, int par) {
    numf[u] = numx[u];
    for (auto p: tree[u]) {
        if (p.ff != par) {
            dfs(p.ff, u);
            numf[u] += numf[p.ff];
        }
    }
}

int main() {
    memset(mdp, 0xff, sizeof(mdp));
    // Code here:

    int n = fin.readInt();
    forn(i, n - 1) {
        int u = fin.readInt();
        int v = fin.readInt();
        int w = fin.readInt();
        tree[u].pb(mp(v, w));
        tree[v].pb(mp(u, w));
    }

    int s = fin.readInt();
    int m = fin.readInt();
    forn(i, m) {
        numx[fin.readInt()]++;
    }
    dfs(s, 0);

    int ans = INF;
    for (auto p : tree[s]) {
        ans = min(ans, dp(p.ff, s, m, numf[p.ff]) + p.ss);
    }

    fout.writeInt(ans, "\n");
    
    return 0;
}
