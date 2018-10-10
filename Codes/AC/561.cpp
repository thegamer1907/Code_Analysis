#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int64;

int64 ways_cache[11][30];

int64 ways(int balls, int len) {
  if (len == 0) {
    return balls == 0;
  }
  int64 &ans = ways_cache[balls][len];
  if (ans != -1) {
    return ans;
  }
  
  ans = 0;
  for (int i = 0; i <= min(9, balls); i++) {
    int64 next = ways(balls - i, len - 1);
    ans += next;
  }
  return ans;
}

int64 total(int last_digit, int len, int balls) {
  int64 ans = 0;
  for (int i = 0; i <= last_digit; i++) {
    ans += ways(balls - i, len - 1);
  }
  return ans;
}

int main() {
  int x;
  cin >> x;
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 30; j++) {
      ways_cache[i][j] = -1;
    }
  }
  
  int len = 0;
  for (int i = 0; i < 30; i++) {
    if (ways(10, i) >= x) {
      len = i;
      break;
    }
  }

  int left = 10;
  for (int i = 0; i < len; i++) {
    int d = i == 0 ? 1 : 0;
    while (total(d, len - i, left) < x) {
      d++;
    }
    x -= total(d - 1, len - i, left);
    
    left -= d;
    cout << d;
  }
  cout << endl;
  
  return 0;
}