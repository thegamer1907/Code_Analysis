#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <locale>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <stdint.h>
#include <cassert>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <list>
#include <bitset>
#include <map>
#include <set>

#define FOR(i, n) for (size_t i = 0; i < n; ++i)

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const long double PI = 3.141592653589793238L;

template <typename T = ll>
T next() {
  T result;
  std::cin >> result;
  return result;
}

template <typename T = ll, typename C = std::vector<T>>
C nextv(size_t n) {
  C result(n);
  FOR(i, n) {
    std::cin >> result[i];
  }

  return result;
}

template <typename T = ll, typename C = std::vector<T>>
C nextv() {
  int n;
  std::cin >> n;
  return nextv<T, C>(n);
}


struct pairhash {
  template <typename T, typename U>
  std::size_t operator()(const std::pair<T, U>& x) const {
    return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
  }
};

ll compute_gcd(ll a, ll b) {
  if (b == 0) return a;
  return compute_gcd(b, a % b);
}

ull compute_lcm(ull a, ull b) {
  ull gcd = compute_gcd(a, b);
  return a / gcd * b;
}

int mod_mul(int a, int b, int mod) {
  return ((ll)a * b) % mod;
}

int mod_add(int a, int b, int mod) {
  return ((ll)a + b) % mod;
}

int mod_pow(int base, int exp, int mod) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = mod_mul(result, base, mod);
    base = mod_mul(base, base, mod);
    exp /= 2;
  }
  return result;
}

long long choose(int n, int k) {
  if (k == 0 || n == 0) return 1;

  long long result = n * choose(n - 1, k - 1) / k;
  return result;
}

double distance(double point_x, double point_y, double line_x1, double line_y1, double line_x2, double line_y2) {
  double nom = abs((line_y2 - line_y1) * point_x - (line_x2 - line_x1) * point_y + line_x2 * line_y1 - line_y2 * line_x1);
  double denom = sqrt((line_y2 - line_y1) * (line_y2 - line_y1) + (line_x2 - line_x1) * (line_x2 - line_x1));
  return nom / denom;
}

template <typename T>
T sign(T value) {
  if (value > 0) return 1;
  if (value < 0) return -1;
  return 0;
}

using namespace std;

//-SOLUTION-STARTS-HERE-----------------------------------------------------------------------------------------

bool canCook(ll desiredHamburers, ll r, vector<ll> const & atHome, vector<ll> const & prices, vector<ll> const & recipe) {
  FOR(i, recipe.size()) {
    auto requred = recipe[i] * desiredHamburers;
    requred -= atHome[i];
    if (requred <= 0) continue;

    r -= prices[i] * requred;
  }

  return r >= 0;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("Source.txt", "rt", stdin);
#endif
  ios_base::sync_with_stdio(false);

  auto s = next<string>();
  auto atHome = nextv(3);
  auto prices = nextv(3);
  auto r = next();

  vector<ll> recipe(3, 0);
  FOR(i, s.size()) {
    if (s[i] == 'B') ++recipe[0];
    else if (s[i] == 'S') ++recipe[1];
    else ++recipe[2];
  }

  ll hamburgers = 0;
  ll i = 0;
  ll j = 2e12;

  while (i < j) {
    ll m = (j - i) / 2 + i;
    bool can = canCook(m, r, atHome, prices, recipe);
    if (can) {
      i = m + 1;
      hamburgers = m;
    }
    else {
      j = m;
    }
  }

  cout << hamburgers;

  return 0;
}