// tarptaeya
#include <bits/stdc++.h>
// base types
#define _i int
#define _l long
#define _ll long long
// containters
#define _str std::string
#define _v std::vector
#define _vi std::vector<int>
#define _vl std::vector<long>
#define _vll std::vector<long long>
#define _vstr std::vector<std::string>
#define _vvi std::vector<std::vector<int> >
#define _psb push_back
#define _ppb pop_back
#define _s std::set
#define _si std::set<int>
#define _sl std::set<long>
#define _sll std::set<long long>
#define _sstr std::set<std::string>
#define _ins insert
#define _rem remove
#define _p std::pair
#define _m std::map
#define _q std::queue
#define _ps push
#define _pp pop
// algorithms
#define _sort(a) std::sort(a.begin(), a.end())
// io
#define _fio std::ios_base::sync_with_stdio(0); std::cin.tie(0)
#define _in std::cin
#define _out std::cout
#define _nl std::endl
// general
#define _repi(i, a, b) for (int (i) = (a); i < (b); i++)
#define _repl(i, a, b) for (long (i) = (a); i < (b); i++)
#define _repll(i, a, b) for (long long (i) = (a); i < (b); i++)
#define _till while
#define _max(a, b) (a) > (b) ? (a) : (b)
#define _min(a, b) (a) < (b) ? (a) : (b)
#define _for(i,a) for (auto i : a)
#define _ord(a) a - '0'
#define _mod 1000000007
// https://stackoverflow.com/a/47434423
#define _inf (unsigned)!((int)0)

int main()
{
    _fio;
    _ll n, m;
    _in >> n >> m;
    _vll v(n);
    _repll(i, 0, n) {
        _in >> v[i];
    }
    _ll c = 0, mc = 0, s = 0;
    _ll i = 0, j = 0;
    _till(1) {
        s += v[j];
        c++;
        _till(s > m && i < n) {
            s -= v[i];
            i++;
            c--;
            if (i > j) {
                break;
            }
        }
        j++;
        mc = _max(c, mc);
        if (j >= n) {
            break;
        }
    }
    _out << mc << _nl;
}
