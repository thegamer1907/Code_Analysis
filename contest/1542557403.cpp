#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <list>
#include <stack>
#include <bitset>
#include <cmath>
#include <climits>
#include <cassert>
#include <string.h>

using namespace std;

#define MAX_K 12

struct numset{
  set<unsigned long> slen[MAX_K + 1];
  int k;
  string prefix;
  string suffix;
};

int n, m;

void parse_string(string& s, numset& ns) {
  ns.k = 0;
  for (int len = 1; len <= MAX_K; ++len) {
    unsigned long val = 0;
    int i = 0;
    for (; i < len && i < s.length(); ++i) {
      val = val << 1;
      val |= (s[i] - '0');
    }
    if (i < len) {
      continue;
    }
    ns.slen[len].insert(val);
    unsigned long mask = (1 << len) - 1;
    while (i < s.length()) {
      val = val << 1;
      val &= mask;
      val |= (s[i] - '0');
      ns.slen[len].insert(val);
      ++i;
    }
    if (ns.slen[len].size() == (1 << len)) {
      ns.k = len;
    }
  }
  ns.prefix = s;
  ns.suffix = s;
}

void merge_ns(numset& ns1, numset& ns2, numset& target) {
  target.k = max(ns1.k, ns2.k);
  target.prefix = (ns1.prefix.length() >= MAX_K ? ns1.prefix : ns1.prefix + ns2.prefix);
  target.suffix = (ns2.suffix.length() >= MAX_K ? ns2.suffix : ns1.suffix + ns2.suffix);
  string tmpstr = ns1.suffix + ns2.prefix;
  for (int len = target.k + 1; len <= MAX_K; ++len) {
    target.slen[len] = ns1.slen[len];
    for (int num : ns2.slen[len]) {
      target.slen[len].insert(num);
    }
    unsigned long val = 0;
    int i = 0;
    for (; i < len && i < tmpstr.length(); ++i) {
      val = val << 1;
      val |= (tmpstr[i] - '0');
    }
    if (i == len) {
      target.slen[len].insert(val);
      unsigned long mask = (1 << len) - 1;
      while (i < tmpstr.length()) {
        val = val << 1;
        val &= mask;
        val |= (tmpstr[i] - '0');
        target.slen[len].insert(val);
        ++i;
      }
    }
    if (target.slen[len].size() == (1 << len)) {
      target.k = len;
    }
  }
}

int main(int argc, char** argv) {
  std::ios::sync_with_stdio(false);

  cin >> n;
  vector<numset> vns(n);
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    parse_string(s, vns[i]);
  }
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    vns.push_back(numset());
    merge_ns(vns[a], vns[b], vns.back());
    cout << vns.back().k << "\n";
  }
}