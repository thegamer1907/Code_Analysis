#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

template<typename T>
void
_dbg(char const* s, const T& t)
{
    cout << s << "=" << t << endl;
}
template<typename T, typename... TA>
void
_dbg(char const* s, const T& t, const TA&... ta)
{
    while (*s != ',')
        cout << *s++;
    cout << "=" << t << ",";
    _dbg(s + 1, ta...);
}
template<typename T1, typename T2>
ostream&
operator<<(ostream& os, const pair<T1, T2>& p)
{
    return os << "{" << p.first << "," << p.second << "}";
}
template<typename T>
ostream&
operator<<(ostream& os, const vector<T>& v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
        {
            if (it != v.begin())
                os << ",";
            os << *it;
        }
    return os << "}";
}
template<typename T1, typename T2>
ostream&
operator<<(ostream& os, const map<T1, T2>& mp)
{
    os << "{";
    for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if (it != mp.begin())
                os << ",";
            os << *it;
        }
    return os << "}";
}
template<typename T>
ostream&
operator<<(ostream& os, const set<T>& s)
{
    os << "{";
    for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (it != s.begin())
                os << ",";
            os << *it;
        }
    return os << "}";
}
template<typename T>
ostream&
operator<<(ostream& os, const multiset<T>& s)
{
    os << "{";
    for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (it != s.begin())
                os << ",";
            os << *it;
        }
    return os << "}";
}
template<size_t N>
ostream&
operator<<(ostream& os, const bitset<N>& bs)
{
    os << "{";
    for (size_t i = 0; i < N; ++i)
        {
            cout << bs[i];
        }
    return os << "}";
}

#ifdef LOCAL
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...)
#endif
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define reunique(x) (x).resize(std::unique(all(x)) - (x).begin())
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<ld, ld>;

void
solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    int maxel = *std::max_element(all(v));
    int answ2 =  maxel + m;

    for(int i = 0; i < n; ++i)
    {
        while( v[i] < maxel && m)
            (++v[i], --m);
        if(!m)
        {
            cout << maxel <<  " " << answ2;
            return;
        }
    }

    cout << maxel + m/n + (m % n == 0 ? 0 : 1) << " "  << answ2 ;

}

int
main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    //    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        {
            cout << "test " << i << endl;
            solve();
            cout << endl;
        }
#else

    solve();
#endif
    return 0;
}
