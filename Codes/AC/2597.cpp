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
    T temp;
    std::cin >> temp;
    result[i] = temp;
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
  size_t operator()(const std::pair<T, U>& x) const {
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

using namespace std;

//-SOLUTION-STARTS-HERE-----------------------------------------------------------------------------------------

vector<int> sieve(int maxValue) {
  vector<bool> isPrime(maxValue + 1, true);
  isPrime[0] = false;
  isPrime[1] = false;

  int p = 2;
  for (; p <= maxValue; ++p) {
    if (!isPrime[p]) continue;
    for (int i = p + p; i <= maxValue; i += p) {
      isPrime[i] = false;
    }
  }

  vector<int> primes;
  for (int i = 0; i < isPrime.size(); ++i) {
    if (isPrime[i]) primes.push_back(i);
  }

  return primes;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("Source.txt", "rt", stdin);
#endif
  ios_base::sync_with_stdio(false);

  const int N = 1e7;

  vector<int> counts(N + 1, 0);

  auto n = next();
  FOR(i, n) {
    auto v = next();
    ++counts[v];
  }

  vector<ll> divisors(N + 1, 0);
  vector<bool> isPrime(N + 1, true);

  int p = 2;
  for (; p <= N; ++p) {
    if (!isPrime[p]) continue;
    for (int i = p; i <= N; i += p) {
      divisors[p] += counts[i];
      if (i != p) isPrime[i] = false;
    }
  }

  for (int i = 1; i < divisors.size(); ++i) {
    divisors[i] += divisors[i - 1];
  }

  auto m = next();

  FOR(i, m) {
    auto l = min<ll>(next(), divisors.size() - 1);
    auto r = min<ll>(next(), divisors.size() - 1);

    cout << divisors[r] - divisors[l-1] << endl;
  }


  return 0;
}
