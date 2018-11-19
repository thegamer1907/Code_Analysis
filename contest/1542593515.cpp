#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

#define f(i, a, b) for(int i = a; i < b; i++)
#define clr(a, b) memset(a, b, sizeof a)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
#define N 100
string words[N];

int main() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  f(i, 0, n) {
    cin >> words[i];
  }
  bool can = false;
  f(i, 0, n) {
    if (s == words[i]) can = true;
    f(j, 0, n) {
      string t = "";
      t += words[i][1];
      t += words[j][0];
      if (s == t) can = true;
    }
  }
  cout << (can ? "YES" : "NO") << endl;
}
