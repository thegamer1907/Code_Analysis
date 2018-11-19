#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  bool *tasks;
  cin >> n >> k;
  tasks = new bool[1 << k]{false};

  int tmp1, tmp2;
  for(int i = 0; i < n; i++) {
    tmp2 = 0;
    for(int j = 0; j < k; j++) {
      cin >> tmp1;
      tmp2 += (1 << j)*tmp1;
    }
    tasks[tmp2] = true;
  }

  if(tasks[0]) {
    cout << "YES" <<endl;
    return 0;
  }

  for(int i = 0; i < (1 << k); i++) {
    for(int j = i + 1; j < (1 << k); j++) {
      if(tasks[i] && tasks[j] && ((i | j) == (i + j))) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}