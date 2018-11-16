#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, a, countOne = 0, countZero = 0, maxZero = -1;
  cin >> n;
  while(n--) {
    cin >> a;
    if(a == 1) {
      countOne++;
      if(countZero != 0) {
        countZero--;
      }
    } else {
      countZero++;
      if(countZero > maxZero) {
        maxZero = countZero;
      }
    }
  }
  cout << countOne + maxZero;
  return 0;
}