#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#define DEBUG(args...) { vector<string> _v = aux::split(#args, ','); aux::err(_v.begin(), args); }
#else
#define DEBUG(args...) { }
#endif

namespace aux{

template<std::size_t...> struct seq{};

template<std::size_t N, std::size_t... Is>
struct gen_seq : gen_seq<N-1, N-1, Is...>{};

template<std::size_t... Is>
struct gen_seq<0, Is...> : seq<Is...>{};

template<class Ch, class Tr, class Tuple, std::size_t... Is>
void print_tuple(std::basic_ostream<Ch,Tr>& os, Tuple const& t, seq<Is...>) {
  using swallow = int[];
  (void)swallow{0, (void(os << (Is == 0? "" : ", ") << std::get<Is>(t)), 0)...};
}


vector<string> split(const string& s, char c) {
	vector<string> v;
	stringstream ss(s);
	string x;
	while (getline(ss, x, c)) {
		v.emplace_back(x);
    }
    return v;
}

void err(vector<string>::iterator it) {}

template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args) {
	cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << '\n';
	err(++it, args...);
}
} // aux::

template<class Ch, class Tr, class... Args>
auto operator<<(std::basic_ostream<Ch, Tr>& os, std::tuple<Args...> const& t)
    -> std::basic_ostream<Ch, Tr>& {
    os << "(";
    aux::print_tuple(os, t, aux::gen_seq<sizeof...(Args)>());
    return os << ")";
}

template<class S, class T>
std::ostream & operator<<(std::ostream & o, const std::pair<S,T> & p) {
    return o << "(" << p.first << ", " << p.second << ")";
}

template<class T>
std::ostream & operator<<(std::ostream & os, const std::vector<T> & vec) {
    os<<"[";
    if(vec.size() != 0) {
        std::copy(vec.begin(), vec.end()-1, std::ostream_iterator<T>(os, ", "));
        os<<vec.back();
    }
    return os<<"]";
}

template<class T>
std::ostream & operator<<(std::ostream & os, const std::set<T> & s) {
    os<<"{";
    if(s.size() != 0) {
        std::copy(s.begin(), --s.end(), std::ostream_iterator<T>(os, ", "));
        os<<*(--s.end());
    }
    return os<<"}";
}

template <class It, char Delim = ' '>
void print_range(It a, It b) {
    for (auto it = a; it != b; it++) {
        cout << *it << Delim;
    }
    cout  << "\n";
}

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

struct Test {
    Test(int test_number) : test_number(test_number) {
    }

    int test_number;

    void solve();

    void run() {
        auto start = chrono::steady_clock::now();
        solve();
        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cerr << "Running time: " << chrono::duration_cast<chrono::milliseconds>(diff).count() << "ms\n";
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout.setf(ios::fixed);
    cout.precision(9);

    cerr.setf(ios::fixed);
    cerr.precision(3);

    int num_tests = 1;
    for (int i = 1; i <= num_tests; i++) {
        Test cur(i);
        cur.run();
    }
}


////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////


const int MAX_N = 205; // TODO
const int M = 11;
const int INF = 0x3f3f3f3f;
const int MOD = 1000000007;

int n;
string s[MAX_N];
int m;
string pref[MAX_N], suf[MAX_N];
int ms[MAX_N][M + 1][1 << (M + 1)];

void Test::solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        pref[i] = suf[i] = s[i];
        for (int sz = 1; sz <= min<int>(s[i].size(), M); sz++) {
            for (int a = 0; a + sz <= (int)s[i].size(); a++) {
                string cur = s[i].substr(a, sz);
                int msk = 0;
                for (int j = 0; j < (int)cur.size(); j++) {
                    if (cur[j] == '1') {
                        msk |= (1 << j);
                    }
                }
                ms[i][sz][msk] = 1;
            }
        }
    }
    cin >> m;
    for (int i = n; i < n + m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        pref[i] = pref[a] + pref[b];
        suf[i] = suf[a] + suf[b];
        if (pref[i].size() > M) {
            pref[i] = pref[i].substr(0, M);
        }
        if (suf[i].size() > M) {
            suf[i] = suf[i].substr((int)suf[i].size() - M);
        }
        for (int sz = 1; sz <= M; sz++) {
            for (int k = 0; k < (1 << sz); k++) {
                ms[i][sz][k] = ms[a][sz][k] | ms[b][sz][k];
            }
            for (int l = 1; l < sz; l++) {
                string res;
                if (l > (int)suf[a].size() || sz - l > (int)pref[b].size()) {
                    continue;
                }
                res = suf[a].substr((int)suf[a].size() - l) + pref[b].substr(0, sz - l);
                int msk = 0;
                for (int j = 0; j < (int)res.size(); j++) {
                    if (res[j] == '1') {
                        msk |= (1 << j);
                    }
                }
                ms[i][sz][msk] = 1;
            }
        }
        bool f = false;
        for (int ans = M; ans >= 0; ans--) {
            if (count(ms[i][ans], ms[i][ans] + (1 << ans), 0) == 0) {
                cout << ans << endl;
                f = true;
                break;
            }
        }
        if (!f) {
            cout << 0 << endl;
        }
    }
}
