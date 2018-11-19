#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

#define mp make_pair
#define pb push_back
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

bool check(int b, int arr[]) {
  int r3 = b % 2; b /= 2;
  int r2 = b % 2; b /= 2;
  int r1 = b % 2; b /= 2;
  int r0 = b % 2;
  if (arr[0] == 1 && r0 == 1) return false;
  if (arr[1] == 1 && r1 == 1) return false;
  if (arr[2] == 1 && r2 == 1) return false;
  if (arr[3] == 1 && r3 == 1) return false;
  return true;
}

int main() {
  //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(false); cin.tie(0);

  int t[16][4] = {
                {0, 0, 0, 0},
                {0, 0, 0, 1},
                {0, 0, 1, 0},
                {0, 0, 1, 1},
                {0, 1, 0, 0},
                {0, 1, 0, 1},
                {0, 1, 1, 0},
                {0, 1, 1, 1},
                {1, 0, 0, 0},
                {1, 0, 0, 1},
                {1, 0, 1, 0},
                {1, 0, 1, 1},
                {1, 1, 0, 0},
                {1, 1, 0, 1},
                {1, 1, 1, 0},
                {1, 1, 1, 1}
              };

  int n, k, x;
  scanf("%d%d", &n, &k);

  int c[4] = {1, 2, 4, 8};

  set<int> s;

  while (n--) {
    int r = 0;
    for (int i = 0; i < k; i++) {
      scanf("%d", &x);
      r += x * c[i];
    }
    s.insert(r);
  }

  for (auto el: s) {
    for (int i = 0; i < 16; i++) {
      if (check(el, t[i])) {
        int f = t[i][0] * 8 + t[i][1] * 4 + t[i][2] * 2 + t[i][3];
        if (s.find(f) != s.end()) {
          cout << "YES";
          return 0;
        }
      }
    }
  }

  cout << "NO";

  return 0;
}
