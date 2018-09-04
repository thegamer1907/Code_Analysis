#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <list>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

const int maxn = 30;
int dp[maxn][10];
int go(int num_digits, int sum) {
  if (num_digits == 0) return sum == 0;

  int& ans = dp[num_digits][sum];
  if (ans != -1) return ans;

  ans = 0;
  for (int i = 0; i <= sum; i++) {
    ans += go(num_digits - 1, sum - i);
  }
  return ans;
}

int count(int num_digits) {
  int ans = 0;
  for (int i = 1; i < 10; i++) {
    ans += go(num_digits - 1, 10 - i);
  }
  return ans;
}

int main() {
  int n;
  cin >> n;

  memset(dp, -1, sizeof(dp));
  int tmp;
  int num_digits = 1;
  while ((tmp = count(num_digits)) < n) {
    n -= tmp;
    num_digits++;
  }

  int sum = 10;
  for (int i = 0; i < num_digits; i++) {
    int start = i == 0 ? 1 : 0;
    int tmp;
    while (start < 10 && (tmp = go(num_digits - i - 1, sum - start)) < n) {
      n -= tmp;
      start++;
    }
    sum -= start;
    cout << start;
  }
  cout << endl;

  return 0;
}
