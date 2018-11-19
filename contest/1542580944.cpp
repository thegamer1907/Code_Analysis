#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  t1 = (t1 % 12) * 3600;
  int arr[3] = {(h % 12) * 3600 + m * 60 + s, m * 720 + s * 12, s * 720};
  t2 = (t2 % 12) * 3600;
  if (t1 > t2) {
    swap(t1, t2);
  }
  int cnt1 = 0, cnt2 = 0;
  int start = 0, finish = 43199;
  for (int i = 0; i < 3; i++) {
    if (t1 <= arr[i] && arr[i] <= t2) {
      cnt1++;
    }
    if (t2 <= arr[i] && arr[i] <= finish) {
      cnt2++;
    }
    if (start <= arr[i] && arr[i] <= t1) {
      cnt2++;
    }
  }
  int ok = 0;
  if (cnt1 == 3) {
    ok = 1;
  }
  if (cnt2 == 3) {
    ok = 1;
  }
  if (ok) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}