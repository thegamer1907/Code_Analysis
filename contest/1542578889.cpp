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

const int MASK = 16;

int n, k;
bool has_mask[MASK];

bool get_bit(int mask, int pos) {
  return (mask & (1 << pos)) != 0;
}

int main()
{
#ifdef LOCAL
	freopen ("input.txt", "r", stdin);
#endif

  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; i++) {
    int mask = 0;
    for (int j = 0; j < k; j++) {
      int x;
      scanf("%d", &x);
      mask = mask * 2 + x;
    }
    has_mask[mask] = true;
  }

  for (int mask = 1; mask < (1 << (1 << k)); mask++) {
    bool can = true;
    int len = 0;
    vector<int> cnt(k);
    for (int i = 0; i < 16; i++) {
      if (!get_bit(mask, i)) {
        continue;
      }
      if (!has_mask[i]) {
        can = false;
        break;
      }
      len++;
      for (int t = 0; t < k; t++) {
        if (get_bit(i, t)) {
          cnt[t]++;
        }
      }
    }
    if (!can) {
      continue;
    }
    bool good = true;
    for (int c : cnt) {
      if (2 * c > len) {
        good = false;
      }
    }
    if (good) {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");

	return 0;
}
