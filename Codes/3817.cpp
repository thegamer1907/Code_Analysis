#include<bits/stdc++.h>
#define DEBUG(x) cout << #x << " = " << x << endl

using namespace std;

string rcp;
long long x[3];
long long n[3], p[3];
long long r;

int main() {
  /* freopen("input.txt", "r", stdin); */
  cin >> rcp;
  for (auto c: rcp) {
    if (c == 'B') x[0]++;
    else if (c == 'S') x[1]++;
    else x[2]++;
  }
  cin >> n[0] >> n[1] >> n[2];
  cin >> p[0] >> p[1] >> p[2];
  cin >> r;
  
  long long left = -1;
  long long right = 1e12 + 100 + 1;

  while (left + 1 < right) {
    long long mid = (left + right) / 2;
    long long m = 0;
    for (int i = 0; i < 3; i++) {
      if (x[i] * mid > n[i]) m += (x[i] * mid - n[i]) * p[i];
    }

    if (m > r) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << left;
}
