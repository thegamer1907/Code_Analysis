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

string vs[100];
set<string> ss;
string pwds;
int n;

int main(int argc, char** argv) {
  std::ios::sync_with_stdio(false);

  cin >> pwds;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> vs[i];
  }
  string tmp(2, 0);
  for (int i = 0; i < n; ++i) {
    ss.insert(vs[i]);
    for (int j = 0; j < n; ++j) {
      tmp[0] = vs[i][1];
      tmp[1] = vs[j][0];
      ss.insert(tmp);
      tmp[0] = vs[j][1];
      tmp[1] = vs[i][0];
      ss.insert(tmp);
    }
  }
  cout << (ss.count(pwds) ? "YES" : "NO") << "\n";
}