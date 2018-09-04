#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

vector<int> pi;

void build_ff(const string &s) {
  int n = s.length() - 1;
  pi.resize(n + 1);
  pi[1] = 0;
  int k = 0;
  for(int q = 2; q <= n; ++q) {
    while(k > 0 and s[k+1] != s[q]) {
      k = pi[k];
    }
    pi[q] = k = (s[k+1] == s[q] ? k+1 : k);
  }
}

int main() {
  string s; cin >> s;
  int n = s.length();
  s = (string)"#" + s;
  build_ff(s);
  int max_middle = 0;
  set<int> prev;
  for(int i = 2; i < n; ++i) {
    if(prev.count(pi[i]) == 0) {
      prev.insert(pi[i]);
    }
  }
  int curr = n;
  while(pi[curr] > 0) {
    if(prev.count(pi[curr])) {
      cout << s.substr(1, pi[curr]) << "\n";
      return 0;
    }
    curr = pi[curr];
  }
  cout << "Just a legend\n";
}
