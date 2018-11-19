#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <functional>
#include <sstream>
#include <fstream>
#include <valarray>
#include <complex>
#include <queue>
#include <cassert>
#include <bitset>
using namespace std;

#ifdef LOCAL
	#define debug_flag 1
#else
	#define debug_flag 0
#endif

template <class T1, class T2 >
std::ostream& operator << (std::ostream& os, const pair<T1, T2> &p) 
{
	os << "[" << p.first << ", " << p.second << "]";
	return os;
}

template <class T >
std::ostream& operator << (std::ostream& os, const std::vector<T>& v) 
{
	os << "[";
	bool first = true;
	for (typename std::vector<T>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		if (!first)
			os << ", ";
		first = false;
		os << *it;
	}
	os << "]";
	return os;
}

  template <class T >
std::ostream& operator << (std::ostream& os, const std::set<T>& v) 
{
	os << "[";
	bool first = true;
	for (typename std::set<T>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		if (!first)
			os << ", ";
		first = false;
		os << *it;
	}
	os << "]";
	return os;
}

#define dbg(args...) { if (debug_flag) { _print(_split(#args, ',').begin(), args); cerr << endl; } else { void(0);} }

vector<string> _split(const string& s, char c) {
	vector<string> v;
	stringstream ss(s);
	string x;
	while (getline(ss, x, c))
		v.emplace_back(x);
	return v;
}

void _print(vector<string>::iterator) {}
template<typename T, typename... Args>
void _print(vector<string>::iterator it, T a, Args... args) {
    string name = it -> substr((*it)[0] == ' ', it -> length());
    if (isalpha(name[0]))
	    cerr << name  << " = " << a << " ";
	else
	    cerr << name << " ";
	_print(++it, args...);
}

typedef long long int int64;

const int N = 300;
const int L = 30;

int64 get_mask_pref(int64 mask, int len) {
  return (mask & ((1LL << len) - 1));
}

int64 get_mask_suff(int64 mask, int mask_len, int len) {
  mask = (mask >> (mask_len - len));
  return get_mask_pref(mask, len);
}

struct Str {
  int len;
  int64 pref;
  int64 suff;
  set<int64> masks;

  Str() : len(), pref(), suff(), masks() {}

  Str merge_with(const Str &second) const {
    Str res;

    res.len = min(L, len + second.len);

    if (len == L) {
      res.pref = pref;
    } else {
      int second_len = min(second.len, L - len);
      res.pref = pref + (get_mask_pref(second.pref, second_len) << len); 
    }

    if (second.len == L) {
      res.suff = second.suff;
    } else {
      int first_len = min(len, L - second.len);
      res.suff = get_mask_suff(suff, len, first_len) + (second.suff << first_len);
    }

    res.masks = masks;
    for (int64 m : second.masks) {
      res.masks.insert(m);
    }
    for (int l1 = 1; l1 <= len; l1++) {
      for (int l2 = 1; l2 <= second.len; l2++) {
        if (l1 + l2 > L) {
          continue;
        }
        int64 m = get_mask_suff(suff, len, l1) + (get_mask_pref(second.pref, l2) << l1);
        m |= (1LL << (l1 + l2));
        res.masks.insert(m);
      }
    }

    return res;
  }

  int get_ans() const {
    int k = 0;
    while (true) {
      if (k == L) {
        assert(false);
      }
      bool good = true;
      for (int mask = 0; mask < (1 << (k + 1)); mask++) {
        int m = (mask | (1 << (k + 1)));
        if (masks.count(m) == 0) {
          good = false;
          break;
        }
      }
      if (!good) {
        break;
      }
      k++;
    }
    return k;
  }
};

int n;
string s_list[N];
int m;
int a_list[N], b_list[N];
Str str_list[N];

int main()
{
#ifdef LOCAL
	freopen ("input.txt", "r", stdin);
#endif

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s_list[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> a_list[i] >> b_list[i];
    a_list[i]--;
    b_list[i]--;
  }

  for (int i = 0; i < n; i++) {
    Str cur;
    cur.len = min(L, (int)s_list[i].length());
    
    cur.pref = 0;
    for (int a = 0; a < cur.len; a++) {
      if (s_list[i][a] == '1') {
        cur.pref |= (1LL << a);
      }
    }

    cur.suff = 0;
    for (int a = 0; a < cur.len; a++) {
      cur.suff *= 2;
      if (s_list[i][(int)s_list[i].length() - 1 - a] == '1') {
        cur.suff++;
      }
    }

    for (int a = 0; a < (int)s_list[i].length(); a++) {
      int64 cur_mask = 0;
      for (int b = a; b < (int)s_list[i].length(); b++) {
        int pos = b - a;
        if (pos == L) {
          break;
        }
        if (s_list[i][b] == '1') {
          cur_mask |= (1LL << pos);
        }
        cur.masks.insert(cur_mask | (1LL << (pos + 1)));
      }
    }

    str_list[i] = cur;
  }

  for (int i = 0; i < m; i++) {
    int a = a_list[i];
    int b = b_list[i];
    Str cur = str_list[a].merge_with(str_list[b]);
    str_list[n + i] = cur;
    int ans = cur.get_ans();
    printf("%d\n", ans);
  }

	return 0;
}
