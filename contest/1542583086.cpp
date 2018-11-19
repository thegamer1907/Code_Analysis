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



int main() {
  //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(false); cin.tie(0);

  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h %= 12;
  t1 %= 12;
  t2 %= 12;
  t1 *= 5;
  t2 *= 5;

  ld M = m + s / 60.0;
  ld H = h * 5 + M / 60.0;

  ld x[3] = {(ld)s, M, H};

  if (t1 > t2) swap(t1, t2);

  sort(x, x + 3);

  ld p1 = x[0], p2 = x[1], p3 = x[2];

  int p12 = 0, p23 = 0;

  if ((p1 <= t1 &&  t1 <= p2)) p12++;
  if ((p1 <= t2 &&  t2 <= p2)) p12++;
  if ((p2 <= t1 &&  t1 <= p3)) p23++;
  if ((p2 <= t2 &&  t2 <= p3)) p23++;

  if (p12 == 1 || p23 == 1) {
    cout << "NO";
  } else {
    cout << "YES";
  }



  return 0;
}
